#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=0,gm;
	initgraph(&gd,&gm,"");
//Making a Rectangle
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(220,40,500,420);
	floodfill(221,41,YELLOW);
//For Printing GRAPHICS
	setcolor(RED);	
	setbkcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	settextstyle(1,5,49);
	outtextxy(320,100,"GRAPHICS");
//For Printing C
	settextstyle(1,4,75);
	outtextxy(470,300,"C");
	floodfill(321,131,YELLOW);
//Making Lines

	setcolor(YELLOW);	
	line(240,440,520,440);	
	
	setcolor(YELLOW);
	line(220,421,240,442);
	line(221,421,241,442);
	line(222,421,242,442);
	line(223,421,243,442);
	line(224,421,244,442);
	
	setcolor(WHITE);
	line(224,424,504,424);
	line(228,428,508,428);
	line(232,432,512,432);
	line(236,436,516,436);
	line(504,48,504,424);	
	line(508,52,508,428);	
	line(512,56,512,432);
	line(516,60,516,436);
//Making three Rectangles
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(242,439,521,442);		//  #1
	floodfill(300,441,YELLOW);
		
	rectangle(520,442,523,68);		//  #2
	floodfill(521,420,YELLOW);
	
	rectangle(516,66,522,70);	//	#3
	floodfill(519,68,YELLOW);
	getch();
	closegraph();
}

