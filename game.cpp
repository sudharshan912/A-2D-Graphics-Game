//**************************************
//          HEADER FILES USED...      //
//**************************************
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<fstream.h>
#include<iomanip.h>
#include<process.h>
#include<ctype.h>
class playerdet
{
char name[25];
int age;
char usid[5];
public:
void in()
 {
 delay(500);
 cout<<"\n\n ENTER YOUR NAME:- ";
 gets(name);
 cout<<"\n\n ENTER YOUR AGE "<<name<<" :- ";
 cin>>age;
 cout<<"\n\n ENTER YOUR OWN 5 DIGIT USERID "<<name<<" :- ";
 gets(usid);
  }
void us()
{
gotoxy(20,1);
cout<<" I KNOW YOU ARE MASS DA BOY...";
}
};
//**************************************
//        FUNCTION PARAMETERS        ///
//**************************************
 void main_menu();
 void menubgm();
 void blink();
 void about();
 void loading();
 void game();
 void apple();
 void pear();
 void cherry();
 void orange();
 void door();
 void food();
 void demo();
 void gameover(int t);
 void lf();
 void l2();
 void l3bg();
 void game3();
 void lc(int z);
 void game2();

//_____________________________________________________________________
//____________________________________________________________________________

 void INTRO()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 int i,y;
 for(i=2,y=10;i<=7;i++,y=y+10)
{
 settextstyle(3,0,i);
 setcolor(RED);
 outtextxy(100-i+20,100-i+30,"SISHYANS ");
 delay(200);
 if(i<7)
 cleardevice();
 else
 delay(500);
}
 for(i=2,y=10;i<=10;i++,y=y+10)
{
 settextstyle(3,0,7);
 setcolor(YELLOW);
 outtextxy(60,0+y,"PRESENTS ");
 delay(100);
 if(i<10)
{
 cleardevice();
}
 else
{
 delay(2000);
 cleardevice();
}
}
 cleardevice();
 for(i=5,y=10;i<=20;i++,y=y+10)
{
 setcolor(GREEN);
 settextstyle(10,0,6);
 outtextxy(0+y,50,"HUNGRY");
 settextstyle(3,0,1);
 setcolor(WHITE);
 outtextxy(320+y,55,"TM");
 circle(330+y,65,15);
 delay(200);
 if(i<20)
 cleardevice();
}
 for(i=5,y=10;i<=10;i++,y=y+10)
{
 setcolor(GREEN);
 settextstyle(10,0,6);
 outtextxy(160,50,"HUNGRY");
 settextstyle(3,0,1);
 setcolor(WHITE);
 outtextxy(480,55,"TM");
 circle(490,65,15);
 setcolor(GREEN);
 settextstyle(10,0,6);
 outtextxy(260-y,200,"BIRDS");
 delay(200);
 if(i<10)
 cleardevice();
}
 setcolor(RED);
 circle(300,190,30);
 setcolor(WHITE);
 line(290,170,290,210);
 line(290,170,320,190);
 line(290,210,320,190);
 delay(3000);
 settextstyle(3,0,1);
 outtextxy(180,340,"\n PRESS ANY KEY TO PLAY");
 delay(500);
 blink();
 playerdet a;
 cleardevice();
 a.in();
 ofstream in;
 in.open("player.txt",ios::out);
 in.write((char*)&a,sizeof(a));
 in.close();
 delay(1000);
 cleardevice();
 delay(500);
 cout<<"\n\n\nHAVE ";
 delay(500);
 cout<<" A ";
 delay(500);
 cout<<"NICE TIME PLAYIN THE GAME ";
 delay(1500);
 cout<<" .....";
 delay(1500);

 main_menu();
}
//_____________________________________________________________________________
//____________________________________________________________________________

 void blink()
{
 for(int i=0;i<=100;i++)
{
 if(kbhit())
{
 getch();
 break;
}
 setcolor(GREEN);
 settextstyle(10,0,6);
 outtextxy(160,50,"HUNGRY");
 settextstyle(3,0,1);
 setcolor(WHITE);
 outtextxy(480,55,"TM");
 circle(490,65,15);
 setcolor(GREEN);
 settextstyle(10,0,6);
 outtextxy(200,200,"BIRDS");
 settextstyle(3,0,1);
 setcolor(RED);
 circle(300,190,30);
 setcolor(WHITE);
 line(290,170,290,210);
 line(290,170,320,190);
 line(290,210,320,190);
 delay(500);
 settextstyle(3,0,1);
 outtextxy(180,340,"\n PRESS ANY KEY TO PLAY");
 delay(300);
 if(i<10)
 cleardevice();
}
}
//_______________________________________________________________________________________
//____________________________________________________________________________

void main_menu()
{
 int i,y;
 for(i=0;i<3;i++)
{
 cleardevice();
 settextstyle(3,0,7);
 outtextxy(120,220,"LOADING");
 delay(500);
 settextstyle(3,0,7);
 outtextxy(390,220,".");
 delay(500);
 settextstyle(3,0,7);
 outtextxy(430,220,".");
 delay(500);
 settextstyle(3,0,7);
 outtextxy(470,220,".");
 delay(500);
 playerdet a;
 delay(1000);
 cleardevice();
}
 menubgm();
 for(i=5,y=10;i<=20;i++,y=y+10)
{
 setcolor(GREEN);
 settextstyle(10,0,5);
 outtextxy(80,50,"HUNGRY");
 setcolor(GREEN);
 settextstyle(10,0,5);
 outtextxy(350,50,"BIRDS");
 settextstyle(3,0,1);
 setcolor(WHITE);
 outtextxy(530,55,"TM");
 circle(540,65,15);
 setcolor(BROWN);
 settextstyle(1,0,5);
 outtextxy(-30+y,150,"1. START GAME");
 setcolor(BROWN);
 settextstyle(1,0,5);
 outtextxy(290-y,200,"2. DEMO ");
 setcolor(BROWN);
 settextstyle(1,0,5);
 outtextxy(-30+y,250,"3. LEVELS");
 setcolor(BROWN);
 settextstyle(1,0,5);
 outtextxy(290-y,300,"4. ABOUT");
 setcolor(BROWN);
 settextstyle(1,0,5);
 outtextxy(-30+y,350,"5. EXIT GAME");
 delay(100);
 if(i<=19)
 cleardevice();
}
 char choice=getch();
 if(choice=='1')
{
 delay(500);
 cleardevice();
 loading();
 game();
}
 if(choice=='2')
{
 delay(500);
 cleardevice();
 delay(500);
 settextstyle(10,0,7);
 setcolor(RED);
 outtextxy(200,100,"DEMO");
 settextstyle(10,0,6);
 setcolor(WHITE);
 outtextxy(100,250,"GAMEPLAY...");
 delay(2000);
 demo();
 delay(1000);
 getch();
 cleardevice();
 setcolor(WHITE);
 main_menu();
}
 if(choice=='3')
{
 delay(500);
 cleardevice();
 settextstyle(7,0,4);
 setcolor(RED);
 outtextxy(100,100,"LEVEL SELECTION");
 int a;
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ENTER THE LEVEL YOU WANT TO PLAY:- ";
 cin>>a;
 if(a==1)
 {
 loading();
 game();
 }
 if(a==2)
 {
 loading();
 game2();
 }
  if(a==3)
 {
 loading();
 game3();
 }
 else
 {
 delay(500);
 main_menu();
 }
}

 if(choice=='4')
{
 delay(500);
 cleardevice();
 about();
 delay(1000);
 getch();
 main_menu();
}
 if(choice=='5')
{
 delay(500);
 cleardevice();
 settextstyle(4,0,7);
 setcolor(CYAN);
 outtextxy(150,100,"THANK YOU");
 getch();
 delay(500);
 exit(1);
}
}
//____________________________________________________________________________
//____________________________________________________________________________

 void menubgm()
{
 delay(500);
 setcolor(GREEN);
 settextstyle(10,0,5);
 outtextxy(80,50,"HUNGRY");
 setcolor(GREEN);
 delay(500);
 settextstyle(10,0,5);
 outtextxy(350,50,"BIRDS");
 settextstyle(3,0,1);
 setcolor(WHITE);
 delay(500);
 outtextxy(530,55,"TM");
 circle(540,65,15);
}
//____________________________________________________________________________
//____________________________________________________________________________

 void about()
{
 delay(500);
 cleardevice();
 settextstyle(7,0,7);
 setcolor(RED);
 delay(500);
 outtextxy(200,0,"ABOUT");
 settextstyle(3,0,4);
 setcolor(GREEN);
 delay(500);
 outtextxy(10,70,"CONTROLS:- ");
 settextstyle(3,0,3);
 setcolor(WHITE);
 delay(500);
 outtextxy(10,120,"@ PRESS \" W \" TO MOVE CHARACTER UP... ");
 delay(500);
 outtextxy(10,140,"@ PRESS \" S \" TO MOVE CHARACTER DOWN... ");
 delay(500);
 outtextxy(10,160,"@ PRESS \" A \" TO MOVE CHARACTER LEFT... ");
 delay(500);
 outtextxy(10,180,"@ PRESS \" D \" TO MOVE CHARACTER RIGHT... ");
 settextstyle(3,0,4);
 setcolor(GREEN);
 delay(500);
 outtextxy(10,220,"GAME MAKERS:- ");
 settextstyle(3,0,3);
 setcolor(WHITE);
 delay(500);
 outtextxy(10,260,"THIS GAME IS A COMPUTER PROJECT DONE BY:- ");
 delay(500);
 outtextxy(10,290,"$ MARUDHA SUDHARSHAN.R ");
 delay(500);
 outtextxy(10,310,"$ VIJAY KARTHIK.K ");
 delay(500);
 outtextxy(10,330,"$ JUNAID.N ");
 delay(500);
 outtextxy(10,380,"STUDYING IN ");
 delay(500);
 setcolor(RED);
 outtextxy(160,380,"SISHYA SCHOOL,HOSUR ");
 setcolor(WHITE);
}
//____________________________________________________________________________
//____________________________________________________________________________

 void loading()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm," ");
 setcolor(RED);
 rectangle(0,305,639,323);
 setcolor(CYAN);
 for(int i=0,a=0;i<=639;i++)
{
 gotoxy(35,17);
 if((i%2==0&&i%3==0))
 a++;
 else
 if(a>0&&a<50)
 cout<<"\n\n  PREPARING HURDLES...";
 if(a>=50&&a<80)
 cout<<"\n\n       HIDING FOODS...";
 if(a>=80&&a<90)
 cout<<"\n\n                                READY ...";
 if(a>=90&&a<100)
 cout<<"\n\n                                           STEADY...";
 if(a>=100&&a<106)
 cout<<"\n\n                                                        PO ...";
 outtextxy(i,310,"|");
 if(a>20&&a<30)
 delay(15);
 else if(a>40&&a<55)
 delay(30);
 else if(a>70&&a<80)
 delay(20);
 else if(a>90&&a<99)
 delay(5);
 else if(a==106)
 delay(100);
 else
 delay(10);
}
}
//________________________________________________________________________________
//________________________________________________________________________________

void orange()
{
 setcolor(22);
 setfillstyle(1,22);
 circle(300,380,5);
 floodfill(300,380,22);
 setcolor(GREEN);
 line(300,372,303,375);
 line(302,373,305,374);
}
void cherry()
{
 setcolor(RED);
 setfillstyle(1,RED);
 circle(380,100,3);
 floodfill(380,100,RED);
 circle(390,100,3);
 floodfill(390,100,RED);
 setcolor(GREEN);
 line(390,97,385,90);
 line(381,97,385,90);
 setcolor(BROWN);
 line(378,90,393,90);
}
void pear()
{
 setcolor(YELLOW);
 setfillstyle(1,YELLOW);
 circle(450,100,5);
 floodfill(450,100,YELLOW);
 circle(450,106,7);
 floodfill(450,106,YELLOW);
 setcolor(GREEN);
 line(450,90,450,95);
}

void apple()
{
 setcolor(RED);
 setfillstyle(1,RED);
 circle(150,360,4);
 floodfill(150,360,RED);
 setfillstyle(1,RED);
 circle(154,360,4);
 setfillstyle(1,RED);
 floodfill(155,360,RED);
 setfillstyle(1,RED);
 setcolor(GREEN);
 line(152,357,155,353);
setcolor(YELLOW);
}

void door()
{
setcolor(BROWN);
for(int i=0;i<=4;i++)
{
rectangle(610+i,20+i,638-i,70-i);
}
setcolor(CYAN);
setfillstyle(1,CYAN);
circle(620,45,2);
floodfill(620,45,CYAN);
setcolor(WHITE);
settextstyle(234,0,1);
outtextxy(600,80,"DOOR ");
outtextxy(600,90,"TO ");
outtextxy(600,100,"NEXT ");
outtextxy(600,110,"LEVEL... ");
setcolor(YELLOW);
}


void bgm()
{
playerdet a;
a.us();
setcolor(YELLOW);
apple();
pear();
cherry();
orange();
setcolor(YELLOW);
rectangle(0,-1,639,475);
rectangle(100,20,130,240);
door();
setcolor(YELLOW);
rectangle(100,280,130,475);
rectangle(180,20,210,180);
rectangle(180,220,210,475);
rectangle(250,20,280,120);
rectangle(250,160,280,475);
rectangle(330,20,360,280);
rectangle(330,320,360,475);
rectangle(400,20,430,250);
rectangle(400,280,430,475);
rectangle(470,20,500,350);
rectangle(470,380,500,475);
rectangle(540,20,570,100);
rectangle(540,140,570,475);
settextstyle(1,1,5);
setcolor(GREEN);
outtextxy(40,150,"START...");
settextstyle(1,1,5);
setcolor(GREEN);
outtextxy(570,150,"FINISH..");
}

//________________________________________________________________________________
//________________________________________________________________________________
void food()
{
setcolor(RED);
circle(380,120,3);
circle(380,120,2);
circle(380,120,1);
}

void demo()
{
bgm();
int x=2,y=10;
gotoxy(x,y);
cout<<"\2";
l1:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<10)
{
cleardevice();
goto l1;
}
settextstyle(7,1,4);
setcolor(WHITE);
outtext("PRESS \"D \" TO MOVE RIGHT");
delay(4000);
l2:bgm();
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
delay(200);
if(y<17)
{
cleardevice();
goto l2;
}
settextstyle(7,1,4);
setcolor(WHITE);
outtext("PRESS \"S \" TO MOVE DOWN");
delay(4000);
l3:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<20)
{
cleardevice();
goto l3;
}
l4:bgm();
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
delay(200);
if(y>13)
{
cleardevice();
goto l4;
}
settextstyle(7,1,4);
setcolor(WHITE);
outtext("PRESS \"W \" TO MOVE UP...");
delay(4000);
l5:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<30)
{
cleardevice();
goto l5;
}
l6:bgm();
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
delay(200);
if(y>9)
{
cleardevice();
goto l6;
}
l7:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<38)
{
cleardevice();
goto l7;
}
delay(500);
l8:bgm();
gotoxy(x-1,y);
x=x-1;
cout<<"\2";
delay(200);
if(x>30)
{
cleardevice();
goto l8;
}
settextstyle(7,1,4);
setcolor(WHITE);
outtext("PRESS \"A \" TO MOVE LEFT...");
delay(4000);
l9:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<38)
{
cleardevice();
goto l9;
}
l10:bgm();
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
delay(200);
if(y<19)
{
cleardevice();
goto l10;
}
l11:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<50)
{
cleardevice();
goto l11;
}
delay(200);
settextstyle(7,1,2);
setcolor(WHITE);
outtextxy(10,160,"IF CRASHED INTO BAR ");
setcolor(RED);
outtextxy(10,10," GAME OVER !!!");
delay(4000);
l12:bgm();
gotoxy(x-1,y);
x=x-1;
cout<<"\2";
delay(200);
if(x>48)
{
cleardevice();
goto l12;
}
food();
l13:bgm();
food();
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
delay(200);
if(y>8)
{
cleardevice();
goto l13;
}
delay(1000);
settextstyle(7,1,1);
setcolor(WHITE);
outtextxy(10,170,"FEED THE HUNGRY BIRDS ");
setcolor(RED);
outtextxy(10,7," TO EARN POINTS");
delay(4000);
l14:bgm();
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
delay(200);
if(y<17)
{
cleardevice();
goto l14;
}
l15:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<58)
{
cleardevice();
goto l15;
}
l16:bgm();
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
delay(200);
if(y<23)
{
cleardevice();
goto l16;
}
l17:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<65)
{
cleardevice();
goto l17;
}
l18:bgm();
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
delay(200);
if(y>8)
{
cleardevice();
goto l18;
}
l19:bgm();
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
delay(200);
if(x<75)
{
cleardevice();
goto l19;
}
delay(4000);
settextstyle(7,1,1);
setcolor(RED);
outtextxy(10,170,"REACH FINISH TO COMPLETE LEVEL");
}
void gameover(int t)
{
delay(500);
cleardevice();
settextstyle(7,0,6);
setcolor(RED);
delay(40);
outtextxy(100,100,"G");
delay(40);
outtextxy(150,100,"A");
delay(40);
outtextxy(200,100,"M");
delay(40);
outtextxy(250,100,"E");
delay(40);
outtextxy(300,100," ");
delay(40);
outtextxy(350,100,"O");
delay(40);
outtextxy(400,100,"V");
delay(40);
outtextxy(450,100,"E");
delay(40);
outtextxy(500,100,"R");
delay(40);
outtextxy(550,100," ");
delay(40);
outtextxy(600,100,"!");
delay(40);
delay(40);
outtextxy(610,100,"!");
delay(40);
delay(40);
outtextxy(620,100,"!");
delay(1000);
cleardevice();
cout<<"\n\n DO YOU WANNA CONTINUE(Y/N):- ";
char ch;
cin>>ch;
if(ch=='Y'||ch=='y')
{
if(t==1)
{
loading();
game();
}
if(t==2)
{
loading();
game2();
}
if(t==3)
{
loading();
game3();
}
}
else
main_menu();
}

void lf()
{
setcolor(9);
for( int i=0,j=639,k=475;i<=9;i++,j--,k--)
{
rectangle(i,i,j,k);
}
delay(100);
setcolor(BLUE);
for( i=10,j=629,k=465;i<=19;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(CYAN);
for( i=20,j=619,k=455;i<=29;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(GREEN);
for( i=30,j=609,k=445;i<=39;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(YELLOW);
for( i=40,j=599,k=435;i<=49;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(12);
for( i=50,j=589,k=425;i<=59;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);

setcolor(RED);
for(i=60,j=579,k=415;i<=69;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(BLUE);
settextstyle(3,0,6);
setcolor(BROWN);
outtextxy(120,120,"GAME");
outtextxy(200,180,"COMPLETED");
setcolor(4);
line(120,180,285,180);
line(200,240,520,240);
settextstyle(7,0,3);
setcolor(CYAN);
outtextxy(130,270,"UPGRADED VERSION");
settextstyle(2,0,4);
setcolor(5);
outtextxy(190,300,"(yet to be created)");
outtextxy(190,330,"(PRESS L TO GO TO MAINMENU)");

settextstyle(7,0,3);
setcolor(CYAN);
outtextxy(390,270,"Exit");
settextstyle(2,0,4);
setcolor(5);
outtextxy(390,300,"(Press E)");
char in=getch();
if(in=='l'||in=='L')
{
cleardevice();
settextstyle(3,0,3);
setcolor(CYAN);
outtextxy(150,270,"THANKS FOR PLAYING");
delay(500);
delay(500);
main_menu();

}
if(in=='e'||in=='E')
{
delay(500);
main_menu();
}
}
void l2()
{
setfillstyle(4,5);
setcolor(YELLOW);
rectangle(0,0,639,475);
rectangle(60,0,90,300);
rectangle(60,350,90,475);
rectangle(120,0,150,200);
rectangle(120,250,150,475);
setcolor(BROWN);
 for(int i=0;i<=4;i++)
{
 rectangle(610+i,20+i,638-i,70-i);
}
for(i=0;i<=4;i++)
{
 rectangle(5+i,370+i,34-i,420-i);
}
 setcolor(CYAN);
 setfillstyle(1,CYAN);
 circle(10,395,2);
 floodfill(10,395,CYAN);
 setcolor(WHITE);
 settextstyle(234,0,1);
 outtextxy(5,430,"WELCOME ");
 outtextxy(5,440,"TO ");
 outtextxy(5,450,"LEVEL ");
 outtextxy(5,460,"  2 ");

 setcolor(CYAN);
 setfillstyle(1,CYAN);
 circle(620,45,2);
 floodfill(620,45,CYAN);
 setcolor(WHITE);
 settextstyle(234,0,1);
 outtextxy(600,80,"DOOR ");
 outtextxy(600,90,"TO ");
 outtextxy(590,100,"LEVEL ");
 outtextxy(590,110,"   3 ");
 setcolor(YELLOW);
line(180,0,180,300);
line(180,300,230,250);
line(230,250,280,300);
line(280,300,330,250);
line(330,250,380,300);
line(180,0,380,0);
line(380,0,380,300);
line(180,350,180,475);
line(180,350,230,300);
line(230,300,280,350);
line(280,350,330,300);
line(330,300,380,350);
line(380,350,380,475);
line(180,475,380,475);
rectangle(430,80,480,475);
rectangle(430,0,480,30);
rectangle(530,0,580,200);
rectangle(530,250,580,475);
}

void game2()
{
int j;
j=2;
l2();
int x=2,y=25;
gotoxy(2,24);
cout<<"\2";
delay(100);
cleardevice();
l2();
gotoxy(2,23);
cout<<"\2";
delay(100);
cleardevice();
l2();
gotoxy(2,22);
cout<<"\2";
delay(100);
cleardevice();
l2();
gotoxy(2,21);
cout<<"\2";
delay(100);
cleardevice();
l2();
x=2;
y=21;
gotoxy(x,y);
cout<<"\2";
int count=0;
l1:char c=getch();
count=count+1;
cleardevice();
l2();
//a
if((int)c==97||(int)c==65)
{
gotoxy(x-1,y);
x=x-1;
cout<<"\2";
//cout<<x<<y;
if((x>=8&&x<=12&&y!=20&&y!=21)||(x>=15&&x<=20&&y!=14&&y!=15)||(x>=54&&x<=61&&y!=3&&y!=4&&y!=5)||(x>=67&&x<=73&&y!=14&&y!=15)||(x>=23&&x<=24&&y!=20&&y!=21)||(x==25&&y!=20)||(x==26&&y!=20&&y!=19)||(x==27&&y!=19)||(x==28&&y!=18&&y!=19)||(x>=29&&x<=30&&y!=18)||(x==32&&y!=19)||(x==44&&y!=19)||(x==40&&y!=18&&y!=19)||(x==41&&y!=18&&y!=19)||(x==43&&y!=18&&y!=19)||(x==33&&y!=19&&y!=20)||(x==38&&y!=19&&y!=20)||(x==39&&y!=19&&y!=20)||(x==45&&y!=19&&y!=20)||(x==37&&y!=20)||(x==46&&y!=20)||(x==35&&y!=20&&y!=21)||(x==36&&y!=20&&y!=21)||(x==47&&y!=20&&y!=21)||(x==48&&y!=20&&y!=21))

{
delay(500);
cleardevice();
gameover(j);
}
goto l1;
}
//w
if((int)c==119||(int)c==87)
{
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
//cout<<x<<y;
if((x>=8&&x<=12&&y!=20&&y!=21)||(x>=15&&x<=20&&y!=14&&y!=15)||(x>=54&&x<=61&&y!=3&&y!=4&&y!=5)||(x>=67&&x<=73&&y!=14&&y!=15)||(x>=23&&x<=24&&y!=20&&y!=21)||(x==25&&y!=20)||(x==26&&y!=20&&y!=19)||(x==27&&y!=19)||(x==28&&y!=18&&y!=19)||(x>=29&&x<=30&&y!=18)||(x==32&&y!=19)||(x==44&&y!=19)||(x==40&&y!=18&&y!=19)||(x==41&&y!=18&&y!=19)||(x==43&&y!=18&&y!=19)||(x==33&&y!=19&&y!=20)||(x==38&&y!=19&&y!=20)||(x==39&&y!=19&&y!=20)||(x==45&&y!=19&&y!=20)||(x==37&&y!=20)||(x==46&&y!=20)||(x==35&&y!=20&&y!=21)||(x==36&&y!=20&&y!=21)||(x==47&&y!=20&&y!=21)||(x==48&&y!=20&&y!=21))

{
delay(500);
cleardevice();
gameover(j);
}
goto l1;
}
//s
if((int)c==115||(int)c==83)
{
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
//cout<<x<<y;
if((x>=8&&x<=12&&y!=20&&y!=21)||(x>=15&&x<=20&&y!=14&&y!=15)||(x>=54&&x<=61&&y!=3&&y!=4&&y!=5)||(x>=67&&x<=73&&y!=14&&y!=15)||(x>=23&&x<=24&&y!=20&&y!=21)||(x==25&&y!=20)||(x==26&&y!=20&&y!=19)||(x==27&&y!=19)||(x==28&&y!=18&&y!=19)||(x>=29&&x<=30&&y!=18)||(x==32&&y!=19)||(x==44&&y!=19)||(x==40&&y!=18&&y!=19)||(x==41&&y!=18&&y!=19)||(x==43&&y!=18&&y!=19)||(x==33&&y!=19&&y!=20)||(x==38&&y!=19&&y!=20)||(x==39&&y!=19&&y!=20)||(x==45&&y!=19&&y!=20)||(x==37&&y!=20)||(x==46&&y!=20)||(x==35&&y!=20&&y!=21)||(x==36&&y!=20&&y!=21)||(x==47&&y!=20&&y!=21)||(x==48&&y!=20&&y!=21))

{
delay(500);
cleardevice();
gameover(j);
}
goto l1;
}
//d
if((int)c==100||(int)c==68)
{
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
//cout<<x<<y;
if((x>=8&&x<=12&&y!=20&&y!=21)||(x>=15&&x<=20&&y!=14&&y!=15)||(x>=54&&x<=61&&y!=3&&y!=4&&y!=5)||(x>=67&&x<=73&&y!=14&&y!=15)||(x>=23&&x<=24&&y!=20&&y!=21)||(x==25&&y!=20)||(x==26&&y!=20&&y!=19)||(x==27&&y!=19)||(x==28&&y!=18&&y!=19)||(x>=29&&x<=30&&y!=18)||(x==32&&y!=19)||(x==44&&y!=19)||(x==40&&y!=18&&y!=19)||(x==41&&y!=18&&y!=19)||(x==43&&y!=18&&y!=19)||(x==33&&y!=19&&y!=20)||(x==38&&y!=19&&y!=20)||(x==39&&y!=19&&y!=20)||(x==45&&y!=19&&y!=20)||(x==37&&y!=20)||(x==46&&y!=20)||(x==35&&y!=20&&y!=21)||(x==36&&y!=20&&y!=21)||(x==47&&y!=20&&y!=21)||(x==48&&y!=20&&y!=21))
{
delay(500);
cleardevice();
gameover(j);
}
goto l1;
}
if((x==78||x==79)&&(y==3))
{
delay(500);
cleardevice();
delay(500);
cleardevice();
lc(3);
delay(1500);
cleardevice();
exit(1);
gotoxy(6,25);
x=6;
y=25;
j=2;
}
}
void lc(int z)
{
setcolor(9);
for( int i=0,j=639,k=475;i<=9;i++,j--,k--)
{
rectangle(i,i,j,k);
}
delay(100);
setcolor(BLUE);
for( i=10,j=629,k=465;i<=19;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(CYAN);
for( i=20,j=619,k=455;i<=29;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(GREEN);
for( i=30,j=609,k=445;i<=39;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(YELLOW);
for( i=40,j=599,k=435;i<=49;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(12);
for( i=50,j=589,k=425;i<=59;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);

setcolor(RED);
for(i=60,j=579,k=415;i<=69;i++,j--,k--)
{
rectangle(i,i,j,k);
} delay(100);
setcolor(BLUE);
settextstyle(3,0,6);
setcolor(BROWN);
outtextxy(120,120,"LEVEL");
outtextxy(200,180,"COMPLETED");
setcolor(4);
line(120,180,285,180);
line(200,240,520,240);
settextstyle(7,0,3);
setcolor(CYAN);
outtextxy(150,270,"Next Level");
settextstyle(2,0,4);
setcolor(5);
outtextxy(190,300,"(Press L)");
settextstyle(7,0,3);
setcolor(CYAN);
outtextxy(350,270,"Exit");
settextstyle(2,0,4);
setcolor(5);
outtextxy(350,300,"(Press E)");
char in=getch();
if(in=='l'||in=='L')
{
cleardevice();
if(z==2)
game2();
if(z==3)
game3();
}
if(in=='e'||in=='E')
{
delay(500);
main_menu();
}
}
void game()
{
int gh=DETECT,gv;
initgraph(&gh,&gv,"");
int i;
i=1;
bgm();
int x=2,y=10;
//char l[]=="bgm";
gotoxy(x,y);
cout<<"\2";
int count=0;
l1:char c=getch();
count=count+1;
cleardevice();
bgm();
//a
if((int)c==97||(int)c==65)
{
gotoxy(x-1,y);
x=x-1;
cout<<"\2";
//cout<<x<<y;
if((x>=13&&x<=17&&y!=17)||(x>=23&&x<=27&&y!=13)||(x>=32&&x<=36&&y!=9&&y!=10)||(x>=42&&x<=46&&y!=19&&y!=20)||(x>=50&&x<=54&&y!=17)||(x>=59&&x<=63&&y!=23)||(x>=68&&x<=72&&y!=8))
{
delay(500);
cleardevice();
gameover(i);
}
goto l1;
}
//w
else if((int)c==119||(int)c==87)
{
gotoxy(x,y-1);
y=y-1;
cout<<"\2";
//cout<<x<<y;
if((x>=13&&x<=17&&y!=17)||(x>=23&&x<=27&&y!=13)||(x>=32&&x<=36&&y!=9&&y!=10)||(x>=42&&x<=46&&y!=19&&y!=20)||(x>=50&&x<=54&&y!=17)||(x>=59&&x<=63&&y!=23)||(x>=68&&x<=72&&y!=8))
{
delay(500);
cleardevice();
gameover(i);
}
goto l1;
}
//s
else if((int)c==115||(int)c==83)
{
gotoxy(x,y+1);
y=y+1;
cout<<"\2";
//cout<<x<<y;
if((x>=13&&x<=17&&y!=17)||(x>=23&&x<=27&&y!=13)||(x>=32&&x<=36&&y!=9&&y!=10)||(x>=42&&x<=46&&y!=19&&y!=20)||(x>=50&&x<=54&&y!=17)||(x>=59&&x<=63&&y!=23)||(x>=68&&x<=72&&y!=8))
{
delay(500);
cleardevice();
gameover(i);
}
goto l1;
}
if((x==37||x==38)&&(y==24))
{
setcolor(22 );
settextstyle(243,0,3);
outtextxy(250,360,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(250,350,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(250,340,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(250,330,"$$ BONUS $$");
delay(100);
}
if((x==78||x==79)&&(y==3))
{
delay(500);
cleardevice();
delay(500);
cleardevice();
lc(2);
delay(1500);
cleardevice();
l2();
gotoxy(6,25);
x=6;
y=25;
i=2;
}
//cheryy
if((x==48||x==49)&&(y==7))
{
setcolor(RED);
settextstyle(243,0,3);
outtextxy(380,30,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,40,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,50,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,60,"$$ BONUS $$");
delay(100);
}
if((x==56||x==57)&&(y==7))
{
setcolor(YELLOW);
settextstyle(243,0,3);
outtextxy(380,30,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,40,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,50,"$$ BONUS $$");
delay(100);
//cleardevice();
outtextxy(380,60,"$$ BONUS $$");
delay(100);
}

if((x==19||x==20)&&(y==23))
{
setcolor(RED);
settextstyle(243,0,3);
outtextxy(150,360,"$$ IT'S A TRAP $$");
delay(100);
outtextxy(150,350,"$$ IT'S A TRAP $$");
delay(100);
outtextxy(150,340,"$$ IT'S A TRAP $$");
delay(100);
outtextxy(150,330,"$$ IT'S A TRAP $$");
delay(100);
setcolor(YELLOW);
delay(1000);
gameover(i);
}

//d
else if((int)c==100||(int)c==68)
{
gotoxy(x+1,y);
x=x+1;
cout<<"\2";
//cout<<x<<y;
if((x>=13&&x<=17&&y!=17)||(x>=23&&x<=27&&y!=13)||(x>=32&&x<=36&&y!=9&&y!=10)||(x>=42&&x<=46&&y!=19&&y!=20)||(x>=50&&x<=54&&y!=17)||(x>=59&&x<=63&&y!=23)||(x>=68&&x<=72&&y!=8))
{
delay(500);
cleardevice();
gameover(i);
}
goto l1;
}
}


void l3bg()
{
playerdet a;
a.us();
setcolor(YELLOW);
rectangle(0,0,639,475);
rectangle(50,0,80,200);
rectangle(50,250,80,475);
rectangle(115,0,150,300);
rectangle(115,350,150,475);
line(180,0,180,200);

line(180,200,230,250);
line(230,250,280,300);
line(280,300,330,250);
line(330,250,380,300);
line(180,0,380,0);
line(280,300,330,250);
line(330,250,380,300);
line(380,300,430,250);
line(430,250,480,300);
line(480,300,530,350);

line(530,0,530,350);


line(180,250,180,475);
line(180,250,230,300);
line(230,300,280,350);
line(280,350,330,300);
line(330,300,380,350);
line(380,350,430,300);
line(430,300,480,350);
line(480,350,530,400);

line(530,400,530,475);

rectangle(565,0,600,200);
rectangle(565,230,600,475);
setcolor(BROWN);
for(int i=0;i<=4;i++)
{
 rectangle(610+i,20+i,638-i,70-i);
}
for(i=0;i<=4;i++)
{
 rectangle(5+i,370+i,34-i,420-i);
}
 setcolor(CYAN);
 setfillstyle(1,CYAN);
 circle(10,395,2);
 floodfill(10,395,CYAN);
 setcolor(WHITE);
 settextstyle(234,0,1);
 outtextxy(5,430,"WELCOME ");
 outtextxy(5,440,"TO ");
 outtextxy(5,450,"LEVEL ");
 outtextxy(5,460,"  3 ");

 setcolor(CYAN);
 setfillstyle(1,CYAN);
 circle(620,45,2);
 floodfill(620,45,CYAN);
 setcolor(WHITE);

 settextstyle(234,0,1);
 outtextxy(600,80,"DOOR ");
 outtextxy(600,90,"TO ");
 outtextxy(600,100,"END ");
 outtextxy(600,110," GAME ");

}


void game3()
{
l3bg();
int x=2,y=25;
int j=3;
gotoxy(2,24);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,23);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,22);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,21);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,20);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,19);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,18);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
gotoxy(2,17);
cout<<"\2";
delay(100);
cleardevice();
l3bg();
//--------------------------------------------------------------------------------
//cleardevice();
x=2,y=15;
gotoxy(2,15);
cout<<"\2";
char in;
l3:
//clrscr();
in=getch();

//j
if((int)in==74||(int)in==106)
{
cleardevice();
l3bg();
x=69;y=14;
gotoxy(x,y);
cout<<"\2";
//cout<<x<<","<<y;
if((x==7&&(y>=1&&y<=13))||(x==7&&(y>=16&&y<=30))||(y==13&&(x>=7&&x<=11))||(y==16&&(x>=7&&x<=11))||(x==11&&(y>=1&&y<=13))||(x==11&&(y>=16&&y<=30))||(x==23&&(y>=1&&y<=13))||(x==23&&(y>=17&&y<=30))||(x==67&&(y>=1&&y<=22))||(x==67&&(y>=26&&y<=30))||(x==24&&y!=15)||(x==25&&(y!=15&&y!=16))||(x==26&&y!=16)||(x==27&&(y!=16&&y!=17))||(x==28&&y!=17)||(x==29&&(y!=17&&y!=18))||(x==30&&y!=18)||(x==31&&(y!=18&&y!=19))||(x==32&&(y!=19))||(x==33&&(y!=19&&y!=20))||(x==34&&(y!=20))||(x==35&&(y!=20&&y!=21))||(x==36&&(y!=20&&y!=21))||(x==37&&(y!=20))||(x==38&&(y!=20&&y!=19))||(x==39&&(y!=19))||(x==40&&(y!=18&&y!=19))||(x==41&&(y!=18))||(x==42&&(y!=17&&y!=18))||(x==43&&(y!=18&&y!=19))||(x==44&&(y!=19))||(x==45&&(y!=19&&y!=20))||(x==46&&(y!=20))||(x==47&&(y!=20&&y!=21))||(x==48&&(y!=20&&y!=21))||(x==49&&(y!=21&&y!=20))||(x==50&&(y!=20))||(x==51&&(y!=20&&y!=19))||(x==52&&(y!=19))||(x==53&&(y!=18&&y!=19))||(x==54&&(y!=18))||(x==55&&(y!=18))||(x==56&&(y!=18&&y!=19))||(x==57&&(y!=19)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==58&&(y!=19&&y!=20))||(x==59&&(y!=20))||(x==60&&(y!=20&&y!=21))||(x==61&&(y!=21))||(x==62&&(y!=21&&y!=22))||(x==63&&(y!=22))||(x==64&&(y!=23&&y!=22))||(x==65&&(y!=23))||(x==66&&(y!=23&&y!=24))||(x==67&&(y!=24&&y!=23))||(x==15&&(y>=1&&y<=19))||(x==15&&(y>=22&&y<=30))||(y==19&&(x>=15&&x<=19))||(x==19&&(y>=1&&y<=19))||(y==22&&(x>=15&&x<=19))||(x==19&&(y>=22&&y<=30))||(x==71&&(y>=1&&y<=13))||(x==71&&(y>=15&&y<=30))||(y==13&&(x>=71&&x<=76))||(y==15&&(x>=71&&x<=76))||(x==76&&(y>=1&&y<=13))||(x==76&&(y>=15&&y<=30)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
goto l3;
}

//a
if((int)in==65||(int)in==97)
{
cleardevice();
l3bg();
x=x-1;
gotoxy(x,y);
cout<<"\2";
//cout<<x<<","<<y;
if((x==7&&(y>=1&&y<=13))||(x==7&&(y>=16&&y<=30))||(y==13&&(x>=7&&x<=11))||(y==16&&(x>=7&&x<=11))||(x==11&&(y>=1&&y<=13))||(x==11&&(y>=16&&y<=30))||(x==23&&(y>=1&&y<=13))||(x==23&&(y>=17&&y<=30))||(x==67&&(y>=1&&y<=22))||(x==67&&(y>=26&&y<=30))||(x==24&&y!=15)||(x==25&&(y!=15&&y!=16))||(x==26&&y!=16)||(x==27&&(y!=16&&y!=17))||(x==28&&y!=17)||(x==29&&(y!=17&&y!=18))||(x==30&&y!=18)||(x==31&&(y!=18&&y!=19))||(x==32&&(y!=19))||(x==33&&(y!=19&&y!=20))||(x==34&&(y!=20))||(x==35&&(y!=20&&y!=21))||(x==36&&(y!=20&&y!=21))||(x==37&&(y!=20))||(x==38&&(y!=20&&y!=19))||(x==39&&(y!=19))||(x==40&&(y!=18&&y!=19))||(x==41&&(y!=18))||(x==42&&(y!=17&&y!=18))||(x==43&&(y!=18&&y!=19))||(x==44&&(y!=19))||(x==45&&(y!=19&&y!=20))||(x==46&&(y!=20))||(x==47&&(y!=20&&y!=21))||(x==48&&(y!=20&&y!=21))||(x==49&&(y!=21&&y!=20))||(x==50&&(y!=20))||(x==51&&(y!=20&&y!=19))||(x==52&&(y!=19))||(x==53&&(y!=18&&y!=19))||(x==54&&(y!=18))||(x==55&&(y!=18))||(x==56&&(y!=18&&y!=19))||(x==57&&(y!=19)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==58&&(y!=19&&y!=20))||(x==59&&(y!=20))||(x==60&&(y!=20&&y!=21))||(x==61&&(y!=21))||(x==62&&(y!=21&&y!=22))||(x==63&&(y!=22))||(x==64&&(y!=23&&y!=22))||(x==65&&(y!=23))||(x==66&&(y!=23&&y!=24))||(x==67&&(y!=24&&y!=23))||(x==15&&(y>=1&&y<=19))||(x==15&&(y>=22&&y<=30))||(y==19&&(x>=15&&x<=19))||(x==19&&(y>=1&&y<=19))||(y==22&&(x>=15&&x<=19))||(x==19&&(y>=22&&y<=30))||(x==71&&(y>=1&&y<=13))||(x==71&&(y>=15&&y<=30))||(y==13&&(x>=71&&x<=76))||(y==15&&(x>=71&&x<=76))||(x==76&&(y>=1&&y<=13))||(x==76&&(y>=15&&y<=30)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
goto l3;
}

//s
if((int)in==83||(int)in==115)
{
cleardevice();
l3bg();
y=y+1;
gotoxy(x,y);
cout<<"\2";
//cout<<x<<y;
if((x==7&&(y>=1&&y<=13))||(x==7&&(y>=16&&y<=30))||(y==13&&(x>=7&&x<=11))||(y==16&&(x>=7&&x<=11))||(x==11&&(y>=1&&y<=13))||(x==11&&(y>=16&&y<=30))||(x==23&&(y>=1&&y<=13))||(x==23&&(y>=17&&y<=30))||(x==67&&(y>=1&&y<=22))||(x==67&&(y>=26&&y<=30))||(x==24&&y!=15)||(x==25&&(y!=15&&y!=16))||(x==26&&y!=16)||(x==27&&(y!=16&&y!=17))||(x==28&&y!=17)||(x==29&&(y!=17&&y!=18))||(x==30&&y!=18)||(x==31&&(y!=18&&y!=19))||(x==32&&(y!=19))||(x==33&&(y!=19&&y!=20))||(x==34&&(y!=20))||(x==35&&(y!=20&&y!=21))||(x==36&&(y!=20&&y!=21))||(x==37&&(y!=20))||(x==38&&(y!=20&&y!=19))||(x==39&&(y!=19))||(x==40&&(y!=18&&y!=19))||(x==41&&(y!=18))||(x==42&&(y!=17&&y!=18))||(x==43&&(y!=18&&y!=19))||(x==44&&(y!=19))||(x==45&&(y!=19&&y!=20))||(x==46&&(y!=20))||(x==47&&(y!=20&&y!=21))||(x==48&&(y!=20&&y!=21))||(x==49&&(y!=21&&y!=20))||(x==50&&(y!=20))||(x==51&&(y!=20&&y!=19))||(x==52&&(y!=19))||(x==53&&(y!=18&&y!=19))||(x==54&&(y!=18))||(x==55&&(y!=18))||(x==56&&(y!=18&&y!=19))||(x==57&&(y!=19)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==58&&(y!=19&&y!=20))||(x==59&&(y!=20))||(x==60&&(y!=20&&y!=21))||(x==61&&(y!=21))||(x==62&&(y!=21&&y!=22))||(x==63&&(y!=22))||(x==64&&(y!=23&&y!=22))||(x==65&&(y!=23))||(x==66&&(y!=23&&y!=24))||(x==67&&(y!=24&&y!=23))||(x==15&&(y>=1&&y<=19))||(x==15&&(y>=22&&y<=30))||(y==19&&(x>=15&&x<=19))||(x==19&&(y>=1&&y<=19))||(y==22&&(x>=15&&x<=19))||(x==19&&(y>=22&&y<=30))||(x==71&&(y>=1&&y<=13))||(x==71&&(y>=15&&y<=30))||(y==13&&(x>=71&&x<=76))||(y==15&&(x>=71&&x<=76))||(x==76&&(y>=1&&y<=13))||(x==76&&(y>=15&&y<=30)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
goto l3;
}

//d
if((int)in==68||(int)in==100)
{
cleardevice();
l3bg();
x=x+1;
gotoxy(x,y);
cout<<"\2";
//cout<<x<<y;
if((x==7&&(y>=1&&y<=13))||(x==7&&(y>=16&&y<=30))||(y==13&&(x>=7&&x<=11))||(y==16&&(x>=7&&x<=11))||(x==11&&(y>=1&&y<=13))||(x==11&&(y>=16&&y<=30))||(x==23&&(y>=1&&y<=13))||(x==23&&(y>=17&&y<=30))||(x==67&&(y>=1&&y<=22))||(x==67&&(y>=26&&y<=30))||(x==24&&y!=15)||(x==25&&(y!=15&&y!=16))||(x==26&&y!=16)||(x==27&&(y!=16&&y!=17))||(x==28&&y!=17)||(x==29&&(y!=17&&y!=18))||(x==30&&y!=18)||(x==31&&(y!=18&&y!=19))||(x==32&&(y!=19))||(x==33&&(y!=19&&y!=20))||(x==34&&(y!=20))||(x==35&&(y!=20&&y!=21))||(x==36&&(y!=20&&y!=21))||(x==37&&(y!=20))||(x==38&&(y!=20&&y!=19))||(x==39&&(y!=19))||(x==40&&(y!=18&&y!=19))||(x==41&&(y!=18))||(x==42&&(y!=17&&y!=18))||(x==43&&(y!=18&&y!=19))||(x==44&&(y!=19))||(x==45&&(y!=19&&y!=20))||(x==46&&(y!=20))||(x==47&&(y!=20&&y!=21))||(x==48&&(y!=20&&y!=21))||(x==49&&(y!=21&&y!=20))||(x==50&&(y!=20))||(x==51&&(y!=20&&y!=19))||(x==52&&(y!=19))||(x==53&&(y!=18&&y!=19))||(x==54&&(y!=18))||(x==55&&(y!=18))||(x==56&&(y!=18&&y!=19))||(x==57&&(y!=19)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==58&&(y!=19&&y!=20))||(x==59&&(y!=20))||(x==60&&(y!=20&&y!=21))||(x==61&&(y!=21))||(x==62&&(y!=21&&y!=22))||(x==63&&(y!=22))||(x==64&&(y!=23&&y!=22))||(x==65&&(y!=23))||(x==66&&(y!=23&&y!=24))||(x==67&&(y!=24&&y!=23))||(x==15&&(y>=1&&y<=19))||(x==15&&(y>=22&&y<=30))||(y==19&&(x>=15&&x<=19))||(x==19&&(y>=1&&y<=19))||(y==22&&(x>=15&&x<=19))||(x==19&&(y>=22&&y<=30))||(x==71&&(y>=1&&y<=13))||(x==71&&(y>=15&&y<=30))||(y==13&&(x>=71&&x<=76))||(y==15&&(x>=71&&x<=76))||(x==76&&(y>=1&&y<=13))||(x==76&&(y>=15&&y<=30)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
goto l3;
}

//d
if((int)in==87||(int)in==119)
{
cleardevice();
l3bg();
y=y-1;
gotoxy(x,y);
cout<<"\2";
//cout<<x<<y;
if((x==7&&(y>=1&&y<=13))||(x==7&&(y>=16&&y<=30))||(y==13&&(x>=7&&x<=11))||(y==16&&(x>=7&&x<=11))||(x==11&&(y>=1&&y<=13))||(x==11&&(y>=16&&y<=30))||(x==23&&(y>=1&&y<=13))||(x==23&&(y>=17&&y<=30))||(x==67&&(y>=1&&y<=22))||(x==67&&(y>=26&&y<=30))||(x==24&&y!=15)||(x==25&&(y!=15&&y!=16))||(x==26&&y!=16)||(x==27&&(y!=16&&y!=17))||(x==28&&y!=17)||(x==29&&(y!=17&&y!=18))||(x==30&&y!=18)||(x==31&&(y!=18&&y!=19))||(x==32&&(y!=19))||(x==33&&(y!=19&&y!=20))||(x==34&&(y!=20))||(x==35&&(y!=20&&y!=21))||(x==36&&(y!=20&&y!=21))||(x==37&&(y!=20))||(x==38&&(y!=20&&y!=19))||(x==39&&(y!=19))||(x==40&&(y!=18&&y!=19))||(x==41&&(y!=18))||(x==42&&(y!=17&&y!=18))||(x==43&&(y!=18&&y!=19))||(x==44&&(y!=19))||(x==45&&(y!=19&&y!=20))||(x==46&&(y!=20))||(x==47&&(y!=20&&y!=21))||(x==48&&(y!=20&&y!=21))||(x==49&&(y!=21&&y!=20))||(x==50&&(y!=20))||(x==51&&(y!=20&&y!=19))||(x==52&&(y!=19))||(x==53&&(y!=18&&y!=19))||(x==54&&(y!=18))||(x==55&&(y!=18))||(x==56&&(y!=18&&y!=19))||(x==57&&(y!=19)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==58&&(y!=19&&y!=20))||(x==59&&(y!=20))||(x==60&&(y!=20&&y!=21))||(x==61&&(y!=21))||(x==62&&(y!=21&&y!=22))||(x==63&&(y!=22))||(x==64&&(y!=23&&y!=22))||(x==65&&(y!=23))||(x==66&&(y!=23&&y!=24))||(x==67&&(y!=24&&y!=23))||(x==15&&(y>=1&&y<=19))||(x==15&&(y>=22&&y<=30))||(y==19&&(x>=15&&x<=19))||(x==19&&(y>=1&&y<=19))||(y==22&&(x>=15&&x<=19))||(x==19&&(y>=22&&y<=30))||(x==71&&(y>=1&&y<=13))||(x==71&&(y>=15&&y<=30))||(y==13&&(x>=71&&x<=76))||(y==15&&(x>=71&&x<=76))||(x==76&&(y>=1&&y<=13))||(x==76&&(y>=15&&y<=30)))
{
delay(500);
gameover(j);
//delay(500);
x=2;y=15;
}
if((x==78||x==79)&&(y==3))
{
delay(500);
cleardevice();
delay(500);
cleardevice();
lf();
delay(1500);
cleardevice();
exit(1);
gotoxy(6,25);
x=6;
y=25;
j=2;
}
}
goto l3;

}



int main()
{
INTRO();
return 0;
}
