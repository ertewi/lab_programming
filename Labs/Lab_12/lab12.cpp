#include <windows.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void draw_snowflake(int x, int y, int color);
int main()
{
    srand(time(NULL));
    int x[100];
    int y[100];
    initwindow(640,360);
    while(1)
    {
        Sleep(400);
        for (int i = 0; i < 100; i++)
        {
            draw_snowflake(x[i],y[i],0);
        }

        for (int i = 0; i < 100; i++)
        {
            x[i] = 1 + rand()%610;
            y[i] = 1 + rand()%325;
        }

        for (int i = 0; i < 100; i++)
        {
            draw_snowflake(x[i],y[i],1+rand()%15);
        }
    }
    return 0;
}

void draw_snowflake(int x, int y, int color)
{
    setcolor(color);
    moveto(x,y);
    lineto(x+20,y+20);
    moveto(x+10,y+2);
    lineto(x+10,y+18);
    moveto(x+20,y);
    lineto(x,y+20);
    moveto(x+2,y+10);
    lineto(x+18,y+10);
}
