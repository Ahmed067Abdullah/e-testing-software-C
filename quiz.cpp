#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void high_line(void);
void high_bar(void);
void high_pie(void);
void high_scores(int);
void who_are_you(void);
void quiz(void);
void result_loading_line(void);
void view_and_edit_menu(void);
int easy_medium_hard(void);
int subject_choice(void);
void edit_view(int,int);
void HELP(void);
void view_search_score_page(void);
void background_window(void);
void view_all_scores(void);
void search_names(void);
void search_background(void);
void show_instant_search_result(int);
void search_result_enter(int j,int counter1,char p1[]);
void show_record(int a1);
void line_graph(int);
void bar_graph(int);
void pie_graph(int);
int password(void);
void cloud (void);
int quit_window (void);

struct question
{
 char quest[100];
 char optA[20];
 char optB[20];
 char optC[20];
 char optD[20];
 int  optR;
}q1;

struct student1
{
 char name[20];
 int rollno;
 int level;
 int total_score;
 int physics;
 int english;
 int GK;
 int math;
}s1;

struct student
{
 char name[20];
 int rollno;
 int level;
 int total_score;
 int physics;
 int english;
 int GK;
 int math;
}s2[8];


int main()
{
 clrscr();

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cloud();
int a=1,quit_flag,password_flag;

while (1)
{
cleardevice();
background_window();
 setcolor(MAGENTA);
settextstyle(BOLD_FONT,0,13);
for (int x=480; x<495; x++)
{
outtextxy(x,10,"Q");
}
settextstyle(TRIPLEX_FONT,0,3);
setcolor(0);
outtextxy(530,120,"U");
outtextxy(535,140,"I");
outtextxy(533,160,"Z");

setcolor(15);
settextstyle(SIMPLEX_FONT,0,3);
outtextxy(4,4,"Menu");
setfillstyle(SOLID_FILL,15);
 bar(0,420,650,480);
 setcolor(0); rectangle(0,420,650,480);rectangle(1,421,649,479);
settextstyle(SIMPLEX_FONT,0,1);
outtextxy(5,425,"-->Use arrow keys to navigate");
outtextxy(5,450,"-->Press [Enter] key to Proceed and [Esc] key to go back <- ");

settextstyle(BOLD_FONT,0,2);

/*__________________________________*/

if (a==1) {setcolor(4); circle(50,120,10); circle(50,120,9); setfillstyle(SOLID_FILL,0); bar(70,110,276,145); setcolor(15);outtextxy(75,100,"START QUIZ");outtextxy(76,100,"START QUIZ");  }
else {setfillstyle(SOLID_FILL,7); bar(40,110,280,150);setcolor(4);circle(30,120,10); circle(30,120,9); setcolor(0);outtextxy(55,100,"START QUIZ");outtextxy(56,100,"START QUIZ");}

if(a==2) {setcolor(4);circle(50,180,10); circle(50,180,9); setfillstyle(SOLID_FILL,0);bar(70,170,304,205);setcolor(15); outtextxy(75,160,"VIEW SCORES");outtextxy(76,160,"VIEW SCORES"); }
else {setfillstyle(SOLID_FILL,7); bar(40,170,305,210);setcolor(4);circle(30,180,10); circle(30,180,9);setcolor(0); outtextxy(55,160,"VIEW SCORES");outtextxy(56,160,"VIEW SCORES");}

 if (a==3) {setcolor(4);circle(50,240,10); circle(50,240,9); setfillstyle(SOLID_FILL,0);bar(70,229,346,264);setcolor(15); outtextxy(75,220,"EDIT QUESTIONS");outtextxy(76,220,"EDIT QUESTIONS");}
 else {setfillstyle(SOLID_FILL,7);bar(40,230,365,270);setcolor(4);circle(30,240,10); circle(30,240,9);setcolor(0); outtextxy(55,220,"EDIT QUESTIONS");outtextxy(56,220,"EDIT QUESTIONS");}

 if (a==4) {setcolor(4);circle(50,300,10); circle(50,300,9);setfillstyle(SOLID_FILL,0); bar(70,290,156,325);setcolor(15); outtextxy(75,280,"HELP");outtextxy(76,280,"HELP");}
 else {setfillstyle(SOLID_FILL,7); bar(40,290,177,330);setcolor(4);circle(30,300,10); circle(30,300,9);setcolor(0); outtextxy(55,280,"HELP");outtextxy(56,280,"HELP");}

 if (a==5) {setcolor(4);circle(50,360,10); circle(50,360,9);setfillstyle(SOLID_FILL,0); bar(70,350,153,384);setcolor(15); outtextxy(75,340,"QUIT");outtextxy(76,340,"QUIT");}
 else {setfillstyle(SOLID_FILL,7); bar(40,350,165,390);setcolor(4);circle(30,360,10); circle(30,360,9);setcolor(0); outtextxy(55,340,"QUIT");outtextxy(56,340,"QUIT");}

 char c;
 c=getch();
 if (c==80)
 {
  if (a==5){ a=1; continue;}
  else { a++; continue;}
   }

if (c==72)
{
 if (a==1) {a=5; continue;}
 else {a--; continue;}
}

if (c==13)
{
    if (a==1)
    {
	who_are_you();
	quiz();
	continue;
    }
    if (a==2){view_search_score_page(); continue;}

    else if (a==3) {password_flag= password(); if (password_flag==1) {view_and_edit_menu(); continue;} else continue; }
    else if (a==4) {HELP(); continue;}
     else if (a==5) {quit_flag=quit_window(); if (quit_flag==2){continue;} else break;     }
}

}

closegraph();
 return 0;
}

/*_______________________________________________CLOUD_________________________________________________________*/

void cloud(void)
{
    setfillstyle(SOLID_FILL,LIGHTBLUE);
 setcolor(LIGHTBLUE);
 fillellipse(300,200,60,80);
 fillellipse(300,140,110,80);
 fillellipse(170,200,120,80);
 fillellipse(430,190,120,80);
 fillellipse(190,300,110,90);
 fillellipse(290,340,120,70);
 fillellipse(420,280,110,70);

 settextstyle(BOLD_FONT,0,5);
 setcolor(BLACK);

 outtextxy(105,200,"E - TESTING");outtextxy(106,200,"E - TESTING");outtextxy(107,200,"E - TESTING");outtextxy(108,200,"E - TESTING");
 setcolor(15);
 rectangle(95,445,555,465);
 setfillstyle(SOLID_FILL,15);
 settextstyle(SIMPLEX_FONT,0,1);
 for (int b=100;b<551;b++)
 {
  if (b>=100 && b<=150) {outtextxy(270,415,"Loading Layout...");}
   else if (b>150 && b<200){ if(b==151) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Files...");}
   else if (b>200 && b<250){ if(b==201) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Questions...");}
   else if (b>250 && b<300){ if(b==251) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Student Record...");}
   else if (b>300 && b<350){ if(b==301) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Result...");}
   else if (b>350 && b<380){ if(b==351) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Bar Graph...");}
   else if (b>380 && b<410){ if(b==381) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Line Graph...");}
   else if (b>410 && b<440){ if(b==411) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Loading Pie Graph...");}
   else if (b>440 && b<550){ if(b==441) {setfillstyle(SOLID_FILL,0); bar(270,420,500,440);} setcolor(15); outtextxy(270,415,"Finalizing...");}
  setfillstyle(SOLID_FILL,15);
  bar(100,450,b,460);
  delay(10);
 }
}




/*____________________who are you _________________________*/

void who_are_you(void)
{
    int a=1; char e,u[10]; /*for getch()*/


while(1)
{
cleardevice();
background_window();


settextstyle(SIMPLEX_FONT,0,3); setcolor(15);
outtextxy(4,4,"Who are you?");
setcolor(0);
settextstyle(TRIPLEX_FONT,0,4);
outtextxy(30,90,"NAME :"); line(30,130,120,130); line(30,132,120,132);
outtextxy(30,160,"ROLL# :"); line(30,200,120,200);line(30,202,120,202);
outtextxy(30,230,"DIFFICULTY LEVEL :"); line(30,270,350,270); line(30,272,350,272);
outtextxy(50,280,"EASY");
outtextxy(200,280,"MEDIUM");
outtextxy(400,280,"HARD");
setcolor(0);
circle(30,300,6); circle(30,300,8); circle(180,300,6); circle(180,300,8);
circle(380,300,6); circle(380,300,8);
rectangle(150,160,300,205);rectangle(151,161,299,204); rectangle(150,90,400,135);rectangle(151,91,399,134);



if (a==1) { setfillstyle(SOLID_FILL,WHITE); bar(151,91,399,134); gotoxy(20,8); gets(s1.name); a++; continue; }
else { settextstyle(SIMPLEX_FONT,0,3); setcolor(15); outtextxy(155,92,s1.name); }

if (a==2) { setfillstyle(SOLID_FILL,WHITE); bar(151,161,299,204); gotoxy(20,12); fflush(stdin);scanf("%d",&s1.rollno); a++; continue;}
else {settextstyle(SIMPLEX_FONT,0,3);sprintf(u,"%d",s1.rollno);setcolor(15); outtextxy(155,162,u);}



if(a==3)
{
 int b=1;
 while(1)
 {

   if (b==1) { setcolor(0); rectangle(15,280,150,320); rectangle(13,278,152,322); setcolor(15); settextstyle(TRIPLEX_FONT,0,4);outtextxy(50,280,"EASY"); }
   else {setcolor(7);  rectangle(15,280,150,320); rectangle(13,278,152,322); setcolor(0); settextstyle(TRIPLEX_FONT,0,4);outtextxy(50,280,"EASY");}
   if (b==2) { setcolor(0); rectangle (160,278,350,322); rectangle(162,280,348,320); setcolor(15);settextstyle(TRIPLEX_FONT,0,4);outtextxy(200,280,"MEDIUM");}
   else{setcolor(7); rectangle (160,278,350,322); rectangle(162,280,348,320);setcolor(0);settextstyle(TRIPLEX_FONT,0,4);outtextxy(200,280,"MEDIUM"); }
   if (b==3) { setcolor(0); rectangle(360,278,500,322); rectangle(362,280,502,320);setcolor(15);settextstyle(TRIPLEX_FONT,0,4);outtextxy(400,280,"HARD");}
   else {setcolor(7); rectangle(360,278,500,322); rectangle(362,280,502,320); setcolor(0);settextstyle(TRIPLEX_FONT,0,4);outtextxy(400,280,"HARD");}


   e=getch();

   if (e==77)
   {
      if (b==3) { b=1; continue;}
      else { b++; continue;}
   }

   if (e==75)
   {
    if (b==1) { b=3; continue;}
    else { b--; continue; }
   }


   if (e==13) { s1.level=b; break;}

 }

}


if (e==13) break;

 }

}


/*_________________________QUIZ_________________________________*/

void quiz(void)
{
  /*_______________random numbers_______________________*/

int rand_num[20]={0},i=0,d,j,k,n=0,indicator=1,sub,r,answer,color,a=1;
char p[5],e[5],m[5],g[5],t[5];
int physics=0,english=0,GK=0,math=0;
time_t st, ed;
    int diff_t;


 srand( time(NULL)  );
 while(1)
 {
  d=rand() % 20;
  for( j=0;j<i;j++)
  {
   if (d==rand_num[j]) { indicator=0; break;}
   else indicator=1;
  }
  if (indicator==1) { rand_num[i]=d;}
  if (indicator==0) {continue;}
  if (i==19) {break;}
  i++;
}








/*____________________questions________________________________*/

    char c;
    FILE *fp;


 if (s1.level==1) {fp=fopen("easy.dat","rb+");}
 else if(s1.level==2){fp=fopen("medium.dat","rb+");}
 else if (s1.level==3) {fp=fopen("hard.dat","rb+");}



while(n<20)   /*BIG WHILE LOOP*/
{

  fseek(fp,182*rand_num[n],0);
  fread(&q1,sizeof(q1),1,fp);

cleardevice();
background_window();
setcolor(WHITE);
gotoxy(1,4); printf("Question :%d/20",n+1);
setfillstyle(SOLID_FILL,15);
bar(10,140,637,200); setcolor(0); rectangle(10,140,637,200);rectangle(11,141,636,199);
bar(200,220,450,260);  rectangle(200,220,450,260);rectangle(201,221,449,259);
bar(200,270,450,310); rectangle(200,270,450,310);rectangle(201,271,449,309);
bar(200,320,450,360); rectangle(200,320,450,360);rectangle(201,321,449,359);
bar(200,370,450,410); rectangle(200,370,450,410);rectangle(201,371,449,409);
settextstyle(TRIPLEX_FONT,0,0);
setcolor(WHITE);
 outtextxy(508,282,"A");
 outtextxy(578,282,"B");
 outtextxy(508,332,"C");
 outtextxy(578,332,"D");
circle(18,120,6); circle(18,120,8);

settextstyle(TRIPLEX_FONT,0,3);
setcolor(15);
outtextxy(4,4,"Quiz");
settextstyle(TRIPLEX_FONT,0,0);
setcolor(0);
outtextxy(30,100,"QUESTION :");
outtextxy(30,220,"OPTION A:");
outtextxy(30,270,"OPTION B:");
outtextxy(30,320,"OPTION C:");
outtextxy(30,370,"OPTION D:");
outtextxy(480,240,"ANSWER:");

setcolor(CYAN);
 settextstyle(SIMPLEX_FONT,0,2);
 outtextxy(15,142,q1.quest);outtextxy(16,142,q1.quest);
 outtextxy(205,221,q1.optA);outtextxy(206,221,q1.optA);
 outtextxy(205,271,q1.optB);outtextxy(206,271,q1.optB);
 outtextxy(205,321,q1.optC);outtextxy(206,321,q1.optC);
 outtextxy(205,371,q1.optD);outtextxy(206,371,q1.optD);

time(&st); /*timer start*/

 int g=1;
while(1)
{
 if (g==1) { setcolor(0);rectangle(500,280,550,320); rectangle(502,282,548,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");  }
 else { setcolor(7); rectangle(500,280,550,320); rectangle(502,282,548,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");}

if (g==2) { setcolor(0); rectangle(570,280,620,320);rectangle(572,282,618,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B"); }
 else { setcolor(7); rectangle(570,280,620,320);rectangle(572,282,618,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B");}

if (g==3) { setcolor(0);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C"); }
 else {setcolor(7);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C");}

 if (g==4) { setcolor(0); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D"); }
 else { setcolor(7); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D");}

 c=getch();


 if (c==77)
 {
  if (g==4) {g=1; continue;} else { g++; continue;}
 }

 if (c==75)
 {
  if (g==1) { g=4; continue;} else { g--; continue;}
  }

  if (c==13) { time(&ed); diff_t = difftime(ed, st); if (diff_t>15) {answer=5; break;} else {answer=g; break;} }

 }

 if (answer==q1.optR)
    {
      if (rand_num[n] >=0 && rand_num[n] <=4)
      {physics++;}
      else if (rand_num[n] >=5 && rand_num[n] <=9)
      {english++;}
      else if (rand_num[n] >=10 && rand_num[n] <=14)
      {GK++;}
      else if (rand_num[n] >=15 && rand_num[n] <=19)
      {math++;}

      /*draws correct cloud*/
 if(answer==q1.optR)
{ setfillstyle(SOLID_FILL,15);
 setcolor(WHITE);
 fillellipse(300,200,60,80);
 fillellipse(300,140,110,80);
 fillellipse(170,200,120,80);
 fillellipse(430,190,120,80);
 fillellipse(190,300,110,90);
 fillellipse(290,340,120,70);
 fillellipse(420,280,110,70);

 settextstyle(TRIPLEX_SCR_FONT,0,8);
 setcolor(GREEN);
 outtextxy(100,185,"CORRECT");
 outtextxy(101,185,"CORRECT");
 outtextxy(102,185,"CORRECT");
 outtextxy(103,185,"CORRECT");
 for(int i=348,j=250;i<360;i++,j++)
{arc(600,i,90,140,150);
 arc(465,j,0,100,20);}
 delay(400);    }
    /*end of correct cloud*/
}

/*time out cloud */
else if (answer==5)
{
    setfillstyle(SOLID_FILL,15);
 setcolor(WHITE);
 fillellipse(300,200,60,80);
 fillellipse(300,140,110,80);
 fillellipse(170,200,120,80);
 fillellipse(430,190,120,80);
 fillellipse(190,300,110,90);
 fillellipse(290,340,120,70);
 fillellipse(420,280,110,70);

 settextstyle(TRIPLEX_SCR_FONT,0,7);
 setcolor(RED);
 outtextxy(100,185,"TIME OUT :(");
 outtextxy(101,185,"TIME OUT :(");
 outtextxy(102,185,"TIME OUT :(");
 outtextxy(103,185,"TIME OUT :(");
delay(400);
}
/* Wrong cloud*/
else

{   setfillstyle(SOLID_FILL,WHITE);
 setcolor(WHITE);
 fillellipse(300,200,60,80);
 fillellipse(300,140,110,80);
 fillellipse(170,200,120,80);
 fillellipse(430,190,120,80);
 fillellipse(190,300,110,90);
 fillellipse(290,340,120,70);
 fillellipse(420,280,110,70);

 settextstyle(TRIPLEX_SCR_FONT,0,8);
 setcolor(RED);
for(int i=550,j=460;i>=535 ;i--,j--)
{line(j,200,i,270);
line(i,200,j,270);  }
for(i=155;i<159;i++)
 outtextxy(i,185,"WRONG");
 delay(400);
 }

   n++;

 } /*while loop ended*/

fclose(fp);

    s1.physics=physics;
    s1.english=english;
    s1.math=math;
    s1.GK=GK;
    s1.total_score=physics+math+GK+english;


/* ___________________result shown _________________________*/

sprintf(p,"%d/5",s1.physics);   /* storing whatever written in inverted
				       commas in strings
				       like p[5] or e[5] or etc... */
    sprintf(e,"%d/5",s1.english);
    sprintf(m,"%d/5",s1.math);
    sprintf(g,"%d/5",s1.GK);
    sprintf(t,"%d/20",s1.total_score);
 cleardevice();
background_window();
 while(1)
 {

 setcolor(0);
rectangle(40,110,240,150);rectangle(41,111,239,149);
rectangle(40,160,240,200);rectangle(41,161,239,199);
rectangle(40,210,240,250);rectangle(41,211,239,249);
rectangle(40,260,240,300);rectangle(41,261,239,299);
rectangle(40,310,240,350);rectangle(41,311,239,349);
rectangle(40,360,240,400);rectangle(41,361,239,399);

rectangle(380,110,550,150);rectangle(381,111,549,149);
rectangle(380,160,550,200); /*physics marks*/rectangle(381,161,549,199);
rectangle(380,210,550,250); /*math marks*/rectangle(381,211,549,249);
rectangle(380,260,550,300); /*english marks*/rectangle(381,261,549,299);
rectangle(380,310,550,350); /*gk marks*/rectangle(381,311,549,349);
rectangle(380,360,550,400); /*total marks*/rectangle(381,361,549,399);

settextstyle(SIMPLEX_FONT,0,3);
 setcolor(15);outtextxy(4,4,"Result");
 settextstyle(TRIPLEX_FONT,0,3);
 setcolor(CYAN);
 outtextxy(90,115,"SUBJECTS");
 outtextxy(420,115,"MARKS");
 if (a==1) { result_loading_line(); }
 if (s1.physics>3) {color=2;}  else if(s1.physics>=2 && s1.physics<=3) {color=14;}  else {color=4;}
 setcolor(color); outtextxy(50,165,"PHYSICS"); outtextxy(440,165,p); rectangle(40,160,240,200);rectangle(41,161,239,199);rectangle(380,160,550,200);rectangle(381,161,549,199);
 if (a==1) { a++; continue;}


 if (a==2) { result_loading_line(); }
 if (s1.math>3) {color=2;}  else if(s1.math>=2 && s1.math<=3)  {color=14;}  else {color=4;}
setcolor(color); outtextxy(50,215,"MATHS"); outtextxy(440,215,m); rectangle(40,210,240,250);rectangle(41,211,239,249);rectangle(381,211,549,249);rectangle(380,210,550,250);

 if(a==2) { a++; continue;}


 if (a==3) { result_loading_line(); }
 if (s1.english>3) {color=2;} else if(s1.english>=2 && s1.english<=3) {color=14;}  else {color=4;}
setcolor(color); outtextxy(50,265,"ENGLISH"); outtextxy(440,265,e);rectangle(40,260,240,300);rectangle(41,261,239,299);rectangle(381,261,549,299);rectangle(380,260,550,300);

 if(a==3) { a++; continue;}


if (a==4) { result_loading_line(); }
 if (s1.GK>3) {color=2;} else if(s1.GK>=2 && s1.GK<=3) {color=14;} else {color=4;}
setcolor(color); outtextxy(50,315,"G.KNOWLEDGE"); outtextxy(440,315,g);rectangle(40,310,240,350);rectangle(41,311,239,349);rectangle(381,311,549,349);rectangle(380,310,550,350);

 if(a==4) { a++; continue;}


if (a==5) { result_loading_line(); }
 if (s1.total_score>=14) {color=2;}else if(s1.total_score>=6 && s1.total_score<=13){color=14;}else {color=4;}
setcolor(color); outtextxy(50,365,"TOTAL"); outtextxy(440,365,t);rectangle(40,360,240,400);rectangle(41,361,239,399);rectangle(381,361,549,399);rectangle(380,360,550,400);

if(s1.total_score>18)
   outtextxy(100,415,"THATS WHAT WE CALL A 4 GPA STUDENT");
else if(s1.total_score<=18 && s1.total_score>=16)
  outtextxy(100,415,"HMMM, NICE TRY! KEEP IT UP");
else if(s1.total_score<=15 && s1.total_score>=12)
  outtextxy(100,415,"WE WERE EXPECTING MORE FROM YOU!");
else if(s1.total_score<12 && s1.total_score>=9)
  outtextxy(100,415,"YOU COULD HAVE DONE MUCH BETTER!");
else if(s1.total_score<9 && s1.total_score>=6)
{  settextstyle(TRIPLEX_FONT,0,2);
  outtextxy(50,415,"WRITE EACH QUESTON 100 TIMES AND SUBMIT TOMORROW");
}
else
  outtextxy(100,415,"HOW DID YOU GET ADMISSION IN NED?!");
break;
} /* result loop ended*/

/*_____________________ result loop ended________________*/


fp=fopen("estudent.dat","rb+");
int position;
indicator=0;
fseek(fp,SEEK_SET,0);

while(fread(&s2[7],sizeof(s2[7]),1,fp)==1)
{

    if (s1.rollno==s2[7].rollno&&s1.level==s2[7].level)
    {
	fseek(fp,-34,1);
	fwrite(&s1,sizeof(s1),1,fp); indicator=1;
        fseek(fp,34,1);
    }
}
if (indicator==0)
{
fseek(fp,SEEK_SET,2);
fwrite(&s1,sizeof(s1),1,fp);}


 getch();
 fclose(fp);
}



/*_____________________result loading line______________________*/

void result_loading_line(void)
 {
  setcolor(0);
  settextstyle(SMALL_FONT,0,5);
  outtextxy(250,420,"CALCULATING...");
  setfillstyle(SOLID_FILL,0);
  for( int o=200; o<401; o++)
  { bar(200,460,o,470);
    if (o>280 && o<330) { delay(30);}
    else {delay(10);}
  }
  setfillstyle(SOLID_FILL,7);
    bar(200,460,400,470);
    bar(250,420,350,440);

    settextstyle(TRIPLEX_FONT,0,3);
     }



/*_________________________________easy medium hard_____________________________*/

int easy_medium_hard(void)
{
    int a=1;
while (1)
{
cleardevice();
background_window();
setcolor(WHITE);

settextstyle(SIMPLEX_FONT,0,3);
setcolor(15);
outtextxy(4,4,"Difficulty Levels");
settextstyle(BOLD_FONT,0,2);


if (a==1) { setcolor(4);circle(50,125,10); circle(50,125,9);  setfillstyle(SOLID_FILL,0);bar(70,110,180,155); setcolor(15);outtextxy(75,105,"EASY");outtextxy(76,105,"EASY");  }
else {setfillstyle(SOLID_FILL,7);bar(40,110,180,155); setcolor(4);circle(30,125,10); circle(30,125,9); setcolor(0); outtextxy(55,105,"EASY");outtextxy(56,105,"EASY");}

if(a==2) {setcolor(4);circle(50,205,10); circle(50,205,9); setfillstyle(SOLID_FILL,0);bar(70,190,220,235); setcolor(15);outtextxy(75,185,"MEDIUM");outtextxy(76,185,"MEDIUM"); }
else {setfillstyle(SOLID_FILL,7);bar(40,190,220,235);setcolor(4);circle(30,205,10); circle(30,205,9); setcolor(0);outtextxy(55,185,"MEDIUM");outtextxy(56,185,"MEDIUM");}

 if (a==3) {setcolor(4);circle(50,285,10); circle(50,285,9);setfillstyle(SOLID_FILL,0); bar(70,270,180,315); setcolor(15);outtextxy(75,265,"HARD");outtextxy(76,265,"HARD");}
 else {setfillstyle(SOLID_FILL,7);bar(40,270,180,315);setcolor(4);circle(30,285,10); circle(30,285,9); setcolor(0);outtextxy(55,265,"HARD");outtextxy(56,265,"HARD");}

 if (a==4) {setcolor(4);circle(50,365,10); circle(50,365,9); setfillstyle(SOLID_FILL,0);bar(70,350,180,395); setcolor(15); outtextxy(75,345,"BACK");outtextxy(76,345,"BACK");}
 else {setfillstyle(SOLID_FILL,7);bar(40,350,180,395);setcolor(4);circle(30,365,10); circle(30,365,9); setcolor(0);outtextxy(55,345,"BACK");outtextxy(56,345,"BACK");}


char c; c=getch();
 if (c==80)
 {
  if (a==4){ a=1; continue;}
  else { a++; continue;}
   }

if (c==72)
{
 if (a==1) {a=4; continue;}
 else {a--; continue;}
}

if (c==13) { break; }

}

return a;

}

/*_______________________________________________*/

int subject_choice(void)
{
    int a=1;
while (1)
{
cleardevice();
background_window();
settextstyle(SIMPLEX_FONT,0,3);
setcolor(15);
outtextxy(4,4,"Subjects");





settextstyle(BOLD_FONT,0,1);



if (a==1) { setcolor(4); circle(50,130,7); circle(50,130,6);  setfillstyle(SOLID_FILL,BLACK); bar(70,113,200,145);  setcolor(15); outtextxy(75,105,"PHYSICS");outtextxy(76,105,"PHYSICS");  }
else {setfillstyle(SOLID_FILL,7);bar(40,113,200,145);setcolor(4); circle(30,130,7); circle(30,130,6);setcolor(0); outtextxy(55,105,"PHYSICS");outtextxy(56,105,"PHYSICS");}

if(a==2) {setcolor(4);circle(50,190,7); circle(50,190,6); setfillstyle(SOLID_FILL,0);bar(70,173,200,205);setcolor(15); outtextxy(75,165,"ENGLISH");outtextxy(76,165,"ENGLISH"); }
else {setfillstyle(SOLID_FILL,7);bar(40,173,200,205);setcolor(4);circle(30,190,7); circle(30,190,6);setcolor(0); outtextxy(55,165,"ENGLISH");outtextxy(56,165,"ENGLISH");}

 if (a==3) {setcolor(4);circle(50,250,7); circle(50,250,6); setfillstyle(SOLID_FILL,0);bar(70,233,400,265);setcolor(15); outtextxy(75,225,"GENERAL KNOWLEDGE");outtextxy(76,225,"GENERAL KNOWLEDGE");}
 else {setfillstyle(SOLID_FILL,7);bar(40,233,400,265);setcolor(4);circle(30,250,7); circle(30,250,6);setcolor(0); outtextxy(55,225,"GENERAL KNOWLEDGE");outtextxy(56,225,"GENERAL KNOWLEDGE");}

 if (a==4) {setcolor(4);circle(50,310,7); circle(50,310,6);setfillstyle(SOLID_FILL,0); bar(70,293,160,325);setcolor(15); outtextxy(75,285,"MATH");outtextxy(76,285,"MATH");}
 else {setfillstyle(SOLID_FILL,7);bar(40,293,160,325);setcolor(4);circle(30,310,7); circle(30,310,6);setcolor(0); outtextxy(55,285,"MATH");outtextxy(56,285,"MATH");}


 if (a==5) {setcolor(4);circle(50,370,7); circle(50,370,6);setfillstyle(SOLID_FILL,0); bar(70,353,150,385);setcolor(15); outtextxy(75,345,"BACK");outtextxy(76,345,"BACK");}
 else {setfillstyle(SOLID_FILL,7);bar(40,353,150,385);setcolor(4);circle(30,370,7); circle(30,370,6);setcolor(0); outtextxy(55,345,"BACK");outtextxy(56,345,"BACK");}


 char c; c=getch();
 if (c==80)
 {
  if (a==5){ a=1; continue;}
  else { a++; continue;}
   }

if (c==72)
{
 if (a==1) {a=5; continue;}
 else {a--; continue;}
}

if (c==13) { break; }
}
return a;

}


/*___________________________________________________________*/

void edit_view(int lev, int sub)
{
    int i=0,b=1,r;
    char c;
    FILE *fp;


 if (lev==1) {fp=fopen("easy.dat","rb+");}
 else if(lev==2){fp=fopen("medium.dat","rb+");}
 else if (lev==3) {fp=fopen("hard.dat","rb+");}

 if (sub==1) {r=0;}
 else if(sub==2)  {r=5;}
 else if(sub==3)  {r=10;}
 else if(sub==4)  {r=15;}

while(1)   /*BIG WHILE LOOP*/
{

  fseek(fp,182*(r+i),0);
  fread(&q1,sizeof(q1),1,fp);

cleardevice();
setcolor(WHITE);

background_window();

setfillstyle(SOLID_FILL,15);
bar(10,140,637,200); setcolor(0); rectangle(10,140,637,200);rectangle(11,141,636,199);
bar(200,220,450,260);  rectangle(200,220,450,260);rectangle(201,221,449,259);
bar(200,270,450,310); rectangle(200,270,450,310);rectangle(201,271,449,309);
bar(200,320,450,360); rectangle(200,320,450,360);rectangle(201,321,449,359);
bar(200,370,450,410); rectangle(200,370,450,410);rectangle(201,371,449,409);

setcolor(WHITE);
settextstyle(SIMPLEX_FONT,0,3);
outtextxy(4,4,"View");

circle(18,120,6); circle(18,120,8);

setcolor(0);
settextstyle(TRIPLEX_SCR_FONT,0,4);
outtextxy(30,100,"QUESTION :");
outtextxy(30,220,"OPTION A:");
outtextxy(30,270,"OPTION B:");
outtextxy(30,320,"OPTION C:");
outtextxy(30,370,"OPTION D:");
outtextxy(480,240,"ANSWER:");
setcolor(3);
 settextstyle(SIMPLEX_FONT,0,2);
 outtextxy(14,142,q1.quest);outtextxy(15,142,q1.quest);
 outtextxy(203,221,q1.optA);outtextxy(204,221,q1.optA);
 outtextxy(203,271,q1.optB);outtextxy(204,271,q1.optB);
 outtextxy(203,321,q1.optC);outtextxy(204,321,q1.optC);
 outtextxy(203,371,q1.optD);outtextxy(204,371,q1.optD);


 if (q1.optR==1) { setcolor(0);rectangle(500,280,550,320); rectangle(502,282,548,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");  }
 else { setcolor(7); rectangle(500,280,550,320); rectangle(502,282,548,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");}

if (q1.optR==2) { setcolor(0); rectangle(570,280,620,320);rectangle(572,282,618,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B"); }
 else { setcolor(7); rectangle(570,280,620,320);rectangle(572,282,618,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B");}

if (q1.optR==3) { setcolor(0);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C"); }
 else {setcolor(7);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C");}

 if (q1.optR==4) { setcolor(0); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D"); }
 else { setcolor(7); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D");}

  setcolor(0);
  settextstyle(TRIPLEX_FONT,0,5);
 outtextxy(65,428,"NEXT");  outtextxy(265,428,"EDIT"); outtextxy(465,428,"BACK");


 while(1)
 {


 if (b==1) { setcolor(0);rectangle(50,430,180,475); rectangle(52,432,178,473); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,5); outtextxy(65,428,"NEXT"); }
 else { setcolor(7); rectangle(50,430,180,475); rectangle(52,432,178,473);setcolor(0); settextstyle(TRIPLEX_FONT,0,5); outtextxy(65,428,"NEXT");}

if (b==2) { setcolor(0); rectangle(250,430,380,475);rectangle(252,432,378,473); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,5); outtextxy(265,428,"EDIT"); }
 else { setcolor(7); rectangle(250,430,380,475);rectangle(252,432,378,473);setcolor(0); settextstyle(TRIPLEX_FONT,0,5); outtextxy(265,428,"EDIT");}

if (b==3) { setcolor(0);rectangle(450,430,580,475); rectangle(452,432,578,473); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,5); outtextxy(465,428,"BACK"); }
 else {setcolor(7);rectangle(450,430,580,475); rectangle(452,432,578,473); setcolor(0); settextstyle(TRIPLEX_FONT,0,5); outtextxy(465,428,"BACK");}
  fflush(stdin);
  c=getch();
  if (c==77)
 {
  if (b==3) {b=1; continue;} else { b++; continue;}
 }

 if (c==75)
 {
  if (b==1) { b=3; continue;} else { b--; continue;}
  }

  if (c==13)
      {
	if (b==1 || b==3) {break;}

 if (b==2)

	{
	 int a=1;
	 while(1)
	 {
	  cleardevice();
	background_window();
setfillstyle(SOLID_FILL,15);
bar(10,140,637,200); setcolor(0); rectangle(10,140,637,200);rectangle(11,141,636,199);
bar(200,220,450,260);  rectangle(200,220,450,260);rectangle(201,221,449,259);
bar(200,270,450,310); rectangle(200,270,450,310);rectangle(201,271,449,309);
bar(200,320,450,360); rectangle(200,320,450,360);rectangle(201,321,449,359);
bar(200,370,450,410); rectangle(200,370,450,410);rectangle(201,371,449,409);

setcolor(WHITE);
settextstyle(SIMPLEX_FONT,0,3);
outtextxy(4,4,"Edit");

circle(18,120,6); circle(18,120,8);


setcolor(0);

settextstyle(TRIPLEX_FONT,0,4);
outtextxy(30,100,"ENTER THE QUESTION :");
outtextxy(30,220,"OPTION A:");
outtextxy(30,270,"OPTION B:");
outtextxy(30,320,"OPTION C:");
outtextxy(30,370,"OPTION D:");
outtextxy(480,240,"ANSWER:");



if (a==1) {setfillstyle(SOLID_FILL,15);bar(10,140,637,200); gotoxy(3,10); gets(q1.quest); a++; continue; }
else { settextstyle(SIMPLEX_FONT,0,2); setcolor(CYAN); outtextxy(12,142,q1.quest);outtextxy(13,142,q1.quest);}

if (a==2) { setfillstyle(SOLID_FILL,15);bar(200,220,450,260); gotoxy(27,15); gets(q1.optA); a++; continue;}
else { settextstyle(SIMPLEX_FONT,0,2); setcolor(CYAN);outtextxy(203,221,q1.optA);outtextxy(204,221,q1.optA); }

if (a==3) {setfillstyle(SOLID_FILL,15); bar(200,270,450,310);  gotoxy(27,18); gets(q1.optB); a++; continue;}
else { settextstyle(SIMPLEX_FONT,0,2); setcolor(CYAN);outtextxy(203,271,q1.optB);outtextxy(204,271,q1.optB); }

if (a==4) {setfillstyle(SOLID_FILL,15); bar(200,320,450,360);  gotoxy(27,22); gets(q1.optC); a++; continue;}
else { settextstyle(SIMPLEX_FONT,0,2);setcolor(CYAN); outtextxy(203,321,q1.optC);outtextxy(204,321,q1.optC); }

if (a==5) {setfillstyle(SOLID_FILL,15); bar(200,370,450,410);  gotoxy(27,25); gets(q1.optD); a++; continue;}
else { settextstyle(SIMPLEX_FONT,0,2);setcolor(CYAN); outtextxy(203,371,q1.optD);outtextxy(204,371,q1.optD); }



int g=1;
while(1)
{
 if (g==1) { setcolor(0);rectangle(500,280,550,320); rectangle(502,282,548,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");  }
 else { setcolor(7); rectangle(500,280,550,320); rectangle(502,282,548,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,282,"A");}

if (g==2) { setcolor(0); rectangle(570,280,620,320);rectangle(572,282,618,318); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B"); }
 else { setcolor(7); rectangle(570,280,620,320);rectangle(572,282,618,318);setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,282,"B");}

if (g==3) { setcolor(0);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C"); }
 else {setcolor(7);rectangle(500,330,550,370); rectangle(502,332,548,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(508,332,"C");}

 if (g==4) { setcolor(0); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(GREEN); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D"); }
 else { setcolor(7); rectangle(570,330,620,370);rectangle(572,332,618,368); setcolor(RED); settextstyle(TRIPLEX_FONT,0,4); outtextxy(578,332,"D");}

 c=getch();

 if (c==77)
 {
  if (g==4) {g=1; continue;} else { g++; continue;}
 }

 if (c==75)
 {
  if (g==1) { g=4; continue;} else { g--; continue;}
  }

  if (c==13) { q1.optR=g; break;}

 }


    getch();
    break;

 } /*while loop ended*/

 fseek(fp,182*(r+i),0);
 fwrite(&q1,sizeof(q1),1,fp);
 i--;
 break;
	}/*if b==2 loop ended in if c==13 loop */


	   } /* if (c==13) loop ended*/



 }  /* SMALL LOOP TERMINATE*/
 if (b==3) {break;}
 if (i==4) {i= -1;}
 i++;
}/*BIG while termin.*/

 fclose(fp);

}

/*______________________view and edit menu______________________________________*/

void view_and_edit_menu(void)
{
    int level,subject;
    int a=1;
    while (1)
{
cleardevice();
background_window();
setcolor(WHITE);

settextstyle(SIMPLEX_FONT,0,3);
setcolor(15);
outtextxy(4,4,"View and Edit Menu");
settextstyle(BOLD_FONT,0,2);

/*__________________________________*/

if (a==1) {setcolor(4); circle(50,170,10); circle(50,170,9); setfillstyle(SOLID_FILL,0); bar(70,150,390,195);setcolor(15); outtextxy(75,145,"VIEW AND EDIT");outtextxy(76,145,"VIEW AND EDIT");  }
else {setfillstyle(SOLID_FILL,7); bar(40,150,390,195);setcolor(4);circle(30,170,10); circle(30,170,9);setcolor(0); outtextxy(55,145,"VIEW AND EDIT");outtextxy(56,145,"VIEW AND EDIT");}



 if (a==2) {setcolor(4);circle(50,280,10); circle(50,280,9); setfillstyle(SOLID_FILL,0);bar(70,260,190,300);setcolor(15); outtextxy(75,255,"BACK");outtextxy(76,255,"BACK");}
 else {setfillstyle(SOLID_FILL,7);bar(40,260,190,300);setcolor(4);circle(30,280,10); circle(30,280,9); setcolor(0);outtextxy(55,255,"BACK");outtextxy(56,255,"BACK");}


 char c; c=getch();
 if (c==80)
 {
  if (a==2){ a=1; continue;}
  else { a++; continue;}
   }

if (c==72)
{
 if (a==1) {a=2; continue;}
 else {a--; continue;}
}

if (c==13)
 {
	if (a==2) {break;}
	else if(a==1)
	{
          level=easy_medium_hard();
          if (level==4) {continue;}
	  subject=subject_choice();
	  if (subject==5) {continue;}
	  edit_view(level,subject);


        }






}  /*c==13 ended*/




} /*while loop ended */


}

/*________________________________HELP_________________________________*/

void HELP(void)
{
    cleardevice();
   background_window();

 setcolor(15);
 settextstyle(SIMPLEX_FONT,0,3);
 outtextxy(4,4,"Instructions");
 setfillstyle(SOLID_FILL,15);
  bar(5,75,595,420);
  setcolor(0); rectangle(5,75,595,420);rectangle(7,77,593,418);
 settextstyle(TRIPLEX_SCR_FONT,0,3);
 outtextxy(30,90,"--> You have 15 seconds for each question.");
 outtextxy(30,120,"--> Each question carries 1 mark.");
 outtextxy(30,150,"--> You have to attempt 20 questions.");
 outtextxy(30,180,"--> Total test time = 5 minutes.");
 outtextxy(30,210,"--> Subjects:  1) Math");
 outtextxy(30,240,"              2) Physics ");
 outtextxy(30,270,"              3) English");
 outtextxy(30,300,"              4) General Knowledge");
 outtextxy(30,330,"--> Once you pass the question, you willn't");
 outtextxy(30,360,"    return to the previous one.");

 getch();
}

/*___________________________VIEW AND SEARCH SCORES PAGE____________________*/

void view_search_score_page(void)
{
    int a=1;

    while(1)
{
    cleardevice();
    background_window();
setcolor(WHITE);
/*rectangle(0,70,600,420);
rectangle(5,75,595,415); */


settextstyle(SIMPLEX_FONT,0,3);
setcolor(15);
outtextxy(5,4,"Scores Menu");
settextstyle(BOLD_FONT,0,3);

/*__________________________________*/

if (a==1) { setfillstyle(SOLID_FILL,7);bar(10,55,425,115);setcolor(RED); circle(50,80,10); circle(50,80,9); setfillstyle(SOLID_FILL,0); bar(70,65,417,105);setcolor(15); outtextxy(75,55,"VIEW ALL SCORES");outtextxy(76,55,"VIEW ALL SCORES");  }
else { setfillstyle(SOLID_FILL,7);bar(10,50,425,120);setcolor(RED);circle(30,80,10); circle(30,80,9);setcolor(0); outtextxy(55,55,"VIEW ALL SCORES");outtextxy(56,55,"VIEW ALL SCORES");}


if (a==2) { setfillstyle(SOLID_FILL,7);bar(10,155,425,200);setcolor(RED); circle(50,180,10); circle(50,180,9); setfillstyle(SOLID_FILL,0); bar(70,165,404,208);setcolor(15); outtextxy(75,155,"SEARCH BY NAME");outtextxy(76,155,"SEARCH BY NAME");  }
else { setfillstyle(SOLID_FILL,7);bar(10,155,425,210);setcolor(RED);circle(30,180,10); circle(30,180,9);setcolor(0); outtextxy(55,155,"SEARCH BY NAME");outtextxy(56,155,"SEARCH BY NAME");}



 if (a==3) {setfillstyle(SOLID_FILL,7);bar(10,260,425,310);setcolor(RED);circle(50,280,10); circle(50,280,9);setfillstyle(SOLID_FILL,0); bar(70,265,310,308);setcolor(15); outtextxy(75,255,"HIGH SCORES");outtextxy(76,255,"HIGH SCORES");}
 else {setfillstyle(SOLID_FILL,7);bar(10,260,425,315);setcolor(RED);circle(30,280,10); circle(30,280,9); setcolor(0);outtextxy(55,255,"HIGH SCORES");outtextxy(56,255,"HIGH SCORES");}

   if (a==4) {setfillstyle(SOLID_FILL,7);bar(10,365,190,410);setcolor(RED);circle(50,380,10); circle(50,380,9);setfillstyle(SOLID_FILL,0); bar(70,365,180,405);setcolor(15); outtextxy(75,355,"BACK");outtextxy(76,355,"BACK");}
 else {setfillstyle(SOLID_FILL,7);bar(10,350,185,425);setcolor(RED);circle(30,380,10); circle(30,380,9); setcolor(0);outtextxy(55,355,"BACK");outtextxy(56,355,"BACK");}




 char c; c=getch();
 if (c==80)
 {
  if (a==4){ a=1; continue;}
  else { a++; continue;}
   }

if (c==72)
{
 if (a==1) {a=4; continue;}
 else {a--; continue;}
}

if (c==13) {

		if (a==1){view_all_scores(); continue;}
		else if(a==2){search_names(); continue;}
		else if (a==3){c=easy_medium_hard(); high_scores(c);}
		else if (a==4){break;}
	    }
}


}

/*_______________background window_______________*/
void background_window(void)
{
    setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(0,10,700,500);
 setfillstyle(SOLID_FILL,BLUE);bar(0,10,700,35);
 setcolor(15);
rectangle(596,17,609,30); line(596,18,609,18);
line(590,10,590,36); line(565,10,565,36);
setfillstyle(SOLID_FILL,RED);bar(615,10,640,36);rectangle(565,10,640,36);
 line(615,10,615,36);
 line(622,17,635,30); line(623,17,636,30);
line(622,30,636,17); line(623,30,637,17);
line(570,20,585,20); line(570,21,585,21);


}

/*_____________VIEW ALL SCORES____________*/

void view_all_scores(void)
{
    FILE *fp;
 fp=fopen("ESTUDENT.DAT","rb+");

 int i=0,a=1,o=6;
 char r[5],l[7],s[5],c;

 fseek(fp,SEEK_SET,0);
 while (i<7)
 {
  fread(&s2[i],sizeof(s2[i]),1,fp);
  i++;
 }




 while(1)
 {

  cleardevice();
  background_window();
settextstyle(TRIPLEX_SCR_FONT,0,3.8);
setcolor(0);
outtextxy(10,77,"ROLL NO.");
outtextxy(220,77,"NAME");
outtextxy(420,77,"LEVEL");
outtextxy(540,77,"SCORE");
line(3,112,627,112); line(3,110,627,110);
settextstyle(BOLD_FONT,0,3);
setcolor(15);


settextstyle(SIMPLEX_FONT,0,3);
 outtextxy(4,5,"View All Scores");

setcolor(15);


for( i=0;i<7;i++)

{
   settextstyle(DEFAULT_FONT,0,2);
   sprintf(r,"%d",s2[i].rollno);
   if (s2[i].level==1) {sprintf(l,"EASY");} else if (s2[i].level==2) {sprintf(l,"MEDIUM");} else if (s2[i].level==3) {sprintf(l,"HARD");}
   sprintf(s,"%d",s2[i].total_score);
   int ryg;
   if(s2[i].total_score>13){ryg=2;} else if(s2[i].total_score>=6 && s2[i].total_score<=13){ryg=14;}  else {ryg=4;}
   setcolor(15);
       if (i==0)  {if (a==1){setfillstyle(1,15);bar(3,120,627,150); setcolor(0);}else{setfillstyle(1,7);bar(5,130,620,160); setcolor(ryg);} outtextxy(10,130,r); outtextxy(120,130,s2[i].name); outtextxy(430,130,l); outtextxy(570,130,s);}
  else if (i==1) {if (a==2){setfillstyle(1,15);bar(3,160,627,190); setcolor(0);}else{setfillstyle(1,7);bar(5,170,620,200); setcolor(ryg);} outtextxy(10,170,r); outtextxy(120,170,s2[i].name); outtextxy(430,170,l); outtextxy(570,170,s);}
  else if (i==2) {if (a==3) {setfillstyle(1,15);bar(3,200,627,230); setcolor(0);}else{setfillstyle(1,7);bar(5,210,620,240); setcolor(ryg);}  outtextxy(10,210,r); outtextxy(120,210,s2[i].name); outtextxy(430,210,l); outtextxy(570,210,s); }
  else if (i==3) {if (a==4) {setfillstyle(1,15);bar(3,240,627,270); setcolor(0);}else{setfillstyle(1,7);bar(5,250,620,280); setcolor(ryg);}  outtextxy(10,250,r); outtextxy(120,250,s2[i].name); outtextxy(430,250,l); outtextxy(570,250,s); }
  else if (i==4) {if (a==5) {setfillstyle(1,15);bar(3,280,627,310); setcolor(0);}else{setfillstyle(1,7);bar(5,290,620,320); setcolor(ryg);}  outtextxy(10,290,r); outtextxy(120,290,s2[i].name); outtextxy(430,290,l); outtextxy(570,290,s); }
  else if (i==5) {if (a==6) {setfillstyle(1,15);bar(3,320,627,350); setcolor(0);}else{setfillstyle(1,7);bar(5,330,620,360); setcolor(ryg);}  outtextxy(10,330,r); outtextxy(120,330,s2[i].name); outtextxy(430,330,l); outtextxy(570,330,s); }
  else if (i==6) {if (a==7) {setfillstyle(1,15);bar(3,360,627,390); setcolor(0);}else{setfillstyle(1,7);bar(5,370,620,400); setcolor(ryg);}  outtextxy(10,370,r); outtextxy(120,370,s2[i].name); outtextxy(430,370,l); outtextxy(570,370,s); }


 }
 fflush(stdin);
 c=getch();

  if (c==80)
 {
  if (a==7){ s2[0]=s2[1]; s2[1]=s2[2]; s2[2]=s2[3]; s2[3]=s2[4]; s2[4]=s2[5]; s2[5]=s2[6]; o++; fseek(fp,34*o,0); fread(&s2[6],sizeof(s2[6]),1,fp); setcolor(0); line(200,410,220,410); line(200,410,210,420); line(210,420,220,410); delay(50); setfillstyle(1,0); bar(200,410,220,420); if (fread(&s2[6],sizeof(s2[6]),1,fp)==0) {c=72; a=1;} else continue; }
  else { a++; continue;}
   }
if (c==72)
 {
 if (a==1) { if (fread(&s2[6],sizeof(s2[6]),1,fp)==0) {a=7;} else{setcolor(0);line(200,126,220,126); line(200,126,210,115); line(210,115,220,126); delay(50); setfillstyle(1,0); bar(200,126,220,115);}  if(o==6){continue;} s2[6]=s2[5]; s2[5]=s2[4]; s2[4]=s2[3]; s2[3]=s2[2]; s2[2]=s2[1]; s2[1]=s2[0];   rewind(fp); fseek(fp,34*(o-7),0); fread(&s2[0],sizeof(s2[0]),1,fp); o--;   continue;}
 else {a--; continue;}
}
if (c==13) {show_record(a); continue;}
 if (c==27){break;}
}



fclose(fp);
}


/*_______________________________SEARCH NAMES__________________*/

void search_names(void)
{

int l=0,counter=0,z=0,i=0;
char *c="",p[25]={NULL},q[20]={NULL},w[10]={NULL};

 FILE *fp;
 fp=fopen("ESTUDENT.DAT","rb+");

search_background();
 while(1)
 {


  setcolor(15);
  settextstyle(SIMPLEX_FONT,0,3);
  outtextxy(4,4,"Search names");
  settextstyle(TRIPLEX_SCR_FONT,0,2);
  outtextxy(15,40,"SEARCH :");
  rectangle(120,38,345,70);
  if (l==0) {setcolor(CYAN); settextstyle(SIMPLEX_FONT,0,2); outtextxy(125,35,"Enter the name here");}
if (*c==13) {settextstyle(SIMPLEX_FONT,0,2);setcolor(0); outtextxy(125,35,p);}

  fflush(stdin);
  *c=getch();
   if (*c==27){break;}
  if (*c==13) {search_result_enter(i,counter,p); continue;}
  else if (*c==8) {l=strlen(p); if (l==0) {continue;} else {p[l-1]='\0';} }
  else if ((*c>='A' && *c<='Z') || (*c>='a' && *c<='z') || *c==32) {p[z]=*c;}
  i=0,counter=0;

  search_background();
  settextstyle(SIMPLEX_FONT,0,2);setcolor(0); outtextxy(125,35,p);
  l=strlen(p);
  fseek(fp,SEEK_SET,0);
  while(feof(fp)==0)
  {
   fread(&s2[7],sizeof(s2[7]),1,fp);
   strcpy(q,s2[7].name); strcpy(w,p);
   strlwr(q); strlwr(w);

   if ( strncmp(q,w,l)==0 )
   {
      if (i<7) {s2[i]=s2[7]; i++; }
       counter++;
   }
  }
  show_instant_search_result(i);

  if (*c==8) {z--;} else z++;
 }


}

/*_____________________________SEARCH BACKGROUND______________________*/

void search_background(void)
{
    cleardevice();
  setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(0,10,700,500);
 setfillstyle(SOLID_FILL,BLUE);bar(0,10,700,35);
 setcolor(15);
rectangle(596,17,609,30); line(596,18,609,18);
line(590,10,590,36); line(565,10,565,36);
setfillstyle(SOLID_FILL,RED);bar(615,10,640,36);rectangle(565,10,640,36);
 line(615,10,615,36);
 line(622,17,635,30); line(623,17,636,30);
line(622,30,636,17); line(623,30,637,17);
line(570,20,585,20); line(570,21,585,21);
settextstyle(TRIPLEX_SCR_FONT,0,3.8);
setcolor(0);
outtextxy(10,77,"ROLL NO.");
outtextxy(220,77,"NAME");
outtextxy(420,77,"LEVEL");
outtextxy(540,77,"SCORE");
line(3,112,627,112); line(3,110,627,110);
settextstyle(BOLD_FONT,0,3);
setcolor(15);

}

/*__________________________SHOW INSTANT RESULT_____________________________*/

void show_instant_search_result(int j)
{
  int i;
settextstyle(DEFAULT_FONT,0,2);
 char r[5],l[7],s[5];
 for( i=0;i<j;i++)

{

   sprintf(r,"%d",s2[i].rollno);
   if (s2[i].level==1) {sprintf(l,"EASY");} else if (s2[i].level==2) {sprintf(l,"MEDIUM");} else if (s2[i].level==3) {sprintf(l,"HARD");}
   sprintf(s,"%d",s2[i].total_score);
   int ryg;
   if(s2[i].total_score>13){ryg=2;} else if(s2[i].total_score>=6 && s2[i].total_score<=13){ryg=14;}  else {ryg=4;}
   setcolor(15);
       if (i==0)  { setcolor(ryg); outtextxy(10,130,r); outtextxy(130,130,s2[i].name); outtextxy(430,130,l); outtextxy(570,130,s);}
  else if (i==1) { setcolor(ryg); outtextxy(10,170,r); outtextxy(130,170,s2[i].name); outtextxy(430,170,l); outtextxy(570,170,s);}
  else if (i==2) { setcolor(ryg);  outtextxy(10,210,r); outtextxy(130,210,s2[i].name); outtextxy(430,210,l); outtextxy(570,210,s); }
  else if (i==3) { setcolor(ryg);  outtextxy(10,250,r); outtextxy(130,250,s2[i].name); outtextxy(430,250,l); outtextxy(570,250,s); }
  else if (i==4) { setcolor(ryg);  outtextxy(10,290,r); outtextxy(130,290,s2[i].name); outtextxy(430,290,l); outtextxy(570,290,s); }
  else if (i==5) { setcolor(ryg);  outtextxy(10,330,r); outtextxy(130,330,s2[i].name); outtextxy(430,330,l); outtextxy(570,330,s); }
  else if (i==6) { setcolor(ryg);  outtextxy(10,370,r); outtextxy(130,370,s2[i].name); outtextxy(430,370,l); outtextxy(570,370,s); }


 }

}

/*_______________________________Search result after Enter__________________*/

void search_result_enter(int j,int counter1,char p1[])
{
    FILE *fp;
fp=fopen("ESTUDENT.DAT","rb+");
int i=0,a=1,position,len;
 char r[5],l[7],s[5],c;
 len=strlen(p1);

settextstyle(DEFAULT_FONT,0,2);
while(1)
{
cleardevice();
search_background();
settextstyle(SIMPLEX_FONT,0,3);
  outtextxy(4,4,"Search names");
settextstyle(DEFAULT_FONT,0,2);

 for( i=0;i<j;i++)

{

   sprintf(r,"%d",s2[i].rollno);
   if ( s2[i].level==1 ) {sprintf(l,"EASY");} else if (s2[i].level==2) {sprintf(l,"MEDIUM");} else if (s2[i].level==3) {sprintf(l,"HARD");}
   sprintf(s,"%d",s2[i].total_score);
   int ryg;
   if(s2[i].total_score>13){ryg=2;} else if(s2[i].total_score>=6 && s2[i].total_score<=13){ryg=14;}  else {ryg=4;}
   setcolor(15);
       if (i==0)  {if (a==1){setfillstyle(1,15);bar(3,127,627,160); setcolor(0);}else{setfillstyle(1,7);bar(3,127,627,160); setcolor(ryg);} outtextxy(10,130,r); outtextxy(130,130,s2[i].name); outtextxy(430,130,l); outtextxy(570,130,s);}
  else if (i==1) {if (a==2){setfillstyle(1,15);bar(3,167,627,200); setcolor(0);}else{setfillstyle(1,7);bar(3,167,627,200); setcolor(ryg);} outtextxy(10,170,r); outtextxy(130,170,s2[i].name); outtextxy(430,170,l); outtextxy(570,170,s);}
  else if (i==2) {if (a==3) {setfillstyle(1,15);bar(3,207,627,240); setcolor(0);}else{setfillstyle(1,7);bar(3,207,627,240); setcolor(ryg);}  outtextxy(10,210,r); outtextxy(130,210,s2[i].name); outtextxy(430,210,l); outtextxy(570,210,s); }
  else if (i==3) {if (a==4) {setfillstyle(1,15);bar(3,247,627,280); setcolor(0);}else{setfillstyle(1,7);bar(3,247,627,280); setcolor(ryg);}  outtextxy(10,250,r); outtextxy(130,250,s2[i].name); outtextxy(430,250,l); outtextxy(570,250,s); }
  else if (i==4) {if (a==5) {setfillstyle(1,15);bar(3,287,627,320); setcolor(0);}else{setfillstyle(1,7);bar(3,287,627,320); setcolor(ryg);}  outtextxy(10,290,r); outtextxy(130,290,s2[i].name); outtextxy(430,290,l); outtextxy(570,290,s); }
  else if (i==5) {if (a==6) {setfillstyle(1,15);bar(3,327,627,360); setcolor(0);}else{setfillstyle(1,7);bar(3,327,627,360); setcolor(ryg);}  outtextxy(10,330,r); outtextxy(130,330,s2[i].name); outtextxy(430,330,l); outtextxy(570,330,s); }
  else if (i==6) {if (a==7) {setfillstyle(1,15);bar(3,367,627,400); setcolor(0);}else{setfillstyle(1,7);bar(3,367,627,400); setcolor(ryg);}  outtextxy(10,370,r); outtextxy(130,370,s2[i].name); outtextxy(430,370,l); outtextxy(570,370,s); }


 }
 fflush(stdin);

 c=getch();

if (c==80)
 {
/*  if (a==j)
     {
	if (counter1<=7) {a=1; continue;}
	else
	{ fseek(fp,0,0);
	  while(feof(fp)==0)
	  {  fread(&s2[7],sizeof(s2[7]),1,fp);
	     if (s2[6].rollno==s2[7].rollno) {position=ftell(fp); break;}
	   }

	   fseek(fp,position,0);
	   while(fread(&s2[7],sizeof(s2[7]),1,fp)==1)
	   {

	    if ( strncmp(p1,s2[7].name,len)==0)
	    {  s2[0]=s2[1]; s2[1]=s2[2]; s2[2]=s2[3]; s2[3]=s2[4]; s2[4]=s2[5]; s2[5]=s2[6]; s2[6]=s2[7];  break;}
	   }
	   setcolor(0); line(200,410,220,410); line(200,410,210,420); line(210,420,220,410); delay(50); setfillstyle(1,7); bar(200,410,220,420);
	   continue;
	 }
      } */
if (a==7){a=1; continue;}
    else {a++; continue;}
   }


if (c==72)
{
 /*if (a==1)
 {
 if (counter1<=7) {a=j; continue;}
  else
  {
	 fseek(fp,0,0);

	  while(feof(fp)==0)
	  {  fread(&s2[7],sizeof(s2[7]),1,fp);
	     if (s2[0].rollno==s2[7].rollno) {position=ftell(fp)-68; break;}
	   }

	   while(position>=0)
	   {fseek(fp,position,0);
	    fread(&s2[7],sizeof(s2[7]),1,fp);
	    if ( strncmp(p1,s2[7].name,len)==0)
	    {s2[6]=s2[5]; s2[5]=s2[4]; s2[4]=s2[3]; s2[3]=s2[2]; s2[2]=s2[1]; s2[1]=s2[0]; s2[0]=s2[7]; break;}
	    position=position-34;
	   }
      setcolor(0);line(200,126,220,126); line(200,126,210,115); line(210,115,220,126); delay(50); setfillstyle(1,7); bar(200,126,220,115);
      continue;
  }
 }*/
 if (a==1){a=7;}
 else {a--; continue;}
}


 if (c==13) {show_record(a); continue;}
 if (c==27) {break;}
}


}

/*_________________________SHOW RECORD___________________________*/
void show_record(int a1)
{
    while(1)
{
background_window();
char p[5],e[5],m[5],g[5],t[5],c;
int color;
 setcolor(0);
 setfillstyle(SOLID_FILL,15);
bar(42,92,238,128);
rectangle(40,90,240,130);rectangle(42,92,238,128);
rectangle(40,140,240,180);
rectangle(40,190,240,230);
rectangle(40,240,240,280);
rectangle(40,290,240,330);
setfillstyle(SOLID_FILL,0);
bar(40,340,240,380);
setcolor(WHITE); rectangle(40,340,240,380);rectangle(42,342,238,378);

setfillstyle(SOLID_FILL,15);
bar(382,92,548,128);
setcolor(0);
rectangle(380,90,550,130);rectangle(382,92,548,128);
rectangle(380,140,550,180); /*physics marks*/
rectangle(380,190,550,230); /*math marks*/
rectangle(380,240,550,280); /*english marks*/
rectangle(380,290,550,330); /*gk marks*/
setfillstyle(SOLID_FILL,0);
bar(380,340,550,380);
setcolor(15);rectangle(380,340,550,380);rectangle(382,342,548,378); /*total marks*/

setcolor(15);
settextstyle(SIMPLEX_FONT,0,2);
outtextxy(5,4,"Record");
if(s2[a1-1].level==1) { outtextxy(70,5,"(EASY)"); }
else if(s2[a1-1].level==2) { outtextxy(70,5,"(MEDIUM)"); }
else  { outtextxy(70,5,"(HARD)"); }
setcolor(0);
settextstyle(BOLD_FONT,0,1);
outtextxy(230,40,s2[a1-1].name); outtextxy(231,40,s2[a1-1].name);


 settextstyle(TRIPLEX_FONT,0,3);
 setcolor(0);
 outtextxy(90,95,"SUBJECTS");
 outtextxy(420,95,"MARKS");
 outtextxy(50,400,"LINE GRAPH");
  outtextxy(250,400,"BAR GRAPH");
   outtextxy(450,400,"PIE GRAPH");
    outtextxy(300,440,"BACK");

sprintf(p,"%d/5",s2[a1-1].physics);
sprintf(e,"%d/5",s2[a1-1].english);
sprintf(m,"%d/5",s2[a1-1].math);
sprintf(g,"%d/5",s2[a1-1].GK);
sprintf(t,"%d/20",s2[a1-1].total_score);

if (s2[a1-1].physics>3) {color=2;}  else if(s2[a1-1].physics>=2 && s2[a1-1].physics<=3) {color=14;}  else {color=4;}
 setcolor(color); outtextxy(50,145,"PHYSICS"); outtextxy(440,145,p);

 if (s2[a1-1].math>3) {color=2;}  else if(s2[a1-1].math>=2 && s2[a1-1].math<=3)  {color=14;}  else {color=4;}
setcolor(color); outtextxy(50,195,"MATHS"); outtextxy(440,195,m);

 if (s2[a1-1].english>3) {color=2;} else if(s2[a1-1].english>=2 && s2[a1-1].english<=3) {color=14;}  else {color=4;}
setcolor(color); outtextxy(50,245,"ENGLISH"); outtextxy(440,245,e);

 if (s2[a1-1].GK>3) {color=2;} else if(s2[a1-1].GK>=2 && s2[a1-1].GK<=3) {color=14;} else {color=4;}
setcolor(color); outtextxy(50,295,"G.KNOWLEDGE"); outtextxy(440,295,g);

if (s2[a1-1].total_score>14) {color=2;}else if(s2[a1-1].total_score>=6 && s2[a1-1].total_score<=13){color=14;}else {color=4;}
setcolor(color); outtextxy(50,345,"TOTAL"); outtextxy(440,345,t);


    int h=1;
while(1)
{
 if (h==1) { setcolor(0);rectangle(45,400,190,430); rectangle(47,402,188,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3);  outtextxy(50,400,"LINE GRAPH"); }
 else { setcolor(7); rectangle(45,400,190,430); rectangle(47,402,188,428);setcolor(0); settextstyle(TRIPLEX_FONT,0,3);  outtextxy(50,400,"LINE GRAPH"); }

if (h==2) { setcolor(0); rectangle(245,400,385,430);rectangle(247,402,383,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(250,400,"BAR GRAPH");}
 else { setcolor(7); rectangle(245,400,385,430);rectangle(247,402,383,428);setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(250,400,"BAR GRAPH");}

if (h==3) { setcolor(0);rectangle(445,400,580,430); rectangle(447,402,578,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(450,400,"PIE GRAPH");}
 else {setcolor(7);rectangle(445,400,580,430); rectangle(447,402,578,428); setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(450,400,"PIE GRAPH");}

 if (h==4) { setcolor(0); rectangle(295,440,365,470);rectangle(297,442,363,468); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(300,440,"BACK"); }
 else { setcolor(7); rectangle(295,440,365,470);rectangle(297,442,363,468); setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(300,440,"BACK");}

 c=getch();

 if (c==77)
 {
  if (h==4) {h=1; continue;} else { h++; continue;}
 }

 if (c==75)
 {
  if (h==1) { h=4; continue;} else { h--; continue;}
  }

  if (c==13) {
		if (h==1) {line_graph(a1);}
	       else if (h==2) {bar_graph(a1);}
	       else if (h==3) {pie_graph(a1);}
	       else if (h==4)  {break;}
	       break;
	      }

 }

 if(h==4) {break;}

 }

}


/*________________________________________LINE GRAPH__________________________________________________*/

void line_graph(int a2)
{
int phy=s2[a2-1].physics,math=s2[a2-1].math,iq=s2[a2-1].GK,eng=s2[a2-1].english,p,c,m,i,e;

background_window();
settextstyle(SIMPLEX_FONT,0,2);
  outtextxy(4,4,"Line Graph");
  if(s2[a2-1].level==1) { outtextxy(100,5,"(EASY)"); }
else if(s2[a2-1].level==2) { outtextxy(100,5,"(MEDIUM)"); }
else  { outtextxy(100,5,"(HARD)"); }
   if(phy!=0)
     p=410-(phy*60)+10;
   else
     p=410;
   if(math!=0)
     m=410-(math*60)+10;
   else
     m=410;
   if(iq!=0)
     i=410-(iq*60)+10;
   else
      i=410;
    if(eng!=0)
      e=410-(eng*60)+10;
    else
      e=410;
    setcolor(DARKGRAY);

   outtextxy(65,50,"Y");
   outtextxy(600,430,"X");
   outtextxy(70,415,"O");
   settextstyle(SMALL_FONT,HORIZ_DIR,6);

    setcolor(0);
   setlinestyle(SOLID_LINE,0,2);
   /* Draw X and Y Axis */
   line(90,410,90,40);  line(91,410,91,40);
   line(90,410,630,410);line(90,409,630,409);
   line(85,50,90,40);
   line(95,50,90,40);
   line(620,405,630,410);
   line(620,415,630,410);


   /* for x axis*/
   line(130,410,130,420);
   line(280,410,280,420);
   line(430,410,430,420);
   line(580,410,580,420);
   outtextxy(110,420,"Physics");
   outtextxy(260,420,"Maths");
   outtextxy(420,420,"IQ");
   outtextxy(550,420,"English");
   /* for y axis*/

   line(80,360,90,360);
   line(80,300,90,300);
   line(80,240,90,240);
   line(80,180,90,180);
   line(80,120,90,120);
   outtextxy(60,350,"1");
   outtextxy(60,290,"2");
   outtextxy(60,230,"3");
   outtextxy(60,170,"4");
   outtextxy(60,110,"5");
   /* for plotting */
   setcolor(MAGENTA);
   line(130,p,280,m);line(131,p,281,m);line(132,p,282,m); circle(130,p,5);
   line(280,m,430,i);line(281,m,431,i);line(282,m,432,i); circle(280,m,5);
   line(430,i,580,e);line(431,i,581,e);line(432,i,582,e); circle(430,i,5); circle(580,e,5);
   getch();



}

/*_____________________BAR GRAPH__________________________*/

void bar_graph(int a3)
{
 int phy=s2[a3-1].physics,math=s2[a3-1].math,iq=s2[a3-1].GK,eng=s2[a3-1].english,p,m,i,e;

  background_window();

    p=410-(phy*70)+15;
    m=410-(math*70)+15;
    i=410-(iq*70)+15;
    e=410-(eng*70)+15;

    setcolor(15);
    settextstyle(SIMPLEX_FONT,0,2);
    outtextxy(4,5,"Bar Graph");
    if(s2[a3-1].level==1) { outtextxy(100,5,"(EASY)"); }
else if(s2[a3-1].level==2) { outtextxy(100,5,"(MEDIUM)"); }
else  { outtextxy(100,5,"(HARD)"); }



    setcolor(MAGENTA);
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(375,25,s2[a3-1].name);outtextxy(376,25,s2[a3-1].name);/* outtextxy(277,30,"BAR GRAPH");*/
   outtextxy(45,60,"Y");
   outtextxy(600,430,"X");

   settextstyle(SMALL_FONT,HORIZ_DIR,7);
   setcolor(0);
   setlinestyle(SOLID_LINE,0,2);
   /* Draw X and Y Axis */
   line(90,410,90,50);line(91,410,91,50);
   line(90,410,600,410);line(90,409,600,409);
   line(85,60,90,50);
   line(95,60,90,50);
   line(590,405,600,410);
   line(590,415,600,410);


   /* Draw bars on screen */
   setfillstyle(CLOSE_DOT_FILL, WHITE);
   if(phy!=0)
      bar3d(150,p,190,410,10,10);
   if(math!=0)
      bar3d(250,m,290,410,10,10);
   if(iq!=0)
      bar3d(350,i,390,410,10,10);
   if(eng!=0)
      bar3d(450,e,490,410,10,10);
   /* Label the graph */
   outtextxy(70,345,"1");
   outtextxy(70,275,"2");
   outtextxy(70,205,"3");
   outtextxy(70,135,"4");
   outtextxy(70,65,"5");

   outtextxy(130,420,"Physics");
   outtextxy(250,420,"Maths");
   outtextxy(360,420,"IQ");
   outtextxy(440,420,"English");
   getch();



}

/*_____________________PIE GRAPH__________________________*/

void pie_graph(int a4)
{
    cleardevice();
    background_window();
    settextstyle(SIMPLEX_FONT,0,2);
  outtextxy(4,4,"Pie Graph");
  if(s2[a4-1].level==1) { outtextxy(100,5,"(EASY)"); }
else if(s2[a4-1].level==2) { outtextxy(100,5,"(MEDIUM)"); }
else  { outtextxy(100,5,"(HARD)"); }


    float q1=s2[a4-1].physics,q2=s2[a4-1].english,q3=s2[a4-1].GK,q4=s2[a4-1].math,m[4];
    int sum=q1+q2+q3+q4;
   m[0]=(q1/sum)*360;
   m[1]=(q2/sum)*360;
   m[2]=(q3/sum)*360;
   m[3]=(q4/sum)*360;



   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(0);

   outtextxy(450,100,"PHYSICS");
   outtextxy(50,100,"ENGLISH");
   outtextxy(50,350,"MATH");
   outtextxy(450,350,"G.KNOWLEDGE");
int   midx = getmaxx()/2;
   int midy = getmaxy()/2;
   setcolor(WHITE);


   setfillstyle(CLOSE_DOT_FILL,WHITE);
   pieslice(midx, midy, 0, m[0], 150);


   setfillstyle(XHATCH_FILL,GREEN);
   pieslice(midx, midy, m[0], m[0]+m[1], 150);

   setfillstyle(LINE_FILL,LIGHTRED);
   pieslice(midx, midy, m[0]+m[1] , m[0]+m[1]+m[2] , 150);

   setfillstyle(INTERLEAVE_FILL,YELLOW);
   pieslice(midx, midy, m[0]+m[1]+m[2], m[0]+m[1]+m[2]+m[3], 150);

   getch();



}

/*_____________________password______________________*/

int password(void)
{
int a;
setfillstyle(SOLID_FILL,0);
closegraph();
    clrscr();

 textbackground(BLACK);
 char c,check_pass[20];

 gotoxy(20,10);
 textcolor(WHITE);
  cprintf("PASSWORD:");

 gotoxy(30,10);
 for(int i=1;i<15;i++)
 { textbackground(GREEN);
 cprintf(" ",219);}
 _setcursortype(_NORMALCURSOR);
 gotoxy(30,10);
 int k=0;
 while (1)
 {
 c=getch();

 if (c==8)
 {
  if (k==0)  {cprintf(""); continue;}
  if (k>0)
  {
   gotoxy(30+(k-1),10);  cprintf(" ");
   gotoxy(30+(k-1),10);
   k--; continue;
  }

 }
 if (c==13) {check_pass[k]='\0';break;}
 if ( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9') )
 {cprintf("*");}
 check_pass[k]=c;
 k++;
 }
 textbackground(0);
 if ( strncmp(check_pass,"uzma123",9)==0)
 { a=1; printf("\n\n\t\t\t");cprintf("**LOGIN SUCCESSFULL**");
  printf("\n\n\n\n\n\n\t\t\t\t"); cprintf("Loading Questions...");
 gotoxy(22,20);
  for(int i=1;i<40;i++)
 { textbackground(WHITE);
 cprintf(" ",219); delay(50); }

 }
 else {a=0; printf("\n\n\t\t\t"); cprintf("INCORRECT PASSWORD!!"); getch(); }
 textbackground(BLACK);
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 return a;

}


/*_____________________________________________QUIT WINDOW_______________________________________*/

int quit_window(void)
{
    setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(100,250,500,350);
 setfillstyle(SOLID_FILL,BLUE);bar(100,225,500,250);
 setcolor(15);
rectangle(455,232,469,245); line(455,233,469,233);
line(450,225,450,251);
setfillstyle(SOLID_FILL,RED);bar(475,225,500,251);rectangle(425,225,500,251);
 line(475,225,475,251);
 line(482,232,492,245); line(483,232,493,245);
line(492,232,482,245); line(493,232,483,245);
line(430,235,445,235); line(430,236,445,236);
setcolor(0); rectangle(99,224,501,351); rectangle(99,223,502,352);
settextstyle(SIMPLEX_FONT,0,3);
outtextxy(110,255,"Are you sure you want to quit?");outtextxy(111,255,"Are you sure you want to quit?");
settextstyle(BOLD_FONT,0,1);

int a=1;
char c;
while(1)
{
 if (a==1) {setcolor(0); rectangle(165,305,235,343);rectangle(163,303,237,345); setcolor(15);outtextxy(170,300,"YES");outtextxy(171,300,"YES"); }
 else {setcolor(7); rectangle(165,305,235,343);rectangle(163,303,237,345); setcolor(0);outtextxy(170,300,"YES");outtextxy(171,300,"YES");}

 if (a==2) {setcolor(0); rectangle(355,305,425,343);rectangle(353,303,427,345); setcolor(15); outtextxy(370,300,"NO");outtextxy(371,300,"NO");}
 else {setcolor(7); rectangle(355,305,425,343);rectangle(353,303,427,345); setcolor(0); outtextxy(370,300,"NO");outtextxy(371,300,"NO");}

 c=getch();

 if (c==77) { if (a==2) { a=1; continue;} else a++; }
 if (c==75) { if (a==1) {a=2; continue;} else a--; }
 if (c==13) { break;}

}

return a;
}
void high_scores(int a)
{
 char pos[1],mark[2],roll[6],c;
 FILE *fp;
 fp=fopen("ESTUDENT.DAT","rb+");
 int i,j=0,k=0,h=1;
 for(i=20;i>=1;i--)
 {
  fseek(fp,SEEK_SET,0);
  while(fread(&s2[6],sizeof(s2[6]),1,fp)==1)
  {

   if(s2[6].level==a && s2[6].total_score==i)
   {
    s2[j]=s2[6];
    k++; j++;
   }
  if(k==5)
   break;
  }
  if(k==5)
    break;
 }

 while (1)
 {
 cleardevice();
 background_window();
 settextstyle(TRIPLEX_SCR_FONT,0,3.8);
setcolor(0);
outtextxy(10,77,"POSITION");
outtextxy(210,77,"NAME");
outtextxy(400,77,"ROLL NO");
outtextxy(540,77,"SCORE");
line(3,112,627,112); line(3,110,627,110);
line(3,312,627,312); line(3,310,627,310);
 settextstyle(SIMPLEX_FONT,BLACK,3);
for(j=110,i=0;i<5;i++,j=j+40)
{

 sprintf(roll,"%d",s2[i].rollno);
 sprintf(mark,"%d",s2[i].total_score);

 outtextxy(210,j,s2[i].name);
 outtextxy(430,j,roll);
 outtextxy(570,j,mark);
}
for(j=110,i=0;i<5;i++,j=j+40)      {
sprintf(pos,"%d",i+1);
outtextxy(50,j,pos);}
 setcolor(15);
settextstyle(SIMPLEX_FONT,0,2);
outtextxy(5,4,"Highest Scores");
 setcolor(0);

 while(1)
{
 if (h==1) { setcolor(0);rectangle(45,400,190,430); rectangle(47,402,188,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3);  outtextxy(50,400,"LINE GRAPH"); }
 else { setcolor(7); rectangle(45,400,190,430); rectangle(47,402,188,428);setcolor(0); settextstyle(TRIPLEX_FONT,0,3);  outtextxy(50,400,"LINE GRAPH"); }

if (h==2) { setcolor(0); rectangle(245,400,385,430);rectangle(247,402,383,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(250,400,"BAR GRAPH");}
 else { setcolor(7); rectangle(245,400,385,430);rectangle(247,402,383,428);setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(250,400,"BAR GRAPH");}

if (h==3) { setcolor(0);rectangle(445,400,580,430); rectangle(447,402,578,428); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(450,400,"PIE GRAPH");}
 else {setcolor(7);rectangle(445,400,580,430); rectangle(447,402,578,428); setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(450,400,"PIE GRAPH");}

 if (h==4) { setcolor(0); rectangle(295,440,365,470);rectangle(297,442,363,468); setcolor(MAGENTA); settextstyle(TRIPLEX_FONT,0,3); outtextxy(300,440,"BACK"); }
 else { setcolor(7); rectangle(295,440,365,470);rectangle(297,442,363,468); setcolor(0); settextstyle(TRIPLEX_FONT,0,3); outtextxy(300,440,"BACK");}

 c=getch();

 if (c==77)
 {
  if (h==4) {h=1; continue;} else { h++; continue;}
 }

 if (c==75)
 {
  if (h==1) { h=4; continue;} else { h--; continue;}
  }

  if (c==13) {
	     if (h==1) {high_line(); break;}
	     else if (h==2) {high_bar(); break;}
	       else if (h==3) {high_pie();break; }
	       else if (h==4)  {break;}
	      }

}

if (h==4) {break;}

 }

}





void high_line()
{ int a[5],ad[5],ij;
 a[0]=s2[0].total_score,a[1]=s2[1].total_score,a[2]=s2[2].total_score,a[3]=s2[3].total_score,a[4]=s2[4].total_score;
 int p,c,m,i,e,v;
for(ij=0;ij<5;ij++)
  ad[ij]=20-a[ij];
for(ij=0;ij<5;ij++)
 a[ij]=510-(ad[ij]*20);
background_window();
settextstyle(SIMPLEX_FONT,0,2);
  outtextxy(4,4,"Highest Scores Line Graph");

    setcolor(DARKGRAY);

   outtextxy(90,50,"Y");
   outtextxy(575,410,"X");
   outtextxy(90,405,"O");
   settextstyle(SMALL_FONT,HORIZ_DIR,6);

    setcolor(0);
   setlinestyle(SOLID_LINE,0,2);
   /* Draw X and Y Axis */
   line(110,410,110,40);  line(111,410,111,40);
   line(110,410,600,410);line(110,409,600,409);
   line(105,50,110,40);
   line(115,50,110,40);
   line(590,405,600,410);
   line(590,415,600,410);


   /* for x axis*/
   line(210,410,210,420);
   line(310,410,310,420);
   line(410,410,410,420);
   line(510,410,510,420);
   outtextxy(208,420,"5");
   outtextxy(302,420,"10");
   outtextxy(402,420,"15");
   outtextxy(502,420,"20");
   /* for y axis*/

   line(100,360,110,360);
   line(100,300,110,300);
   line(100,240,110,240);
   line(100,180,110,180);
   line(100,120,110,120);
   outtextxy(20,350,s2[4].name);
   outtextxy(20,290,s2[3].name);
   outtextxy(20,230,s2[2].name);
   outtextxy(20,170,s2[1].name);
   outtextxy(20,110,s2[0].name);
   /* for small lines*/
  for(i=110;i<=510;i=i+20)
    line(i,415,i,410);
   /* for plotting */
   setcolor(MAGENTA);
   line(a[4],360,a[3],300);circle(a[4],360,5);
   line(a[3],300,a[2],240);circle(a[3],300,5);
   line(a[2],240,a[1],180);circle(a[2],240,5);
   line(a[1],180,a[0],120);circle(a[1],180,5); circle(a[0],120,5);
   getch();

}
void high_bar(void)
{
int tot[5],ad[5],i;
   for(i=0;i<5;i++)
      tot[i]=s2[i].total_score;
   for(i=0;i<5;i++)
      ad[i]=110+(tot[i]*20);
  cleardevice();
  background_window();



    setcolor(15);
    settextstyle(SIMPLEX_FONT,0,2);
    outtextxy(4,5,"Highest Scores Bar Graph");




    setcolor(MAGENTA);
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(85,50,"Y");
   outtextxy(580,408,"X");

   settextstyle(SMALL_FONT,HORIZ_DIR,7);
   setcolor(0);
   setlinestyle(SOLID_LINE,0,2);
   /* Draw X and Y Axis */
   line(110,410,110,50);line(111,410,111,50);
   line(110,410,600,410);line(110,409,600,409);
   line(105,60,110,50);
   line(115,60,110,50);
   line(590,405,600,410);
   line(590,415,600,410);


   /* Draw bars on screen */
   setfillstyle(CLOSE_DOT_FILL, WHITE);
      bar3d(110,350,ad[4],360,7,10);
      bar3d(110,290,ad[3],300,7,10);
      bar3d(110,230,ad[2],240,7,10);
      bar3d(110,170,ad[1],180,7,10);
      bar3d(110,110,ad[0],120,7,10);
   /* Label the graph */

   outtextxy(20,340,s2[4].name);
   outtextxy(20,280,s2[3].name);
   outtextxy(20,220,s2[2].name);
   outtextxy(20,160,s2[1].name);
   outtextxy(20,100,s2[0].name);
   /* for small lines*/
  for(i=130;i<=510;i=i+20)
    line(i,415,i,410);
   line(210,410,210,420);
   line(310,410,310,420);
   line(410,410,410,420);
   line(510,410,510,420);

   outtextxy(208,420,"5");
   outtextxy(300,420,"10");
   outtextxy(400,420,"15");
   outtextxy(500,420,"20");
   getch();
}
void high_pie(void)
{
    cleardevice();
    background_window();
    settextstyle(SIMPLEX_FONT,0,2);
  outtextxy(4,4,"Highest Scores Pie Graph");

    float q1=s2[0].total_score,q2=s2[1].total_score,q3=s2[2].total_score,q4=s2[3].total_score,q5=s2[4].total_score,m[5];
    int sum=q1+q2+q3+q4+q5;
   m[0]=(q1/sum)*360;
   m[1]=(q2/sum)*360;
   m[2]=(q3/sum)*360;
   m[3]=(q4/sum)*360;
   m[5]=(q5/sum)*360;



   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   setcolor(0);
     outtextxy(10,45,s2[0].name);
   outtextxy(10,70,s2[1].name);
   outtextxy(10,95,s2[2].name);
   outtextxy(10,120,s2[3].name);
   outtextxy(10,145,s2[4].name);
    setfillstyle(CLOSE_DOT_FILL,WHITE);
   bar(110,50,150,68);
    setfillstyle(XHATCH_FILL,GREEN);
   bar(110,75,150,93);
     setfillstyle(LINE_FILL,LIGHTRED);
   bar(110,100,150,118);
    setfillstyle(INTERLEAVE_FILL,YELLOW);
   bar(110,125,150,143);
    setfillstyle(WIDE_DOT_FILL,WHITE);
   bar(110,150,150,168);

int   midx = getmaxx()/2;
   int midy = getmaxy()/2;
   setcolor(WHITE);


   setfillstyle(CLOSE_DOT_FILL,WHITE);
   pieslice(midx+20, midy+10, 0, m[0], 150);


   setfillstyle(XHATCH_FILL,GREEN);
   pieslice(midx+20, midy+10, m[0], m[0]+m[1], 150);

   setfillstyle(LINE_FILL,LIGHTRED);
   pieslice(midx+20, midy+10, m[0]+m[1] , m[0]+m[1]+m[2] , 150);

   setfillstyle(INTERLEAVE_FILL,YELLOW);
   pieslice(midx+20, midy+10, m[0]+m[1]+m[2], m[0]+m[1]+m[2]+m[3], 150);

     setfillstyle(WIDE_DOT_FILL,WHITE);
   pieslice(midx+20, midy+10, m[0]+m[1]+m[2]+m[3], 360, 150);
   getch();
}

