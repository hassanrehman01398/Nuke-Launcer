#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
int radix =10;
char buffer[20];
char *strptr;
void timer()
{
      int i;

      setcolor(RED);
      setfillstyle(SOLID_FILL,RED);
      int t=1200;
for(i=10;i>=1;i--,t--)
{
setcolor(RED);
circle(300,200,50);
setcolor(RED);
floodfill(300,200,RED);
setfillstyle(SOLID_FILL,RED);
setcolor(GREEN);
settextstyle(7,0,0);
strptr=itoa(i,buffer,radix);
sound(t);
if(i==10){
outtextxy(280,180,strptr);
}
else{
outtextxy(293,180,strptr);
}
delay(100);
nosound();

 delay(1000);

 cleardevice();


}

}




