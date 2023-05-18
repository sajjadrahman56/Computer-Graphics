#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

/**
    input value
    10 10
    100 10
    100 50
*/
void ReflectionXY()
{

    int x1[3], y1[3], ry1[3], rx1[3]; //x1 reflect will change ry1
    int i;

    cout<<"\nReflection About X & Y.\n";
    cout<<"\nThree points of Triangle: ";

    for(i=0; i<3; i++)
    {

        cin>>x1[i];
        cin>>y1[i];
    }
    int gd, gm;
    gd = DETECT;

    initgraph(&gd, &gm, "");

    int max_x = getmaxx();
    int max_y = getmaxy();

    cout<<"Max x = "<<max_x;
    cout<<"Max y = "<<max_y;

    //To calculate mid value of x & y
    int mid_x = max_x/2;
    int mid_y = max_y/2;

    //code to displace points according to axis
    for(i=0; i<3; i++)
    {

        x1[i]+=mid_x;

        if(y1[i]<0)
        {
            y1[i]=-y1[i];
            y1[i]+=mid_y;
        }
        else
        {
            y1[i]=mid_y-y1[i];
        }
    }

    cout<<"Max x = "<<max_x;
    cout<<"Max y = "<<max_y;

    //code to draw axis
    line(mid_x, 0, mid_x, max_y);
    line(0, mid_y, max_x, mid_y);

    //code to draw triangle
    line(x1[0],y1[0], x1[1],y1[1]);
    line(x1[1],y1[1], x1[2],y1[2]);
    line(x1[2],y1[2], x1[0],y1[0]);

    //code to reflect about x-axis
    int diffy;
    for(i=0; i<3; i++)
    {
        if(y1[i]>mid_y)
        {
            diffy=y1[i]-mid_y;
            ry1[i]=mid_y-diffy;
        }
        if(y1[i]<mid_y)
        {
            diffy=mid_y-y1[i];
            ry1[i]=mid_y+diffy;
        }
    }

    //code to reflect about y-axis
    int diff;
    for(i=0; i<3; i++)
    {

        if(x1[i]>mid_x)
        {
            diff=x1[i]-mid_x;
            rx1[i]=mid_x-diff;
        }
        if(x1[i]<mid_x)
        {
            diff=mid_x-x1[i];
            rx1[i]=mid_x+diff;
        }
    }

    //outtextxy(x1[2],y1[2]-5, "Original");
    setcolor(RED);

    //code to draw reflected triangle

    line(rx1[0],ry1[0], rx1[1],ry1[1]);
    line(rx1[1],ry1[1], rx1[2],ry1[2]);
    line(rx1[2],ry1[2], rx1[0],ry1[0]);

    getch();
    closegraph();

}

int main()
{

    ReflectionXY();


}

/**

//default

int main()
{
    int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int a=getmaxx();
	int b=getmaxy();
	int y=b/2;
	int x=a/2;
	line(x,0,x,b);
	line(0,y,a,y);
	int x1=x+100;
	int y1=y-100;
	int x2=x+150;
	int y2=y-150;
	line(x2,y2,x1,y1);
	line(x2,y+150,x1,y+100);
	line(x-100,y+100,x-200,y+100);
	line(x-150,y+150,x-200,y+100);
    line(x-100,y+100,x-150,y+150);
	line(x-100,y-100,x-150,y-150);
	line(x-150,y-150,x-200,y-100);
	line(x-200,y-100,x-100,y-100);
	getch();
	closegraph();
}
*/
