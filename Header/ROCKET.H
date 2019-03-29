#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
rocket(int name){
setcolor(GREEN);

for(int i=0;i<401;i++){
sound(100+i);
setcolor(GREEN);
line(250+30,-100+i,250+30,0+i);
line(290+30,-100+i,290+30,0+i);
line(290+30,0+i,270+30,40+i);
line(250+30,0+i,270+30,40+i);
line(250+30,-100+i,290+30,-100+i);
line(250+30,0+i,290+30,0+i);
line(250+30,-100+i,230+30,-125+i);
line(290+30,-100+i,310+30,-125+i);
line(230+30,-125+i,310+30,-125+i);
settextstyle(1,1,1);
if(name==1)
outtextxy(287,-80+i,"GHAURI");
if(name==2)
outtextxy(287,-80+i,"ABABEEL");
if(name==3)
outtextxy(287,-100+i,"SHAHEEN");
if(name==4)
outtextxy(287,-80+i,"BABUR");
if(name==5)
outtextxy(287,-100+i,"DOOMSDAY");
/*
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
fillellipse(300,60+i,5,40);
line(300,100+i,330,30+i);
line(300,100+i,359,20+i);
line(305,100+i,370,20+i);
line(310,100+i,370,25+i);
line(305,100+i,370,15+i);
line(305,100+i,370,20+i);

line(280,100+i,220,30+i);
line(280,100+i,220,20+i);
line(285,100+i,225,20+i);
line(295,100+i,230,25+i);
line(285,100+i,225,15+i);
line(285,100+i,225,20+i);
 */
 if (i%2==0)
   {

     for ( int v=0; v>=10; v++)
    {
     setcolor(YELLOW);
     circle(320,-200+i,v);
     circle(320,-200+i,v);
    }
     int m=-130;
    setcolor(LIGHTRED);
     circle(300,40+i,5);
     circle(300,40+i,4);
     circle(300,40+i,3);
     circle(300,40+i,2);
     circle(300,40+i,1);
     if(i%10==0){
     int e=290;
    setcolor(YELLOW);
     circle(e,m+i,10);
     circle(e,m+i,9);
     circle(e,m+i,8);
     circle(e,m+i,7);
     setcolor(RED);
     circle(e,m+i,6);
     circle(e,m+i,5);
     circle(e,m+i,4);
     setcolor(RED);
     circle(e,m+i,3);
     circle(e,m+i,2);
     circle(e,m+i,1);

     int l=280;
      setcolor(RED);
     circle(l,m+i,10);
     circle(l,m+i,9);
     circle(l,m+i,8);
      setcolor(YELLOW);
     circle(l,m+i,7);
     circle(l,m+i,6);
      setcolor(YELLOW);
     circle(l,m+i,5);
     circle(l,m+i,4);
      setcolor(YELLOW);
     circle(l,m+i,3);
     circle(l,m+i,2);
     circle(l,m+i,1);

     int p=310;
      setcolor(YELLOW);
     circle(p,m+i,10);
     circle(p,m+i,9);
     circle(p,m+i,8);
     setcolor(RED);
     circle(p,m+i,7);
     circle(p,m+i,6);
     circle(p,m+i,5);
     setcolor(RED);
     circle(p,m+i,4);
     circle(p,m+i,3);
     circle(p,m+i,2);
     setcolor(RED);
     circle(p,m+i,1);

    int o=320;
      setcolor(RED);
     circle(o,m+i,10);
     circle(o,m+i,9);
     circle(o,m+i,8);
      setcolor(YELLOW);
     circle(o,m+i,7);
     circle(o,m+i,6);
     circle(o,m+i,5);
      setcolor(YELLOW);
     circle(o,m+i,4);
     circle(o,m+i,3);
     circle(o,m+i,2);
      setcolor(YELLOW);
     circle(o,m+i,1);
     }
   }

   else
   {
     setcolor(YELLOW);
     for ( int w=0; w>=10; w++)
    {
    int m=0;
     circle(320,-100+i,w);
     circle(325,-100+i,w);
     circle(350,-100+i,w);
      if(i%5==0){
      int e=290;
    setcolor(RED);
     circle(e,m+i,10);
     circle(e,m+i,9);
     circle(e,m+i,8);
     circle(e,m+i,7);
     setcolor(YELLOW);
     circle(e,m+i,6);
     circle(e,m+i,5);
     circle(e,m+i,4);
     setcolor(YELLOW);
     circle(e,m+i,3);
     circle(e,m+i,2);
     circle(e,m+i,1);

     int l=300;
      setcolor(YELLOW);
     circle(l,m+i,10);
     circle(l,m+i,9);
     circle(l,m+i,8);
      setcolor(RED);
     circle(l,m+i,7);
     circle(l,m+i,6);
      setcolor(RED);
     circle(l,m+i,5);
     circle(l,m+i,4);
      setcolor(RED);
     circle(l,m+i,3);
     circle(l,m+i,2);
     circle(l,m+i,1);

     int p=310;
      setcolor(RED);
     circle(p,m+i,10);
     circle(p,m+i,9);
     circle(p,m+i,8);
     setcolor(YELLOW);
     circle(p,m+i,7);
     circle(p,m+i,6);
     circle(p,m+i,5);
     setcolor(YELLOW);
     circle(p,m+i,4);
     circle(p,m+i,3);
     circle(p,m+i,2);
     setcolor(YELLOW);
     circle(p,m+i,1);

    int o=320;
      setcolor(YELLOW);
     circle(o,m+i,10);
     circle(o,m+i,9);
     circle(o,m+i,8);
      setcolor(RED);
     circle(o,m+i,7);
     circle(o,m+i,6);
     circle(o,m+i,5);
      setcolor(RED);
     circle(o,m+i,4);
     circle(o,m+i,3);
     circle(o,m+i,2);
      setcolor(RED);
     circle(o,m+i,1);
   }}

    if(i==400){
     delay(0);
    for ( int k=0; k<70; k++)
    {
     delay(1);

     setcolor(DARKGRAY);
     circle(250,400,k);
     circle(270,400,k);
     setcolor(LIGHTGRAY);
     circle(285,400,k+10);
     circle(318,400,k+30);
     circle(335,400,k+30);
     circle(370,400,k+10);
     setcolor(DARKGRAY);
     circle(390,400,k);
     circle(410,400,k);
    }
    }

   }



setcolor(BROWN);
line(0,400,1000,400);
delay(10);
cleardevice();
}
    for ( int k=0; k<400; k++)
    {
     delay(10);
     sound(rand());
     setcolor(RED);
     circle(250,400,k);
     circle(270,400,k);
     setcolor(YELLOW);
     circle(285,400,k+10);
     circle(318,400,k+30);
     circle(335,400,k+30);
     circle(370,400,k+10);
     setcolor(RED);
     circle(390,400,k);
     circle(410,400,k);
     nosound();
    }
    cleardevice();
    sound(1000);
    settextstyle(1,0,1);
    setcolor(GREEN);
    outtextxy(280,200,"NO SIGNAL");
    delay(1000);
    cleardevice();
    nosound();

getch();
}