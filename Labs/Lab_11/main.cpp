#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#define COLOR(r,g,b) (r|(g<<8)|(b<<16)|15<<24)
int main(){
	initwindow(640,360);
	setcolor(WHITE);
	moveto (320, 0);
	lineto (320, 360);
	moveto (0, 180);
	lineto (640, 180);
	outtextxy ( 305, 0, "y" );
	outtextxy ( 620, 182, "x" );
	setcolor(MAGENTA);
	moveto(0, 130);
	lineto(640,130);
	moveto(300, 180);
	ellipse(280, -50, 180, 0, 90, 230);
	setfillstyle ( 1, BLUE );
	floodfill (290, 170, MAGENTA);
	setcolor (WHITE);
	outtextxy (500, 135, "f(x) = sqr(x+2)");
	outtextxy (370, 50, "f(x) = 9");
 	getch();            
 	closegraph();        // закрываем графическое окно
 	return 0;
}

