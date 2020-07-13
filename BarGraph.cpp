#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void bar();
void Name();
int n,b;
int main()
{
   int gd = DETECT, gm;
   int t,b,n,midx,midy;
   initgraph( &gd, &gm, "C:\\TC\\BGI");  //initialization of graphics
   midx=getmaxx()/2;
   midy=getmaxy()/2;
   setcolor(BLUE);
   settextstyle(BOLD_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx,midy-20,"CREATE A BAR GRAPH");
   delay(2000);
   outtextxy(midx,midy+20,"PRESS ANY KEY TO START");
   getch();
   cleardevice();
   setcolor(WHITE);
   line(10, 450, 600, 450); //x-axis
   line(10, 10, 10, 450);   //y-axis
   bar(); //function

   cleardevice();
   setcolor(WHITE);
   settextstyle(BOLD_FONT, HORIZ_DIR, 4);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx,midy,"THANK YOU...!");
   getch();
   closegraph(); //close graphics
   return 0;
}
void bar()
{
   int t,a=1;
   int name=1;
   b=40;
   int r=80;
   printf("Enter the number of the element\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {

       scanf("%d",&t);
       setfillstyle(a ,a);  //filling the bar with a pattern and setting it's color
       bar3d(b, 450-t, r,450, 10,  1);  //draw a bar
       Name(); // function to give a name to graph
       name++;
       b+=60;
       r+=60;
       a+=2;
   }
   getch();
}
void Name()
{
      char name[25];
      printf("Enter the name of bar : ");
      scanf("%s",name);
      setcolor(WHITE);
      settextstyle(BOLD_FONT, HORIZ_DIR, 2);
      settextjustify(CENTER_TEXT, CENTER_TEXT);
      outtextxy(b+20,450,name); // write a text at a perticular point (x,y)
}
