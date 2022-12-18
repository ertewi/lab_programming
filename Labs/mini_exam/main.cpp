#include <stdlib.h>
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#define COLOR(r,g,b) (r|(g<<8)|(b<<16)|15<<24)
int task_1();
int task_2();
int draw(int x, int y, int col, float m = 1.5) {
	setcolor(col);
	// tail
	moveto(x, y);
	lineto(ceil(x+15*m), ceil(y+8*m));
	moveto(x, y);
	lineto(ceil(x+5*m), ceil(y+8*m));
	moveto(x, ceil(y+23*m));
	lineto(ceil(x+15*m), ceil(y+15*m));
	moveto(x, ceil(y+23*m));
	lineto(ceil(x+5*m), ceil(y+15*m));
	// frame
	moveto(ceil(x+30*m), ceil(y+8*m));
	lineto(ceil(x+5*m), ceil(y+8*m));
	lineto(ceil(x+5*m), ceil(y+15*m));
	lineto(ceil(x+30*m), ceil(y+15*m));
	lineto(ceil(x+38*m), ceil(y+12*m));
	lineto(ceil(x+30*m), ceil(y+8*m));
	//window
	circle(ceil(x+23*m), ceil(y+12*m), ceil(3*m));
}
int main(){
	setlocale(LC_ALL, "Rus");
	int v = -1;
	while(v != 0){
		printf("Введите цифру: \n"); // enter number
		printf("__________________________________________________\n");
		printf("|                                                 |\n");
		printf("|   1). Свободное движение обьекта                |\n"); // free object movement
		printf("|   2). Движение обьекта с помощью клавиатуры     |\n"); // object movement with keyboard
		printf("|   0). Выход из программы                        |\n"); // exit
		printf("|_________________________________________________|\n");
		scanf("%d", &v);
		
		switch(v)
		{	
			case 1: 
				task_1();
				break;
			case 2: 
				task_2();
				break;					
		}
	}
	return 0;
}//11111111
int task_1() {
	int x = 320, y = 180;
	float m = 1.5;
	int col;
	printf("Введите цвет: \n"); // enter color
	scanf("%d", &col);
	initwindow(640,360);
	moveto(x, y);
	
	right_down:
		while(x + 45 < 640 && y + 40 < 360) {
			if(kbhit()) if(getch() == 27) goto exit;
			draw(x, y, col, m);
			delay(10);
			draw(x, y, 0, m);
			x++; y++;
		}
    if(x + 45 < 640 && y + 40 >= 360) {
    	m = m - 0.5;
		goto right_up;
	} else {
		m = m + 0.5;
		goto left_down;
	}
    
    left_down:
    	while(x > 0 && y + 40 < 360) {
    		if(kbhit()) if(getch() == 27) goto exit;
			draw(x, y, col, m);
			delay(10);
			draw(x, y, 0, m);
			x--; y++;
		}
	if(x > 0 && y + 40 >= 360) {
		m = m - 0.5;
		goto left_up;
	} else {
		m = m - 0.5;
		goto right_down;
	}
	
    right_up:
    	while(x + 45 < 640 && y > 0) {
    		if(kbhit()) if(getch() == 27) goto exit;
			draw(x, y, col, m);
			delay(10);
			draw(x, y, 0, m);
			x++; y--;
		}
	if(x + 45 < 640 && y <= 0) {
		m = m + 0.5;
		goto right_down;
	} else {
		m = m + 0.5;
		goto left_up;
	}
	
    left_up:
    	while(x > 0 && y > 0) {
    		if(kbhit()) if(getch() == 27) goto exit;
			draw(x, y, col, m);
			delay(10);
			draw(x, y, 0, m);
			x--; y--;
		}
	if(x > 0 && y <= 0) {
		m = m + 0.5;
		goto left_down;
	} else {
		m = m - 0.5;
		goto right_up;
	}
    
    exit:
 		closegraph();
		return 0;
}




int task_2() {
	int col, x = 320, y = 180, code;
	printf("Введите цвет: \n"); // enter color
	scanf("%d", &col);
	
	initwindow(640,360);
	moveto(x, y);
	
	while(1) {
		draw(x, y, col);
		code = getch();
		if(code == 27) break;
		draw(x, y, 0);
		switch (code) {
			case 75: x--; break; // left
			case 77: x++; break; // right
			case 72: y--; break; // up
			case 80: y++; break; // down
		}
	}
	
	closegraph();
	return 0;
}
