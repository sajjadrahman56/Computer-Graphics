//mid point circle algorithm

/**
input value: 200 300
radious: 100
 */

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

void circlebres(int x1,int y1,int x, int y);

int main(){

    int x1,y1,r, x, y,d;

    int gd, gm;
    gd = DETECT;

    cout<<"Enter the center of a circle: ";
	cin>>x1>>y1;
	cout<<"Enter the value of radius: ";
	cin>>r;

    initgraph(&gd, &gm, "");

    x = 0;
    y = r;
    d = 1 - r;

    circlebres(x1,y1,x,y);

    while(x<=y)
	{

		if(d<0)
		{
		    x++;
			d=d+2*x+3;
		}
		else
		{
		    x++;
		    y--;
			d=d+2*(x-y)+5;
		}
		circlebres(x1,y1,x,y);
		delay(20);

	}

    getch();
    closegraph();
    return 0;
}

void circlebres(int x1,int y1,int x, int y){
        putpixel(x1+x,y1+y,RED);
        putpixel(x1+x,y1-y,RED);
		putpixel(x1-x,y1+y,RED);
		putpixel(x1-x,y1-y,RED);
		putpixel(x1+y,y1+x,RED);
		putpixel(x1+y,y1-x,RED);
		putpixel(x1-y,y1+x,RED);
		putpixel(x1-y,y1-x,RED);
}

