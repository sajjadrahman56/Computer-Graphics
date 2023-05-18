/**
    sample input:
                xmin=200, ymin=200
                xmax=400, ymax=400
                x1=150, y1=150
                x2=250, y2=250
*/

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

static int LEFT=1, RIGHT=2, BOTTOM=4, TOP=8, xmin, ymin, xmax, ymax;

int getcode(int x, int y)
{

    int code=0;
    if(y>ymax) code=TOP;
    if(y<ymin) code=BOTTOM;
    if(x<xmin) code=LEFT;
    if(x>xmax) code=RIGHT;

    return code;
}

int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(WHITE);

    cout<<"Enter min values of windows ";
    cin>>xmin>>ymin;
    cout<<"Enter max values of windows" ;
    cin>>xmax>>ymax;

    rectangle(xmin,ymin,xmax,ymax);

    int x1,y1,x2,y2;
    cout<<"Enter the endpoints of the line ";
    cin>>x1>>y1>>x2>>y2;

    line(x1,y1,x2,y2);

    getch();

    int outcode1=getcode(x1,y1), outcode2=getcode(x2,y2);

    int accept=0;
    while(1)
    {
        float m=(float)(y2-y1)/(x2-x1);

        if(outcode1==0 && outcode2==0) //(outcode1 & outcode2) == 0; completely inside
        {
            accept=1;
            break;
        }
        else if((outcode1 & outcode2)!=0) //completely outside
        {
            break;
        }
        else
        {
            int x,y,temp;

            if(outcode1==0) temp=outcode2;

            else temp=outcode1;

            if(temp & TOP)
            {
                x=x1+(ymax-y1)/m;
                y=ymax;
            }
            else if(temp & BOTTOM)
            {
                x=x1+(ymin-y1)/m;
                y=ymin;
            }
            else if(temp & LEFT)
            {
                x=xmin;
                y=y1+(xmin-x1)*m;
            }
            else if(temp & RIGHT)
            {
                x=xmax;
                y=y1+(xmax-x1)*m;
            }

            if(temp==outcode1)
            {
                x1=x;
                y1=y;
                outcode1=getcode(x1,y1);
            }
            else
            {
                x2=x;
                y2=y;
                outcode2=getcode(x2,y2);
            }
        }
    }

    cout<<"After clipping";
    if(accept)
    {
        cleardevice();//running operation will be removed
        rectangle(xmin,ymin,xmax,ymax);
        setcolor(GREEN);
        line(x1,y1,x2,y2);
        getch();
        closegraph();
    }
    else
    {
        cout<<"The line is completely outside the window";
    }


}
