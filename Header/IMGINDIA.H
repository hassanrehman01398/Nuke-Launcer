    #include <alloc.h>
    #include <conio.h>
    #include <graphics.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <dos.h>
    #include <string.h>

    struct BMP
    {
      char Type[2];           //File type. Set to "BM".
      unsigned long Size;     //Size in BYTES of the file.
      unsigned long Reserved;      //Reserved. Set to zero.
      unsigned long OffSet;   //Offset to the data.
      unsigned long headsize; //Size of rest of header. Set to 40.
      unsigned long Width;     //Width of bitmap in pixels.
      unsigned long Height;     //  Height of bitmap in pixels.
      unsigned int  Planes;    //Number of Planes. Set to 1.
      unsigned int  BitsPerPixel;       //Number of Bits per pixels.
      unsigned long Compression;   //Compression. Usually set to 0.
      unsigned long SizeImage;  //Size in bytes of the bitmap.
      unsigned long XPixelsPreMeter;     //Horizontal pixels per meter.
      unsigned long YPixelsPreMeter;     //Vertical pixels per meter.
      unsigned long ColorsUsed;   //Number of colors used.
      unsigned long ColorsImportant;  //Number of "important" colors.
    };

    int ShowBMP(int x, int y, char* FileName)
    {
	int b,a;
	struct  BMP Obj;

	unsigned char* Datas;
	int in=0;
	unsigned char c=0;
	FILE * fp;

	fp = fopen(FileName,"rb");
	if(!fp){
	printf("Error : Unable to open file ..");
	exit(0);
	}

	fread(&Obj, sizeof(Obj), 1, fp);
	if(Obj.BitsPerPixel!=4)  // This isn't a 16 color bmp we can read;
	{
	 fclose(fp);
	 printf("Error : File format not supported ..");
	 exit(0);
	};
	fseek(fp,Obj.OffSet,SEEK_SET);
	Datas=(unsigned char*) calloc(Obj.Width/2+1, sizeof(unsigned char));
	for(b=Obj.Height;b>=0;b--)
	{
	 fread(Datas, sizeof(unsigned char), Obj.Width/2, fp);
	 c=0;
	 in=0;
	 for(a=0;a<=Obj.Width;a+=2)
	 {
	     c = (Datas[in] | 0x00) >>4;
	     putpixel(a+x,b+y,c);
	     c = (Datas[in] | 0xF0) & 0x0F;
	     putpixel(a+1+x,b+y,c);
	     in++;
	 }
	}
	free (Datas);
	fclose(fp);
	return 1;
	 }
   void mapexplosion(int name)
    {
    int color;
    int q,w,v,e,r;




  // setcolor(GREEN);
 //  settextstyle(1,0,0);
//   outtextxy(200,30,"SATERLITTE IMAGE");
    ShowBMP(0,0,"bmap.bmp"); /* Enter File Name Here */
   // circle(40,123,30);
     setcolor(GREEN);
   settextstyle(2,0,8);
   outtextxy(200,30,"SATELLITE IMAGE");

   setcolor(RED);
   circle(405,185,1);
    settextstyle(2,0,2);
   outtextxy(410,180,"PAKISTAN");
if(name==1)
{
   circle(430,210,1);
   outtextxy(435,210,"INDIA");

   for(q=0;q<=20;q++)
{
if(q%2==0)
{
line(410+q,190+q,410+q,190+q);

   sound(1000);
   }
  delay(100);
   nosound();
   //delay(20);

   }
   }
if(name==2)
{   circle(349,203,1);
   outtextxy(351,205,"ISRAEL");

   for(w=0,v=0;w<=64;w++,v++)
{
if(w%4==0)
{
line(410-w,190+v/4,410-w,190+w/4);

   sound(1000);
   }
  delay(100);
   nosound();

 }
 }
if(name==3)
 {

   circle(145,185,1);
   outtextxy(145,185,"AMERICA");

   for(e=0;e<=260;e++)
{
if(e%2)
{
line(405-e,190,405-e,190);

   sound(1000);
   }
  delay(20);
   nosound();

 }
 }
//china
 if(name==5)
   {
circle(445,165,1);
   outtextxy(450,161,"CHINA");

   for(q=0;q<=20;q++)
{
if(q%2==0)
{
line(405+2*q,185-q,405+2*q,185-q);

  sound(1000);
   }
  delay(100);
   nosound();
   //delay(20);
   }
}

 if(name==4)
{
circle(445,145,1);
   outtextxy(450,140,"RUSSIA");

   for(r=0;r<=40;r++)
{
if(r%2==0)
{
line(405+r,185-r,405+r,185-r);

  sound(1000);
   }
  delay(100);
   nosound();
   //delay(20);
   }
}

 if(name==6)
 {
   circle(430,210,1);
   outtextxy(435,210,"INDIA");
    circle(349,203,1);
   outtextxy(351,205,"ISRAEL");
   circle(145,185,1);
   outtextxy(145,185,"AMERICA");
  circle(445,145,1);
   outtextxy(450,140,"RUSSIA");
circle(445,165,1);
   outtextxy(450,161,"CHINA");


   for(q=0,w=0,v=0,e=0,r=0;e<=260;q++,w++,v++,e++,r++)
{
if(q%2==0&&q<=20)
{
line(410+q,190+q,410+q,190+q);

//   sound(1000);
   }


if(w%4==0&&w<=64)
{
line(410-w,190+v/4,410-w,190+w/4);

//   sound(1000);
   }

//   nosound();
   //delay(20);

if(e%2&&e<=260)
{
line(405-e,190,405-e,190);

//   sound(1000);
   }


if(r%2==0&&r<=40)
{
line(405+r,185-r,405+r,185-r);

//  sound(1000);
   }
if(q%2==0&&q<=20)
{
line(405+2*q,185-q,405+2*q,185-q);

  // sound(1000);
   }



sound(1000);
delay(20);
nosound();

}
 }



// setcolor(GREEN);
//  settextstyle(1,0,0);
//   outtextxy(200,30,"SATELLITE IMAGE");
  // line(415,193,420,199);
  // delay(10);
  // line(420,200,425,205);
 //  delay(10);
 //  line(425,205,230,210);

// closegraph();

}

