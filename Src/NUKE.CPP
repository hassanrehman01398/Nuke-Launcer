#include<counry.h>
#include<rocket.h>
#include<timer.h>
#include<missile.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<IMGINDIA.H>
#include<dos.h>
#include<string.h>
#include<title.h>
#include<title1.h>
#include<DOOMSDAY.h>
main()
{
int gm=DETECT,gd;
char w,mi;
initgraph(&gm,&gd,"C:\\TURBOC3\\BGI");
int left = 230;
int top = 200;
float right = 370;
int bottom = 210;
for(int i =0; i<200;i=i+2){

setcolor(RED);

rectangle(left,top,right,bottom);
left--;
top--;
right++;
bottom++;
delay(5);

cleardevice();
}
ab:
setcolor(RED);
rectangle(left,top,right,bottom);
title();
setcolor(RED);
settextstyle(1,0,0);
outtextxy(150,150,"ENTER SECRET KEY");
//gotoxy(160,150);
//char k[10];

//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t");
//gets(k);
//closegraph();
 setcolor(RED);

//outtextxy(280,250,"INPUT CODE");
char pass[8];
char pass1[8]="pakistan";
int count=0;
for(int ii=0;ii<=7;ii++)
{
pass[ii]=getch();

outtextxy(260+12*ii,220,"*");
if(pass[ii]==pass1[ii])
{
 count++;
}
}



if(count==8)
{
cleardevice();
//initgraph(&gm,&gd,"C:\\TC\\BGI");
setcolor(GREEN);
settextstyle(1,0,0);
outtextxy(150,150,"ACCESS GRANTED");
delay(1500);
cleardevice();
//outtextxy(0,10,"COUNTRIES WHERE YOU WANT TO LAUNCH");
 left = 300;
 top = 300;
 right = 30;
 bottom = 150;
for(int i =0; i<450;i=i+2){

setcolor(RED);

rectangle(left,top,right,bottom);
left--;
top--;
right=right+1.5;
bottom++;
delay(10);
cleardevice();
}

setcolor(RED);
rectangle(left,top,right,bottom);
title1();
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(100,80,"1)INDIA");
delay(100);
outtextxy(100,120,"2)ISRAEL");
delay(100);
outtextxy(100,160,"3)AMERICA");
delay(100);
outtextxy(100,200,"4)RUSSIA");
delay(100);
outtextxy(100,240,"5)CHINA");
delay(100);
outtextxy(100,280,"6)OPERATION DOOMSDAY");
w=getch();
if(w=='1')
{
cleardevice();

 counry("    INDIA ON EYE","India is our worst enemy and","is thousand kilometer away from","our missile.They have threatened","us since a long time.","Now it's time to take revenge");
mi=getch();
 if(mi=='2')
 {
 missile("      ABABEEL (2200 Km)","TYPE =  Surface to surface ballistic missile","SERVICE = 20 Aug 2017","WEIGHT = 4,500 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2000km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(1);
   rocket(2);
 }
}
if(mi=='1')
 {
 missile("GHAURI MISSILE SYSTEM (1500 Km)","TYPE =  Medium-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(1);
   rocket(1);
 }
}

if(mi=='3')
 {
 missile("SHAHEEN MISSILE SYSTEM (2750 Km)","TYPE =  Medium range ballistic missile(MRBM)","SERVICE = 9 MARCH 2015","WEIGHT = 10,156 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2750km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(1);
   rocket(3);
 }
}

if(mi=='4')
 {
 missile("BABUR MISSILE SYSTEM (3500 Km)","TYPE =  Medium range subsonic cruise missile","SERVICE = 12 Feb 2010","WEIGHT = 1500 kg","GUIDANCE SYSTEM = INS,GPS,GLONASS","FLIGHT ALTITUDE = 700Km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(1);
   rocket(4);
 }
}
}


if(w=='2')
{
cleardevice();
 counry("    ISRAEL ON EYE","ISRAEL doesn't exist for us.,","But America has doubts about it"," so,let's clear that out","","");
mi=getch();
 if(mi=='2')
 {
 missile("     ABABEEL (2200 Km)","TYPE =  Surface to surface ballistic missile","SERVICE = 20 Aug 2017","WEIGHT = 4,500 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2000km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(2);
   rocket(2);
 }
}
if(mi=='1')
 {
 missile("GHAURI MISSILE SYSTEM (1500 Km)","TYPE =  Medium-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(2);
   rocket(1);
 }
}

if(mi=='3')
 {
 missile("SHAHEEN MISSILE SYSTEM (2750 Km)","TYPE =  Medium range ballistic missile(MRBM)","SERVICE = 9 MARCH 2015","WEIGHT = 10,156 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2750km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(2);
   rocket(3);
 }
}

if(mi=='4')
 {
 missile("BABUR MISSILE SYSTEM (3500 Km)","TYPE =  Medium range subsonic cruise missile","SERVICE = 12 Feb 2010","WEIGHT = 1500 kg","GUIDANCE SYSTEM = INS,GPS,GLONASS","FLIGHT ALTITUDE = 700Km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
  mapexplosion(2);
  rocket(4);
 }
}
}

if(w=='3')
{
cleardevice();
 counry("    AMERICA ON EYE","AMERICA is the biggest superpower","of the world.America must never ","destroy Pakitan.Lets give America","a taste of Hiroshima and Nagasaki","");
mi=getch();
 if(mi=='2')
 {
 missile("     ABABEEL (2200 Km)","TYPE =  Surface to surface ballistic missile","SERVICE = 20 Aug 2017","WEIGHT = 4,500 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2000km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(3);
   rocket(2);

 }
}
if(mi=='1')
 {
 missile("GHAURI MISSILE SYSTEM (1500 Km)","TYPE =  Medium-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
  mapexplosion(3);
  rocket(1);
 }
}

if(mi=='3')
 {
 missile("SHAHEEN MISSILE SYSTEM (2750 Km)","TYPE =  Medium range ballistic missile(MRBM)","SERVICE = 9 MARCH 2015","WEIGHT = 10,156 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2750km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(3);
   rocket(3);
 }
}

if(mi=='4')
 {
 missile("BABUR MISSILE SYSTEM (3500 Km)","TYPE =  Medium range subsonic cruise missile","SERVICE = 12 Feb 2010","WEIGHT = 1500 kg","GUIDANCE SYSTEM = INS,GPS,GLONASS","FLIGHT ALTITUDE = 700Km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(3);
   rocket(4);
 }
}
}

if(w=='4')
{
cleardevice();
 counry("    RUSSIA ON EYE","RUSSIA has always wanted to","rule the world but they don't ","know about us so let's","show them what we are.","");
mi=getch();
 if(mi=='2')
 {
 missile("     ABABEEL (2200 Km)","TYPE =  Surface to surface ballistic missile","SERVICE = 20 Aug 2017","WEIGHT = 4,500 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2000km");

mi=getch();
 if(mi=='L'||mi=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(4);
   rocket(2);

 }
}
if(mi=='1')
 {
 missile("GHAURI MISSILE SYSTEM (1500 Km)","TYPE =  Medium-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 mi=getch();
 if(mi=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(4);
   rocket(1);
 }
}

if(mi=='3')
 {
 missile("SHAHEEN MISSILE SYSTEM (2750 Km)","TYPE =  Medium range ballistic missile(MRBM)","SERVICE = 9 MARCH 2015","WEIGHT = 10,156 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2750km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(4);
   rocket(3);
 }
}

if(mi=='4')
 {
 missile("BABUR MISSILE SYSTEM (3500 Km)","TYPE =  Medium range subsonic cruise missile","SERVICE = 12 Feb 2010","WEIGHT = 1500 kg","GUIDANCE SYSTEM = INS,GPS,GLONASS","FLIGHT ALTITUDE = 700Km");

 mi=getch();
 if(mi=='L'||mi=='l')
 {
   cleardevice();
   timer();
   cleardevice();
 mapexplosion(4);
 rocket(4);
 }
}
}

if(w=='5')
{
cleardevice();
 counry("    CHINA ON EYE","CHINA wants to be next","East India Company,so","lets prevent them befor","it happens.....","");
mi=getch();
 if(mi=='2')
 {
 missile("     ABABEEL (2200 Km)","TYPE =  Surface to surface ballistic missile","SERVICE = 20 Aug 2017","WEIGHT = 4,500 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2000km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(5);
   rocket(2);

 }
}
if(mi=='1')
 {
 missile("GHAURI MISSILE SYSTEM (1500 Km)","TYPE =  Medium-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
    cleardevice();
   timer();
   cleardevice();
   mapexplosion(5);
   rocket(1);
 }
}

if(mi=='3')
 {
 missile("SHAHEEN MISSILE SYSTEM (2750 Km)","TYPE =  Medium range ballistic missile(MRBM)","SERVICE = 9 MARCH 2015","WEIGHT = 10,156 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 2750km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(5);
   rocket(3);
 }
}

if(mi=='4')
 {
 missile("BABUR MISSILE SYSTEM (3500 Km)","TYPE =  SUPER HIGH-range ballistic missle(MRBM)","SERVICE = 12 Januray 2003","WEIGHT = 15,850 kg","GUIDANCE SYSTEM = IGS","FLIGHT ALTITUDE = 350km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(5);
   rocket(4);
 }
}
}

if(w=='6')
{
doomsday();
mi=getch();
 if(mi=='1')
 {
 missile("    DOOMSDAY","TYPE =  MOST POWEFUL MISSILE OF THE WORLD","SERVICE = 1 JAN 2019","WEIGHT = 20000 kg","GUIDANCE SYSTEM = IGS,GPS,GOLANZ,MAK","FLIGHT ALTITUDE = 10000km");

 w=getch();
 if(w=='L'||w=='l')
 {
   cleardevice();
   timer();
   cleardevice();
   mapexplosion(6);
   rocket(5);

 }
}

}

}


else
{
cleardevice();
setcolor(GREEN);
settextstyle(1,0,0);
outtextxy(150,150,"WRONG PASSWORD");
delay(1500);
cleardevice();
count=0;
goto ab;



}


getch();
closegraph();
return 0;
}

