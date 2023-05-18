/**
    2D Transformation Translation, Rotation and Scaling
    */

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

int main()
{

    int n;
    int x1, y1, x2, y2, x3,y3;
    int nx1, ny1, nx2, ny2, nx3, ny3;
    int tx, ty, sx, sy, angle, radianAngle, mx, my;

    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a triangle: ";
    cin>>x1>>y1;
    cout<<"Enter the second co-ordinates of a triangle: ";
    cin>>x2>>y2;
    cout<<"Enter the third co-ordinates of a triangle: ";
    cin>>x3>>y3;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    cout<<"\n\t1. Translation.\n\t2. Rotation.\n\t3. Scaling\n\t4. Exit.\n";
    cout<<"\n\tEnter your choice: ";
    cin>>n;

    switch(n)
    {
    case 1:
        cout<<"\n\tEnter the translation vector: ";
        cin>>tx>>ty;

        nx1=x1+tx;
        ny1=y1+ty;
        nx2=x2+tx;
        ny2=y2+ty;
        nx3=x3+tx;
        ny3=y3+ty;

        setcolor(RED);
        line(nx1, ny1, nx2, ny2);
        line(nx2, ny2, nx3, ny3);
        line(nx3, ny3, nx1, ny1);

        getch();

    case 2:
        cout<<"\n\tEnter the angle: ";
        cin>>angle;

        radianAngle = (angle*3.14)/180;

        nx1 = abs(x1*cos(radianAngle) - y1*sin(radianAngle));
        ny1 = abs(x1*sin(radianAngle) + y1*cos(radianAngle));

        nx2 = abs(x2*cos(radianAngle) - y2*sin(radianAngle));
        ny2 = abs(x2*sin(radianAngle) + y2*cos(radianAngle));

        nx3 = abs(x3*cos(radianAngle) - y3*sin(radianAngle));
        ny3 = abs(x3*sin(radianAngle) + y3*cos(radianAngle));

        setcolor(GREEN);
        line(nx1, ny1, nx2, ny2);
        line(nx2, ny2, nx3, ny3);
        line(nx3, ny3, nx1, ny1);

        getch();

    case 3:

        cout<<"\n\tEnter the Scaling factor: ";
        cin>>sx>>sy;

        int mx, my;
        mx = (x1+x2+x3)/3;
        my = (y1+y2+y3)/3;

        nx1 = mx + (x1 - mx)*sx;
        ny1 = my + (y1 - my)*sy;
        nx2 = mx + (x2 - mx)*sx;
        ny2 = my + (y2 - my)*sy;
        nx3 = mx + (x3 - mx)*sx;
        ny3 = my + (y3 - my)*sy;

        setcolor(BLUE);
        line(nx1, ny1, nx2, ny2);
        line(nx2, ny2, nx3, ny3);
        line(nx3, ny3, nx1, ny1);


        getch();



        case 4: break;
        default:
            cout<<"\n\tEnter correct number above the list";
            {
                closegraph();
            }

    }


}
