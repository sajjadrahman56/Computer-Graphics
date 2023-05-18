#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int  main()
{
    int i,gd=DETECT,gm;

    int x1,y1,x2,y2,xmin,xmax,ymin,ymax,xx1,xx2,yy1,yy2,dx,dy,flag=0;
    float t1,t2,p[4],q[4],temp;

    printf("\n****** Liang Barsky Line Clipping algorithm ***********");
    printf("\n Now, enter XMin, YMin =");

    scanf("%d %d",&xmin,&ymin);
    printf("\n First enter XMax, YMax =");
    scanf("%d %d",&xmax,&ymax);

    printf("\n Please enter intial point x1 and y1= ");
    scanf("%d %d",&x1,&y1);
    printf("\n Now, enter final point x2 and y2= ");
    scanf("%d %d",&x2,&y2);

    initgraph(&gd,&gm,"");
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);

    dx =  x2-x1;
    dy =  y2-y1;
    p[0] = -dx;
    p[1] = dx;
    p[2] = -dy;
    p[3] = dy;
    q[0] = x1 - xmin;
    q[1] = xmax - x1;
    q[2] = y1 - ymin;
    q[3] = ymax - y1;

    for(i=0; i<4; i++)
    {
        if(p[i]==0)
        {
            cout<<"line is parallel to one of the clipping boundary";
            if(q[i]<0)
            {
                flag = 1;
            }
        }
    }


    if(flag == 0)
    {
        t1=0;
        t2=1;

        for(i=0; i<4; i++)
        {
            temp=q[i]/p[i];

            if(p[i]<0)
            {
               t1 = max(t1,temp);
            }

            else
            {
                t2 = min(t2,temp);
            }
        }

        if(t1<t2)
        {
            xx1 = x1 + t1*dx;
            yy1 = y1 + t1*dy;

            xx2 = x1 + t2*dx;
            yy2 = y1 + t2*dy;

            flag = 2;
        }
    }

    delay(2000);

    if(flag == 2)
    {
        rectangle(xmin,ymin,xmax,ymax);

        setcolor(RED);
        line(xx1,yy1,xx2,yy2);
    }

    getch();
    closegraph();

}
