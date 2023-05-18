/**
rotation for triangle
input value
200 200
200 100
100 200 */

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>


int main()
{

    double x1, y1, x2, y2, x3, y3;
    double new_x1, new_x2, new_y1, new_y2, new_x3,new_y3;
    double angle, radianAngle;


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

    cout<<"Enter the angle: ";
	cin>>angle;

	radianAngle = (angle*3.14)/180;

    new_x1 = abs(x1*cos(radianAngle) - y1*sin(radianAngle));
    new_y1 = abs(x1*sin(radianAngle) + y1*cos(radianAngle));

    new_x2 = abs(x2*cos(radianAngle) - y2*sin(radianAngle));
    new_y2 = abs(x2*sin(radianAngle) + y2*cos(radianAngle));

    new_x3 = abs(x3*cos(radianAngle) - y3*sin(radianAngle));
    new_y3 = abs(x3*sin(radianAngle) + y3*cos(radianAngle));

    setcolor(BLUE);
    line(new_x1, new_y1, new_x2, new_y2);
    line(new_x2, new_y2, new_x3, new_y3);
    line(new_x3, new_y3, new_x1, new_y1);

    getch();
    closegraph();
    return 0;
}


//Rotation for line
/**
int main(){


    double x1, y1, x2, y2;
    double new_x1, new_x2, new_y1, new_y2;
    double angle;


    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a line: ";
	cin>>x1>>y1;
	cout<<"Enter the second co-ordinates of a line: ";
	cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);

    cout<<"Enter the angle: ";
	cin>>angle;

	double radianAngle = (angle*3.14)/180;

    new_x1 = floor(x1*cos(radianAngle) - y1*sin(radianAngle));
    new_y1 = floor(x1*sin(radianAngle) + y1*cos(radianAngle));

	setcolor(RED);
	line(new_x1, new_y1, new_x2, new_y2);

    getch();
    closegraph();
    return 0;
}
*/
