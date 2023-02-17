
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void main()
{
void home();

int gd=DETECT,gm=0;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

for(int i=0;i<400;)
 {
 putpixel(random(350+i),random(200),random(5+i));
 i=i++;
 home();
 }

int x1,x2,x3,x4,y1,y2,y3,y4,nx1,ny1,nx2,nx3,ny2,ny3,nx4,ny4;

//printf("\n Enter the translation factor");
//scanf("%d%d",&xt,&yt);

//door

setfillstyle(SOLID_FILL,11);
nx1=180+20;
ny1=310+20;
nx2=180+20;
ny2=430+20;
//nx3=x3+xt;
//ny3=y3+yt;
line(nx1,ny1,240,310);
line(nx2,ny2,nx1,ny1);
line(nx2,ny2,240,430);
floodfill(260,350,getmaxcolor());

//window
setfillstyle(SOLID_FILL,11);
nx3=310+10;
ny3=310+15;
nx4=310+10;
ny4=380+15;
//nx3=x3+xt;
//ny3=y3+yt;
line(nx3,ny3,390,310);
line(nx4,ny4,nx3,ny3);
line(nx4,ny4,390,380);
floodfill(320,375,getmaxcolor());

getch();
}

void home()
{
//Words
setcolor(getmaxcolor());
settextstyle(BOLD_FONT,HORIZ_DIR,5);
outtextxy(180,0,"Happy");
settextstyle(BOLD_FONT,HORIZ_DIR,5);
outtextxy(440,0,"Home");
       //sun
setfillstyle(SOLID_FILL,14);
circle(70,50,25);
floodfill(75,52,getmaxcolor());
       //house back side
setfillstyle(SOLID_FILL,11);
rectangle(270,250,430,430);
floodfill(271,251,getmaxcolor());
      //house front side
setfillstyle(SOLID_FILL,11);
rectangle(150,250,270,430);
floodfill(151,251,getmaxcolor());
    //road
arc(155,455,250,44,35);
arc(210,455,250,44,35);
   //door
setfillstyle(SOLID_FILL,7);
rectangle(180,310,240,430);
floodfill(181,311,getmaxcolor());
  //window
setfillstyle(SOLID_FILL,7);
rectangle(310,310,390,380);
floodfill(311,350,getmaxcolor());
  //roof triangle
setfillstyle(9,6);
line(150,250,210,170);
line(270,250,210,170);
floodfill(200,230,getmaxcolor());
   //roof window
setfillstyle(SOLID_FILL,15);
circle(210,215,15);
floodfill(211,216,getmaxcolor());
   //roof back side
setfillstyle(9,6);
line(430,250,370,170);
line(210,170,370,170);
floodfill(215,172,getmaxcolor());
}