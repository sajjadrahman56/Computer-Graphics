#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void breshenhams_line();
int main()
{
breshenhams_line();

}
void breshenhams_line()
{

    int gd = DETECT , gm ;
    int x_start,y_start,x_end,y_end,dx,dy;

    cout<<"Enter the Starting point ";
    cin>>x_start>>y_start;

    cout<<"Enter the Ending point of the line ";
    cin>>x_end>>y_end;

    initgraph(&gd,&gm,"");

    dx = x_end - x_start;
    dy = y_end - y_start;

    int p = 2 * dy - dx;

    int x = x_start , y = y_start;

    while(x<= x_end)
    {

        if(p<0)
        {
            putpixel(x,y,GREEN);
            x++;
            p = p + 2 * dy ;
        }else{
         putpixel(x,y,RED);
            x++;y++;

            p = p + 2 * dy - 2 * dx ;

        }
    }
    getch();
    closegraph();
}
