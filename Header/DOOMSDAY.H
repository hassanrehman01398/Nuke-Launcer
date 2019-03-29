#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<string.h>


void doomsday(){
for(int e=0;e<=600;e=e+2)
 {
 setcolor(RED);
 rectangle(-600+e,0,0+e,60);

 settextstyle(1,0,1);
 delay(5);
 setcolor(RED);
 rectangle(-600+e,100,0+e,300);
 delay(5);
 cleardevice();


 }
  setcolor(RED);
 rectangle(0,0,600,50);
 setcolor(GREEN);
 delay(30);
 outtextxy(190,20,"1) DOOMSDAY");

 setcolor(RED);
 rectangle(0,100,600,350);
 setcolor(GREEN);
 delay(30);
// outtextxy(10,100,"MISSILES");
// delay(30);
// outtextxy(10,140,"1) GHAURI(1,500km)");
// delay(30);
// outtextxy(10,180,"2) ABABEEL(2,200km)");
// delay(30);
// outtextxy(10,220,"3) SHAHEEN(2,750km)");
// delay(30);
outtextxy(10,100,"        DOOMSDAY");
delay(30);
 settextstyle(1,0,1);
 outtextxy(270,100,"Evil has risen in the world.");
 delay(20);
 outtextxy(270,130,"We have to do something about ");
 delay(20);
 outtextxy(270,160,"it.");
 delay(20);
 outtextxy(270,190,"LET'S REBOOT THE WORLD");
 delay(20);
 outtextxy(270,220,"");
 delay(20);
 setcolor(BLUE);
 outtextxy(270,290,"    SELECT MISSILE   ");



}