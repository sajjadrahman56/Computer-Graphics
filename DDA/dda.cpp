#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


void dda();

int main()
{

    dda();
}

void dda(){
int gd, gm;
    gd = DETECT;

    int x_start, y_start, x_end, y_end, dx, dy, m;

    cout<<"Enter starting points: ";
    cin>>x_start>>y_start;

    cout<<"Enter ending points: ";
    cin>>x_end>>y_end;

    initgraph(&gd, &gm, "");

    dx = x_end - x_start;
    dy = y_end - y_start;

    m = dy/dx;

    int x=x_start, y = y_start;

    if(abs(m)<1)
    {
        while(x<=x_end)
        {
            putpixel(x,y, GREEN);
            x++;
            y=y+m;
        }
    }
    else
    {
        while(y<=y_end)
        {
            putpixel(x,y, RED);
            y++;
            x=x+(1/m);
        }
    }

    getch();
    closegraph();
}
