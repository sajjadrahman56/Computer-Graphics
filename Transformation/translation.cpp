/**
    Translation for line triangle
 */
#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

/**
//Translation for line

int main(){


    double x1, y1, x2, y2;
    double new_x1, new_x2, new_y1, new_y2;
    double tx, ty;


    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a line: ";
	cin>>x1>>y1;
	cout<<"Enter the second co-ordinates of a line: ";
	cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);

    cout<<"Enter the translation vector: ";
	cin>>tx>>ty;

	new_x1=x1+tx;
	new_y1=y1+ty;
	new_x2=x2+tx;
	new_y2=y2+ty;

	setcolor(RED);
	line(new_x1, new_y1, new_x2, new_y2);

    getch();
    closegraph();
    return 0;
}


//input value 200 200
// 200 100
//100 200

//translation for triangle
int main()
{

    double x1, y1, x2, y2, x3, y3;
    double new_x1, new_x2, new_y1, new_y2, new_x3,new_y3;
    double tx, ty;


    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a line: ";
    cin>>x1>>y1;
    cout<<"Enter the second co-ordinates of a line: ";
    cin>>x2>>y2;
    cout<<"Enter the third co-ordinates of a line: ";
    cin>>x3>>y3;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    cout<<"Enter the translation vector: ";
    cin>>tx>>ty;

    new_x1=x1+tx;
    new_y1=y1+ty;
    new_x2=x2+tx;
    new_y2=y2+ty;
    new_x3=x3+tx;
    new_y3=y3+ty;

    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);
    line(new_x2, new_y2, new_x3, new_y3);
    line(new_x3, new_y3, new_x1, new_y1);

    getch();
    closegraph();
    return 0;
}
*/

int main()
{

    double x1, y1, x2, y2, x3, y3, x4, y4;
    double new_x1, new_x2, new_y1, new_y2, new_x3, new_y3, new_x4, new_y4;
    double tx, ty;


    int gd, gm;
    gd = DETECT;

    cout<<"Enter the first co-ordinates of a rectangle: ";
    cin>>x1>>y1;
    cout<<"Enter the second co-ordinates of a rectangle: ";
    cin>>x2>>y2;
    cout<<"Enter the third co-ordinates of a rectangle: ";
    cin>>x3>>y3;
    cout<<"Enter the fourth co-ordinates of a rectangle: ";
    cin>>x3>>y3;

    initgraph(&gd, &gm, "");

    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);

    cout<<"Enter the translation vector: ";
    cin>>tx>>ty;

    new_x1=x1+tx;
    new_y1=y1+ty;
    new_x2=x2+tx;
    new_y2=y2+ty;
    new_x3=x3+tx;
    new_y3=y3+ty;
    new_x4=x4+tx;
    new_y4=y4+ty;

    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);
    line(new_x2, new_y2, new_x3, new_y3);
    line(new_x3, new_y3, new_x4, new_y4);
    line(new_x4, new_y4, new_x1, new_y1);

    getch();
    closegraph();
    return 0;
}
