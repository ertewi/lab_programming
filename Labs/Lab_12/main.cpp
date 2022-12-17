#include <windows.h>
#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void drawSnowFlake(int x, int y, int color);
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
            drawSnowFlake(x[i],y[i],0);
        }

        for (int i = 0; i < 100; i++)
        {
            x[i] = 13 + rand()%598;
            y[i] = 13 + rand()%313;
        }

        for (int i = 0; i < 100; i++)
        {
            drawSnowFlake(x[i],y[i],1+rand()%15);
        }
    }
    return 0;
}

void drawSnowFlake(int x, int y, int color)
{
	// diagonal
    setcolor(color);
    line(x-4,y-4,x-14,y-14);
    line(x-4,y+4,x-14,y+14);
    line(x+4,y-4,x+14,y-14);
    line(x+4,y+4,x+14,y+14);
    //square
    rectangle(x-6,y-6,x+6,y+6);
    //cross with pass
    line(x-16,y,x-2,y);
    line(x+2,y,x+16,y);
    line(x,y-16,x,y-2);
    line(x,y+2,x,y+16);
    // circuit
    moveto(x-12,y);
    lineto(x-7,y-7);
    lineto(x,y-12);
    lineto(x+7,y-7);
    lineto(x+12,y);
    lineto(x+7,y+7);
    lineto(x,y+12);
    lineto(x-7,y+7);
    lineto(x-12,y);
    // decoration
    line(x-12,y-8,x-14,y-8);
    line(x-8,y-12,x-8,y-14);
    
    line(x+8,y-12,x+8,y-14);
    line(x+12,y-8,x+14,y-8);
    
    line(x-12,y+8,x-14,y+8);
    line(x-8,y+12,x-8,y+14);
    
    line(x+8,y+12,x+8,y+14);
    line(x+12,y+8,x+14,y+8);
    
}
