#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<string.h>


void counry(char heading[],char detail1[],char detail2[],char detail3[],char detail4[],char detail5[]){
for(int e=0;e<=600;e=e+2)
 {
 setcolor(RED);
 rectangle(-600+e,0,0+e,60);

 settextstyle(1,0,1);
 delay(5);
// cleardevice();

// }
// setcolor(RED);
// rectangle(0,0,600,60);
// setcolor(GREEN);
// delay(30);
// outtextxy(190,0,"      INDIA ON EYE");

//for(int f=0;f<=100;f++)
// {
 setcolor(RED);
 rectangle(-600+e,100,0+e,300);
 delay(5);
 cleardevice();


 }
  setcolor(RED);
 rectangle(0,0,600,50);
 setcolor(GREEN);
 delay(30);
 outtextxy(190,20,heading);

 setcolor(RED);
 rectangle(0,100,600,350);
 setcolor(GREEN);
 delay(30);
 outtextxy(10,100,"MISSILES");
 delay(30);
 outtextxy(10,140,"1) GHAURI(1,500km)");
 delay(30);
 outtextxy(10,180,"2) ABABEEL(2,200km)");
 delay(30);
 outtextxy(10,220,"3) SHAHEEN(2,750km)");
 delay(30);
 outtextxy(10,260,"4) BABUR(3,300km)");
 delay(30);
 settextstyle(1,0,1);
 outtextxy(270,100,detail1);
 delay(20);
 outtextxy(270,130,detail2);
 delay(20);
 outtextxy(270,160,detail3);
 delay(20);
 outtextxy(270,190,detail4);
 delay(20);
 outtextxy(270,220,detail5);
 delay(20);
 setcolor(BLUE);
 outtextxy(270,290,"    SELECT MISSILE   ");

getch();

}