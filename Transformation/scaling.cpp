/**
Scaling for line */

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

/*
int main()
{

    double x1, y1, x2, y2;
    double new_x1, new_x2, new_y1, new_y2;
    double sx, sy;


    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a line: ";
    cin>>x1>>y1;
    cout<<"Enter the second co-ordinates of a line: ";
    cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);

    cout<<"Enter the Scaling factor: ";
    cin>>sx>>sy;

    new_x1=x1*sx;
    new_y1=y1*sy;
    new_x2=x2*sx;
    new_y2=y2*sy;

    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);

    getch();
    closegraph();
    return 0;

}
*/

//scaling for triangle

int main()
{

    double x1, y1, x2, y2, x3, y3;
    double new_x1, new_x2, new_y1, new_y2, new_x3,new_y3;
    double sx, sy;


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

    cout<<"Enter the Scaling factor: ";
    cin>>sx>>sy;

    new_x1=x1*sx;
    new_y1=y1*sy;
    new_x2=x2*sx;
    new_y2=y2*sy;
    new_x3=x3*sx;
    new_y3=y3*sy;

    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);
    line(new_x2, new_y2, new_x3, new_y3);
    line(new_x3, new_y3, new_x1, new_y1);

    getch();
    closegraph();
    return 0;

}
