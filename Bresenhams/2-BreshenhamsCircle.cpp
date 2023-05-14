
#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

void breshenamsCircle(int x1,int y1,int x, int y);

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
    d = 3 - 2*r;

    breshenamsCircle(x1,y1,x,y);

    while(x<y)
	{

		if(d<0)
		{
		    x++;
			d=d+4*x+6;
		}
		else
		{
		    x++;
		    y--;
			d = d+4*(x-y)+10;
		}
		breshenamsCircle(x1,y1,x,y);
		delay(50);

	}

    getch();
    closegraph();
    return 0;
}

void breshenamsCircle(int x1,int y1,int x, int y){
        putpixel(x1+x,y1+y,WHITE);
        putpixel(x1+x,y1-y,WHITE);
		putpixel(x1-x,y1+y,WHITE);
		putpixel(x1-x,y1-y,WHITE);
		putpixel(x1+y,y1+x,WHITE);
		putpixel(x1+y,y1-x,WHITE);
		putpixel(x1-y,y1+x,WHITE);
		putpixel(x1-y,y1-x,WHITE);
}
