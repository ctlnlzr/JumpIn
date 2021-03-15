 #include <iostream>
#include<winbgim.h>
#include <graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>
#include<time.h>
using namespace std;
 int a[][6]= { {0,0,0,0,0,0}, {0,2,1,1,0,2}, {0,0,0,0,1,0},{0,0,0,2,3,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//1
        {0,0,0,0,0,0}, {0,2,0,4,1,23}, {0,0,0,0,0,1},{0,0,0,2,1,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//2
        {0,0,0,0,0,0}, {0,2,3,0,1,2}, {0,0,0,1,0,0},{0,0,0,2,0,0},{0,0,0,1,0,0}, {0,2,0,4,0,2},//3
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,0,0},{0,4,0,2,0,0},{0,1,0,1,0,0}, {0,2,3,0,1,2},//4
        {0,0,0,0,0,0}, {0,2,0,4,0,2}, {0,0,1,0,0,0},{0,1,0,2,0,0},{0,1,0,0,0,0}, {0,3,0,0,0,2},//5
        {0,0,0,0,0,0}, {0,3,1,0,0,2}, {0,0,0,1,0,0},{0,0,1,2,4,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//6
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,0,0},{0,0,0,2,4,0},{0,0,1,1,0,0}, {0,2,0,0,1,23},//7
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,0,1},{0,5,1,23,1,4},{0,0,0,0,0,0}, {0,2,0,0,0,2},//8
        {0,0,0,0,0,0}, {0,5,1,0,1,24}, {0,0,0,1,0,0},{0,0,0,2,0,0},{0,0,0,0,0,0}, {0,2,0,3,0,2},//9
        {0,0,0,0,0,0}, {0,25,1,4,1,23}, {0,1,0,0,0,0},{0,0,0,2,0,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//10
        {0,0,0,0,0,0}, {0,25,1,0,4,2}, {0,0,0,1,0,0},{0,0,0,2,0,3},{0,0,0,0,1,0}, {0,2,0,0,0,2},//11
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,0,0},{0,5,4,2,0,3},{0,0,1,0,0,0}, {0,2,0,1,1,2},//12
        {0,0,0,0,0,0}, {0,2,0,0,1,2}, {0,0,1,3,6,7},{0,0,0,1,0,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//13
        {0,0,0,0,0,0}, {0,2,0,0,3,2}, {0,0,6,7,0,0},{0,0,1,1,0,1},{0,0,0,0,0,0}, {0,2,0,0,0,2},//14
        {0,0,0,0,0,0}, {0,2,0,1,8,2}, {0,0,0,0,9,0},{0,0,0,1,0,0},{0,0,0,1,0,3}, {0,2,0,0,0,2},//15
        {0,0,0,0,0,0}, {0,2,3,0,0,2}, {0,1,0,0,0,0},{0,1,0,2,0,0},{0,0,8,1,0,0}, {0,2,9,0,0,2},//16
        {0,0,0,0,0,0}, {0,2,8,0,8,2}, {0,0,9,0,9,1},{0,1,0,2,0,1},{0,3,0,0,0,0}, {0,2,0,0,0,2},//17
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,6,7,0},{0,1,0,2,1,0},{0,6,7,0,0,0}, {0,1,0,0,3,2},//18
        {0,0,0,0,0,0}, {0,2,0,1,0,2}, {0,0,0,3,0,0},{0,0,0,2,8,1},{0,0,0,1,9,0}, {0,2,0,0,0,2},//19
        {0,0,0,0,0,0}, {0,2,3,0,0,2}, {0,0,0,0,0,0},{0,1,0,1,0,0},{0,0,8,1,0,0}, {0,2,9,0,0,2},//20
        {0,0,0,0,0,0}, {0,2,0,0,3,2}, {0,6,7,0,0,0},{0,1,0,2,1,0},{0,0,0,1,0,0}, {0,2,0,0,0,2},//21
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,8,0},{0,0,0,2,9,0},{0,0,3,0,6,7}, {0,2,1,1,0,1},//22
        {0,0,0,0,0,0}, {0,2,0,0,3,1}, {0,6,7,0,0,0},{0,0,0,2,1,0},{0,0,8,0,0,0}, {0,2,9,1,0,2},//23
        {0,0,0,0,0,0}, {0,2,0,0,0,1}, {0,0,0,1,8,3},{0,0,0,1,9,0},{0,0,0,0,6,7}, {0,2,0,0,0,2},//24
        {0,0,0,0,0,0}, {0,2,8,0,8,2}, {0,0,9,0,9,1},{0,0,0,2,0,1},{0,5,0,0,4,0}, {0,2,0,0,0,1},//25
        {0,0,0,0,0,0}, {0,2,1,0,0,2}, {0,6,7,0,4,0},{0,0,0,25,0,0},{0,0,1,0,0,0}, {0,2,0,0,0,2},//26
        {0,0,0,0,0,0}, {0,25,0,0,0,1}, {0,6,7,0,4,0},{0,0,8,2,0,0},{0,1,9,0,0,0}, {0,1,0,0,0,2},//27
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,5,0,0,0},{0,0,8,2,1,4},{0,1,9,0,0,0}, {0,2,0,0,0,2},//28
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,0,8,0},{0,0,0,2,9,0},{0,0,0,0,4,0}, {0,2,0,1,0,25},//29
        {0,0,0,0,0,0}, {0,2,8,0,0,2}, {0,0,9,0,6,7},{0,0,0,2,0,1},{0,0,4,0,0,0}, {0,2,0,5,0,2},//30
        {0,0,0,0,0,0}, {0,2,1,1,0,24}, {0,0,0,0,0,0},{0,0,0,1,5,0},{0,0,0,0,8,0}, {0,2,0,0,9,2},//31
        {0,0,0,0,0,0}, {0,2,8,0,0,2}, {0,1,9,1,5,1},{0,0,0,2,0,0},{0,0,6,7,0,0}, {0,2,0,0,0,24},//32
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,6,7,0,4,0},{0,0,0,2,1,0},{0,0,8,0,1,0}, {0,2,9,0,1,5},//33
        {0,0,0,0,0,0}, {0,25,8,0,8,1}, {0,0,9,1,9,0},{0,0,0,2,0,0},{0,0,0,0,0,0}, {0,2,4,0,0,2},//34
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,1,0,5,0},{0,1,0,2,4,0},{0,6,7,0,8,0}, {0,2,0,0,9,2},//35
        {0,0,0,0,0,0}, {0,24,0,0,1,2}, {0,0,6,7,0,0},{0,0,1,1,0,0},{0,0,0,0,5,0}, {0,2,0,0,0,2},//36
        {0,0,0,0,0,0}, {0,2,8,0,0,2}, {0,1,9,0,0,0},{0,0,0,1,0,0},{0,6,7,0,0,0}, {0,1,0,3,0,2},//37
        {0,0,0,0,0,0}, {0,2,8,1,8,2}, {0,0,9,1,9,0},{0,0,0,1,0,0},{0,5,0,0,0,0}, {0,2,0,0,0,3},//38
        {0,0,0,0,0,0}, {0,2,0,0,1,2}, {0,6,7,0,6,7},{0,0,4,25,3,1},{0,0,0,0,1,0}, {0,2,0,0,0,2},//39
        {0,0,0,0,0,0}, {0,2,0,1,0,2}, {0,0,0,0,3,0},{0,0,1,2,0,0},{0,6,7,0,8,0}, {0,1,5,0,9,2},//40
        {0,0,0,0,0,0}, {0,2,8,0,0,2}, {0,0,9,1,0,0},{0,0,0,2,0,0},{0,0,0,1,0,0}, {0,1,4,3,0,2},//41
        {0,0,0,0,0,0}, {0,23,0,0,0,2}, {0,0,8,1,1,0},{0,0,9,2,1,0},{0,0,0,0,0,4}, {0,2,0,0,0,2},//42
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,5,6,7,4},{0,0,1,1,1,0},{0,0,0,0,0,0}, {0,2,0,0,0,2},//43
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,8,6,7,4},{0,0,9,1,0,0},{0,0,3,0,1,0}, {0,2,5,0,0,1},//44
        {0,0,0,0,0,0}, {0,1,0,0,0,2}, {0,0,0,6,7,0},{0,0,0,2,0,3},{0,5,0,4,8,0}, {0,2,0,0,9,2},//45
        {0,0,0,0,0,0}, {0,2,1,0,8,2}, {0,1,1,0,9,0},{0,3,0,2,0,0},{0,5,0,0,0,0}, {0,2,0,0,4,2},//46
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,6,7,4},{0,0,0,1,1,0},{0,0,0,1,0,0}, {0,2,0,3,0,2},//47
        {0,0,0,0,0,0}, {0,2,0,3,1,25}, {0,0,1,1,0,0},{0,0,0,2,0,0},{0,4,0,0,0,0}, {0,2,0,0,0,2},//48
        {0,0,0,0,0,0}, {0,2,0,0,0,23}, {0,6,7,0,4,0},{0,0,8,1,0,0},{0,0,9,0,0,0}, {0,2,0,0,5,1},//49
        {0,0,0,0,0,0}, {0,2,1,5,3,2}, {0,1,0,4,0,0},{0,0,0,1,0,0},{0,6,6,0,0,0}, {0,2,0,0,0,2},//50
        {0,0,0,0,0,0}, {0,23,0,0,0,2}, {0,4,6,7,6,0},{0,0,0,2,6,0},{0,0,0,5,0,0}, {0,1,0,1,0,1},//51
        {0,0,0,0,0,0}, {0,2,0,0,0,1}, {0,6,7,0,3,0},{0,0,8,2,0,4},{0,0,9,1,0,0}, {0,1,0,0,5,2},//52
        {0,0,0,0,0,0}, {0,2,5,0,4,2}, {0,1,8,0,0,3},{0,1,9,2,0,0},{0,0,6,7,0,0}, {0,1,0,0,0,2},//53
        {0,0,0,0,0,0}, {0,2,3,1,8,2}, {0,1,0,0,9,0},{0,0,0,2,0,0},{0,0,1,0,0,0}, {0,2,5,0,4,2},//54
        {0,0,0,0,0,0}, {0,2,0,0,0,2}, {0,0,0,1,0,0},{0,0,0,23,8,0},{0,4,0,5,9,0}, {0,1,0,0,0,1},//55
        {0,0,0,0,0,0}, {0,2,0,0,0,1}, {0,6,7,0,8,5},{0,0,0,1,9,0},{0,3,0,0,0,1}, {0,2,4,0,0,2},//56
        {0,0,0,0,0,0}, {0,23,0,0,0,2}, {0,0,4,0,6,7},{0,0,0,1,0,0},{0,0,5,0,6,7}, {0,2,1,0,0,1},//57
        {0,0,0,0,0,0}, {0,2,5,0,0,1}, {0,0,0,0,8,0},{0,4,0,23,9,1},{0,0,0,0,6,7}, {0,1,0,0,0,2},//58
        {0,0,0,0,0,0}, {0,2,0,0,1,2}, {0,6,7,0,3,0},{0,0,0,1,0,4},{0,5,0,6,7,0}, {0,2,0,0,0,1},//59
        {0,0,0,0,0,0}, {0,2,0,0,1,2}, {0,6,7,0,3,0},{0,0,0,1,0,4},{0,1,0,0,0,0}, {0,2,0,0,5,2},//60
    };
bool oki=true;
int l=0;
int t=0;
struct coordonate
{
    int x, y;
} cord;
int lat=70;
int castigat(int nr, int a[][6], int m)
{
    int nr2=0, i, j, n=5;
    for(j=1+m; j<=n+m; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(a[j][i]>10)
                nr2++;
        }
    }
    int g=0;
    if(nr==nr2)
        g=1;
    //cout<<endl;
    //cout<<nr2<<" nr2";
    return g;
}
int mutarecorectaiepuri(int a[][6], int linia1, int linia2, int coloana1, int coloana2, int m, int cod)
{
    //vedem daca pe linie sau coloana sunt spatii libere sau gauri, daca sunt este mutare incorecta
    int g=1,i, j;
    for(i=linia1+1; i<linia2; i++)
        if(a[i+m][coloana2]==0 || a[i+m][coloana2]==2)
            g=0;
    for(j=coloana1+1; j<coloana2; j++)
        if(a[linia2+m][j]==0 ||a[linia2+m][j]==2 )
            g=0;
    for(j=coloana2+1; j<coloana1; j++)
        if(a[linia1+m][j]==0 ||a[linia1+m][j]==2 )
            g=0;
    for(i=linia2+1; i<linia1; i++)
        if(a[i+m][coloana1]==0 || a[i+m][coloana1]==2)
            g=0;
    if(cod!=6 && cod!=7 && cod!=8 && cod!=9)
    {
        if(linia2-linia1==1 || linia1-linia2==1 ||coloana1-coloana2==1 ||coloana2-coloana1==1)
            g=0;//daca diferenta e de 1 inseamna ca vrea sa mute intr o casuta goala sau in gaura
    }
    return g;

}
int mutarecorectavulpi(int a[][6], int linia1, int linia2, int coloana1, int coloana2, int m, int cod)
{
    int g=1,i, j;
    for(i=linia1+1; i<linia2; i++)
        if(a[i+m][coloana2]!=0)
            g=0;
    for(j=coloana1+1; j<coloana2; j++)
        if(a[linia2+m][j]!=0 )
            g=0;
    for(j=coloana2+1; j<coloana1; j++)
        if(a[linia1+m][j]!=0 )
            g=0;
    for(i=linia2+1; i<linia1; i++)
        if(a[i+m][coloana1]!=0)
            g=0;
    return g;
}
void patrat(int x, int y, int l)
{
    line(x, y, x+l, y);
    line(x+l, y, x+l, y+l);
    line(x+l, y+l, x, y+l);
    line(x, y+l, x, y);
}
void dreptunghi(int x, int y, int l1, int l2)
{
    line(x, y, x+l1, y);
    line(x+l1, y, x+l1, y+l2);
    line(x+l1, y+l2, x, y+l2);
    line(x, y+l2, x, y);

}

bool cli= false;
/*void click (int x, int y)
{
    if (getpixel(x, y)==GREEN)  //practic daca apasa pe butonul verde, se intampla cv
    {
        cli=true;
    }
}*/
bool cl=false;
void ap(int x, int y)
{
    if(getpixel(x, y)==BLUE)  //aici e pe albastru, adica butonul de instructiuni  sau de setari
    {
        cl=true;
    }
    if (getpixel(x, y)==GREEN)  //practic daca apasa pe butonul verde, se intampla cv
    {
        cli=true;
    }

}
void instructiuni(int b);
void instructiunie(int b);
void start (int b);
void starte (int b);
void setari (int b);
void setarie (int b);
void joc(int b, int f);
void joce(int b, int f);
void meniu(int b) // face cum arata primul window
{
    oki=true;
    setcurrentwindow(b);
    setcolor(CYAN); // setcolor face culoarea scrisului
    settextstyle(10, 0, 7); // face modelul fontului prima si a doua pozitie, a treia face dimensiunea/grosimea
    setbkcolor(BLACK); // culoarea fundalului scrisului
    readimagefile("fundalll.JPG", 0, 0, 800, 600);
    if (l==0)
    {
        // pune poza
        outtextxy(250, 90, "JUMPIN`" ); // pozitia casetei care isi ia dimensiunea dupa dimensiunea scrisului
        settextstyle(10, 0, 5);
        setbkcolor(BLUE);
        outtextxy(320, 240, "START");
        outtextxy(240, 340, "INSTRUCTIUNI");
        outtextxy(310, 440, "SETARI");
    }
    else if (l==1)
    {
        outtextxy(250, 90, "JUMPIN`" ); // pozitia casetei care isi ia dimensiunea dupa dimensiunea scrisului
        settextstyle(10, 0, 5);
        setbkcolor(BLUE);
        outtextxy(320, 240, "START");
        outtextxy(240, 340, "INSTRUCTIONS");
        outtextxy(290, 440, "SETTINGS");
    }
    else if (l==2)
    {
        outtextxy(250, 90, "JUMPIN`" ); // pozitia casetei care isi ia dimensiunea dupa dimensiunea scrisului
        settextstyle(10, 0, 5);
        setbkcolor(BLUE);
        outtextxy(320, 240, "DEBUT");
        outtextxy(240, 340, "INSTRUCTIONS");
        outtextxy(290, 440, "RÉGLAGES");
    }

    int x, y, z, w;
    clearmouseclick(WM_LBUTTONDOWN);
    while (oki)
    {
        getmouseclick(WM_LBUTTONDOWN, z, w);
        if(z>240 && z<560 && w>350 && w<390)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            instructiuni (b);
        }
        if(z>320 && z<485 && w>240 && w<280)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            start (b);
        }
        if(z>290 && z<500 && w>440 && w<480)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari (b);
        }
    }

// practic, fiecare apelare a functiilor settextstyle si setbkcolor modifica ce modifica ele pt ce urmeaza dupa ele pana apare o noua apelare a lor
}

void setari (int b)
{
    oki=false;
    setcurrentwindow(b);
    setfillstyle(1, WHITE);
    bar(0, 0, 800, 600);
    readimagefile("ciuperca.JPG", 520, 370, 752, 570);
    if (l==0)
    {
        settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,100,"1.Limba");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,140,"Limba romana");
        outtextxy( 80,170,"Limba engleza");
        outtextxy( 80,200,"Limba franceza");
        settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,230,"2.Aspect tabla ");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,270,"Tabla stil 1");
        outtextxy( 80,300,"Tabla stil 2");
        setcolor(BLACK);
        setbkcolor(WHITE);
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Inapoi");
    }
    else if(l==1)
    {
        settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,100,"1.LANGUAGE");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,140,"Romanian");
        outtextxy( 80,170,"English");
        outtextxy( 80,200,"French");
        settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,230,"2.Board layout");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,270,"Layout 1");
        outtextxy( 80,300,"Layout 2");
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Back");
    }
    else if(l==2)
    {
      settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,100,"1.Langue");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,140,"Roumain");
        outtextxy( 80,170,"Anglais");
        outtextxy( 80,200,"Francais");
        settextstyle(10,0,4);//8,10
        setcolor(BLACK);
        setbkcolor(WHITE);
        outtextxy( 90,230,"2.Le style de la planche");
        setbkcolor(LIGHTMAGENTA);
        setcolor(WHITE);
        settextstyle(8,0,2);//8,10
        outtextxy( 80,270,"Style 1");
        outtextxy( 80,300,"Style 2");
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Arriere");
    }
    int p,q;
    while (!oki)
    {
        getmouseclick(WM_LBUTTONDOWN, p, q);
        if(p>80 && p<210 && q>140 && q<160)
        {
            l=0;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari(b);
        }
        if(p>80 && p<210 && q>170 && q<190)
        {
            l=1;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari (b);
        }
        if(p>80 && p<210 && q>200 && q<220)
        {
            l=2;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari (b);
        }
        if(p>20 && p<90 && q>50 && q<70)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            meniu(b);
        }
        if(p>80 && p<210 && q>270 && q<290)
        {
            t=0;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari(b);
        }
        if(p>80 && p<210 && q>300 && q<320)
        {
            t=1;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            setari(b);
        }

    }


}

void instructiuni(int b)
{
    oki=false;
    setcurrentwindow(b);
    setfillstyle(1, WHITE);
    bar(0, 0, 800, 600);
    readimagefile("iepuras.JPG", 600, 370, 752, 570);
    if (l==0)
    {
        settextstyle(8, 0, 1);
        setbkcolor(WHITE);
        setcolor(BLACK);
        settextstyle(8,0,3);//8,10
        setbkcolor(WHITE);
        outtextxy(250,100, "INSTRUCTIUNI-JUMPIN`");
        settextstyle(3,0,1);
        outtextxy( 130,180,"1.Scopul jocului este sa muti iepurasii si vulpile pana cand toti iepurasii sunt");
        outtextxy(110,200,"in siguranta in gaurile negre");
        outtextxy( 130,220,"2.Iepurasii pot fi mutati doar prin salturi peste obstacole (alti iepurasi, vulpi");
        outtextxy( 110,240,"ciuperci sau combinatii a acestora). Vulpile pot fi mutate doar inainte sau inapoi");
        outtextxy( 110,260,"si nu pot sari peste obstacole.");
        outtextxy( 130,280,"3.Ai gasit o solutie cand toti iepurasii sunt in gaurile negre!");
        outtextxy( 130,300,"4.Exista o singura solutie pentru fiecare provocare.");
        settextstyle(8,0,2);
        outtextxy(250,350,"Distractie placuta!");
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Inapoi");
    }
    else if(l==1)
    {
        settextstyle(8, 0, 1);
        setbkcolor(WHITE);
        setcolor(BLACK);
        settextstyle(8,0,3);//8,10
        setbkcolor(WHITE);
        outtextxy(250,100, "INSTRUCTIONS-JUMPIN`");
        settextstyle(3,0,1);
        outtextxy( 130,180,"1.The object of the game is to move the rabbits and foxes around the gameboard ");
        outtextxy(110,200,"until all of the rabbits are safe in brown holes.");
        outtextxy( 130,220,"2.Rabbits can only move by jumping over obstacles (other rabbits, foxes,");
        outtextxy( 110,240,"mushrooms or a combination of these). Foxes can only move forward or backward");
        outtextxy( 110,260,"and cannot jump over obstacles.");
        outtextxy( 130,280,"3.You have found a solution when all of the rabbits are inside brown holes!");
        outtextxy( 130,300,"4.There is only one solution per challenge.");
        settextstyle(8,0,2);
        outtextxy(250,350,"Have fun!");
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Back");
    } else
    if(l==2)
    {
        settextstyle(8, 0, 1);
        setbkcolor(WHITE);
        setcolor(BLACK);
        settextstyle(8,0,3);//8,10
        setbkcolor(WHITE);
        outtextxy(250,100, "INSTRUCTIONS-JUMPIN`");
        settextstyle(3,0,1);
        outtextxy( 130,180,"1.Le but du jeu est de deplacer les lapins et les renards autour du plateau de jeu ");
        outtextxy(110,200,"jusqu'a ce que tous les lapins soient en securite dans les trous bruns.");
        outtextxy( 130,220,"2.Les lapins ne peuvent se deplacer qu'en sautant par-dessus des obstacles (autres");
        outtextxy( 110,240,"lapins, renards, champignons ou une combinaison de ceux-ci). Les renards ne peuvent");
        outtextxy( 110,260,"avancer ou reculer et ne peut pas sauter par-dessus les obstacles.");
        outtextxy( 130,280,"3.Vous avez trouve une solution lorsque tous les lapins sont a l'interieur de trous bruns");
        outtextxy( 130,300,"4.Il n'y a qu'une seule solution par defi.");
        settextstyle(8,0,2);
        outtextxy(250,350,"Amusez-vous bien!");
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 50, "Arriere");
    }
    int p,q;
    while (!oki)
    {
        getmouseclick(WM_LBUTTONDOWN, p, q);
        if(p>20 && p<90 && q>50 && q<70)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            meniu (b);
        }
    }

}
void start (int b)
{
    oki=false;
    int niv;
    setcurrentwindow(b);
    setfillstyle(1, WHITE);
    bar(0, 0, 800, 600);
    if(l==0)
    {
        settextstyle(8,0,3);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(300, 40, "Alege un nivel!");
        settextstyle(3,0,1);
        setbkcolor(LIGHTMAGENTA);
        outtextxy(40, 140, "Nivelul 1");
        outtextxy(40, 170, "Nivelul 2");
        outtextxy(40, 200, "Nivelul 3");
        outtextxy(40, 230, "Nivelul 4");
        outtextxy(40, 260, "Nivelul 5");
        outtextxy(40, 290, "Nivelul 6");
        outtextxy(40, 320, "Nivelul 7");
        outtextxy(40, 350, "Nivelul 8");
        outtextxy(40, 380, "Nivelul 9");
        outtextxy(40, 410, "Nivelul 10");
        outtextxy(40, 440, "Nivelul 11");
        outtextxy(40, 470, "Nivelul 12");
        outtextxy(140, 140, "Nivelul 13");
        outtextxy(140, 170, "Nivelul 14");
        outtextxy(140, 200, "Nivelul 15");
        outtextxy(140, 230, "Nivelul 16");
        outtextxy(140, 260, "Nivelul 17");
        outtextxy(140, 290, "Nivelul 18");
        outtextxy(140, 320, "Nivelul 19");
        outtextxy(140, 350, "Nivelul 20");
        outtextxy(140, 380, "Nivelul 21");
        outtextxy(140, 410, "Nivelul 22");
        outtextxy(140, 440, "Nivelul 23");
        outtextxy(140, 470, "Nivelul 24");
        outtextxy(240, 140, "Nivelul 25");
        outtextxy(240, 170, "Nivelul 26");
        outtextxy(240, 200, "Nivelul 27");
        outtextxy(240, 230, "Nivelul 28");
        outtextxy(240, 260, "Nivelul 29");
        outtextxy(240, 290, "Nivelul 30");
        outtextxy(240, 320, "Nivelul 31");
        outtextxy(240, 350, "Nivelul 32");
        outtextxy(240, 380, "Nivelul 33");
        outtextxy(240, 410, "Nivelul 34");
        outtextxy(240, 440, "Nivelul 35");
        outtextxy(240, 470, "Nivelul 36");
        outtextxy(340, 140, "Nivelul 37");
        outtextxy(340, 170, "Nivelul 38");
        outtextxy(340, 200, "Nivelul 39");
        outtextxy(340, 230, "Nivelul 40");
        outtextxy(340, 260, "Nivelul 41");
        outtextxy(340, 290, "Nivelul 42");
        outtextxy(340, 320, "Nivelul 43");
        outtextxy(340, 350, "Nivelul 44");
        outtextxy(340, 380, "Nivelul 45");
        outtextxy(340, 410, "Nivelul 46");
        outtextxy(340, 440, "Nivelul 47");
        outtextxy(340, 470, "Nivelul 48");
        outtextxy(440, 140, "Nivelul 49");
        outtextxy(440, 170, "Nivelul 50");
        outtextxy(440, 200, "Nivelul 51");
        outtextxy(440, 230, "Nivelul 52");
        outtextxy(440, 260, "Nivelul 53");
        outtextxy(440, 290, "Nivelul 54");
        outtextxy(440, 320, "Nivelul 55");
        outtextxy(440, 350, "Nivelul 56");
        outtextxy(440, 380, "Nivelul 57");
        outtextxy(440, 410, "Nivelul 58");
        outtextxy(440, 440, "Nivelul 59");
        outtextxy(440, 470, "Nivelul 60");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(LIGHTRED);
        outtextxy(40, 100, "Novice");
        outtextxy(140, 100, "Junior");
        outtextxy(240, 100, "Expert");
        outtextxy(340, 100, "Maestru");
        outtextxy(440, 100, "Vrajitor");
        readimagefile("vulpe.JPG", 600, 370, 752, 570);
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Inapoi");
    }
    else if(l==1)
    {
        settextstyle(8,0,3);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(300, 40, "Choose a level!");
        settextstyle(3,0,1);
        setbkcolor(LIGHTMAGENTA);
        outtextxy(40, 140, "Level 1");
        outtextxy(40, 170, "Level 2");
        outtextxy(40, 200, "Level 3");
        outtextxy(40, 230, "Level 4");
        outtextxy(40, 260, "Level 5");
        outtextxy(40, 290, "Level 6");
        outtextxy(40, 320, "Level 7");
        outtextxy(40, 350, "Level 8");
        outtextxy(40, 380, "Level 9");
        outtextxy(40, 410, "Level 10");
        outtextxy(40, 440, "Level 11");
        outtextxy(40, 470, "Level 12");
        outtextxy(140, 140, "Level 13");
        outtextxy(140, 170, "Level 14");
        outtextxy(140, 200, "Level 15");
        outtextxy(140, 230, "Level 16");
        outtextxy(140, 260, "Level 17");
        outtextxy(140, 290, "Level 18");
        outtextxy(140, 320, "Level 19");
        outtextxy(140, 350, "Level 20");
        outtextxy(140, 380, "Level 21");
        outtextxy(140, 410, "Level 22");
        outtextxy(140, 440, "Level 23");
        outtextxy(140, 470, "Level 24");
        outtextxy(240, 140, "Level 25");
        outtextxy(240, 170, "Level 26");
        outtextxy(240, 200, "Level 27");
        outtextxy(240, 230, "Level 28");
        outtextxy(240, 260, "Level 29");
        outtextxy(240, 290, "Level 30");
        outtextxy(240, 320, "Level 31");
        outtextxy(240, 350, "Level 32");
        outtextxy(240, 380, "Level 33");
        outtextxy(240, 410, "Level 34");
        outtextxy(240, 440, "Level 35");
        outtextxy(240, 470, "Level 36");
        outtextxy(340, 140, "Level 37");
        outtextxy(340, 170, "Level 38");
        outtextxy(340, 200, "Level 39");
        outtextxy(340, 230, "Level 40");
        outtextxy(340, 260, "Level 41");
        outtextxy(340, 290, "Level 42");
        outtextxy(340, 320, "Level 43");
        outtextxy(340, 350, "Level 44");
        outtextxy(340, 380, "Level 45");
        outtextxy(340, 410, "Level 46");
        outtextxy(340, 440, "Level 47");
        outtextxy(340, 470, "Level 48");
        outtextxy(440, 140, "Level 49");
        outtextxy(440, 170, "Level 50");
        outtextxy(440, 200, "Level 51");
        outtextxy(440, 230, "Level 52");
        outtextxy(440, 260, "Level 53");
        outtextxy(440, 290, "Level 54");
        outtextxy(440, 320, "Level 55");
        outtextxy(440, 350, "Level 56");
        outtextxy(440, 380, "Level 57");
        outtextxy(440, 410, "Level 58");
        outtextxy(440, 440, "Level 59");
        outtextxy(440, 470, "Level 60");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(LIGHTRED);
        outtextxy(40, 100, "Starter");
        outtextxy(140, 100, "Junior");
        outtextxy(240, 100, "Expert");
        outtextxy(340, 100, "Master");
        outtextxy(440, 100, "Wizard");
        readimagefile("vulpe.JPG", 600, 370, 752, 570);
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Back");
    } else
    if(l==2)
    {
        settextstyle(8,0,3);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(300, 40, "Choisis un niveau!");
        settextstyle(3,0,1);
        setbkcolor(LIGHTMAGENTA);
        outtextxy(40, 140, "Niveau 1");
        outtextxy(40, 170, "Niveau 2");
        outtextxy(40, 200, "Niveau 3");
        outtextxy(40, 230, "Niveau 4");
        outtextxy(40, 260, "Niveau 5");
        outtextxy(40, 290, "Niveau 6");
        outtextxy(40, 320, "Niveau 7");
        outtextxy(40, 350, "Niveau 8");
        outtextxy(40, 380, "Niveau 9");
        outtextxy(40, 410, "Niveau 10");
        outtextxy(40, 440, "Niveau 11");
        outtextxy(40, 470, "Niveau 12");
        outtextxy(140, 140, "Niveau 13");
        outtextxy(140, 170, "Niveau 14");
        outtextxy(140, 200, "Niveau 15");
        outtextxy(140, 230, "Niveau 16");
        outtextxy(140, 260, "Niveau 17");
        outtextxy(140, 290, "Niveau 18");
        outtextxy(140, 320, "Niveau 19");
        outtextxy(140, 350, "Niveau 20");
        outtextxy(140, 380, "Niveau 21");
        outtextxy(140, 410, "Niveau 22");
        outtextxy(140, 440, "Niveau 23");
        outtextxy(140, 470, "Niveau 24");
        outtextxy(240, 140, "Niveau 25");
        outtextxy(240, 170, "Niveau 26");
        outtextxy(240, 200, "Niveau 27");
        outtextxy(240, 230, "Niveau 28");
        outtextxy(240, 260, "Niveau 29");
        outtextxy(240, 290, "Niveau 30");
        outtextxy(240, 320, "Niveau 31");
        outtextxy(240, 350, "Niveau 32");
        outtextxy(240, 380, "Niveau 33");
        outtextxy(240, 410, "Niveau 34");
        outtextxy(240, 440, "Niveau 35");
        outtextxy(240, 470, "Niveau 36");
        outtextxy(340, 140, "Niveau 37");
        outtextxy(340, 170, "Niveau 38");
        outtextxy(340, 200, "Niveau 39");
        outtextxy(340, 230, "Niveau 40");
        outtextxy(340, 260, "Niveau 41");
        outtextxy(340, 290, "Niveau 42");
        outtextxy(340, 320, "Niveau 43");
        outtextxy(340, 350, "Niveau 44");
        outtextxy(340, 380, "Niveau 45");
        outtextxy(340, 410, "Niveau 46");
        outtextxy(340, 440, "Niveau 47");
        outtextxy(340, 470, "Niveau 48");
        outtextxy(440, 140, "Niveau 49");
        outtextxy(440, 170, "Niveau 50");
        outtextxy(440, 200, "Niveau 51");
        outtextxy(440, 230, "Niveau 52");
        outtextxy(440, 260, "Niveau 53");
        outtextxy(440, 290, "Niveau 54");
        outtextxy(440, 320, "Niveau 55");
        outtextxy(440, 350, "Niveau 56");
        outtextxy(440, 380, "Niveau 57");
        outtextxy(440, 410, "Niveau 58");
        outtextxy(440, 440, "Niveau 59");
        outtextxy(440, 470, "Niveau 60");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(LIGHTRED);
        outtextxy(40, 100, "Débutant");
        outtextxy(140, 100, "Junior");
        outtextxy(240, 100, "Expert");
        outtextxy(340, 100, "Maitre");
        outtextxy(440, 100, "Magicien");
        readimagefile("vulpe.JPG", 600, 370, 752, 570);
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Arriere");
    }
    int x,y, p, q;
    float i,j;
    clearmouseclick(WM_LBUTTONDOWN);
    while(!oki)
    {
        getmouseclick(WM_LBUTTONDOWN, x, y);
        if(x>20 && x<90 && y>30 && y<60)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            meniu (b);
        }
        if (x>=40 && x<=600 && y>=140 && y<=500)
        {

            i=(float)(x-40)/100;
            if(i!=(int)i)
                q=(int) i;
            else
                q=i;
            j=(y-140)/30;
            if(j!=(int)j)
                p=(int) j;
            else
                p=j;
            niv= q*12+p;
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            joc(b, niv);
        }
    }

}
bool petabla(int x, int y)
{
}
int stanga,sus,width,height,latura,numar, dx, dy;
bool gata;
void initializariDimensiuni()
{
    width=400;
    height=400;
    latura=70;
    sus=(600-5*latura)/2;
    stanga=(800-5*latura)/2;;
    dx=(800-5*latura)/2;
    dy=(600-5*latura)/2;
}
void stergePiesa(int linia, int coloana,int m)
{
    int x1,y1,x2,y2,xmijloc,ymijloc;
    int latura=70;
    int dx=(800-5*latura)/2;
    int dy=(600-5*latura)/2;
    int d1=dx+(coloana-1)*latura;
    int d2=dy+(linia-1)*latura;
    if(t==0)
        readimagefile("nimic.JPG", d1, d2, d1+latura, d2+latura);
    else{
        if(t==1){
             int x1,y1,x2,y2,xmijloc,ymijloc, raza=25;
            int dx=(800-5*latura)/2;
            int dy=(600-5*latura)/2;
            setfillstyle(SOLID_FILL,GREEN);
            floodfill((coloana-1)*latura +dx+latura/2,(linia-1)*latura+dy+latura/2 ,GREEN);// fac din nou verde cu cerculetul ala
            fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, raza-5, raza-5);
        }
    }
}
void deseneazagaura(int linia, int coloana, int m)
{
    int d1=dx+(coloana-1)*latura;
    int d2=dy+(linia-1)*latura;
    if(t==0)
        readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
    else{
        if(t==1){
                int raza=25;
            setfillstyle(SOLID_FILL, BLACK);
            fillellipse((linia-1)*latura+dx+latura/2, (coloana-1-m)*latura+dy+latura/2, raza, raza);
        }
    }
}
void deseneazavulpe2(int j, int i, int m){
    initializariDimensiuni();
                    patrat(dx+(i-1)*lat+50,dy+(j-1-m)*lat+35, 10);
                   setfillstyle(SOLID_FILL, WHITE);
                    floodfill(dx+(i-1)*lat+50+2,dy+(j-1-m)*lat+35+2, WHITE);
                  //  floodfill(200+(i-1)*80+4,200+(j-1)*80+36 , WHITE);
                    dreptunghi(dx+(i-1)*lat, dy+(j-1-m)*lat+25,50 , 30);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-1)*lat+30+1, dy+(j-1-m)*lat+25+1, WHITE);
                    setfillstyle(1, GREEN);
                    bar(dx+(i-1)*lat+1, dy+(j-1-m)*lat+1, dx+(i)*lat-1, dy+(j-m)*lat-1);
                    fillellipse(dx+(i-2)*lat+30+70+20,dy+(j-1-m)*lat+25+15 ,25,25);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-2)*lat+30+70+20+1,100+(j-1-m)*lat+25+15+1, WHITE );
                    int d, r;
                    d=(i-1)*lat+dx+lat/2+15;
                    r=(j-1-m)*lat+dy+lat/2+20;
                    setfillstyle(SOLID_FILL, BLACK);//ochii
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d-5,r-30, 4, 4);
                    fillellipse(d+13,r-15, 2, 2);
}
void deseneazaPiesagaura(int linia, int coloana, int cod, int m)
{
    int x1,y1,x2,y2,xmijloc,ymijloc;
    x1=stanga+latura*(coloana-1);
    y1=sus+latura*(linia-1);
    x2=x1+latura;
    y2=y1+latura;
    xmijloc=(x1+x2)/2;
    ymijloc=(y1+y2)/2;
    if(cod==3)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasalbgaura.JPG", d1, d2, d1+latura, d2+latura);
         else
            if(t==1){
                int raza=25;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse((coloana-1)*latura+dx+latura/2, (linia-1-m)*latura+dy+latura/2, raza, raza);
                int ra=18, r, d;
                setfillstyle(SOLID_FILL, WHITE);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
        }
    }
    if(cod==4)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasmarogaura.JPG", d1, d2, d1+latura, d2+latura);
        else{
            if(t==1){
                int raza=25;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse((coloana-1)*latura+dx+latura/2, (linia-1-m)*latura+dy+latura/2, raza, raza);
                int ra=18, r, d;
                setfillstyle(SOLID_FILL, BROWN);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
                fillellipse(d,r+5, 2, 2);
            }
        }
    }
    if(cod==5)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasgrigaura.JPG", d1, d2, d1+latura, d2+latura);
        else{
            if(t==1){
               int raza=25;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse((coloana-1)*latura+dx+latura/2, (linia-1-m)*latura+dy+latura/2, raza, raza);
                int ra=18, r, d;
                setfillstyle(SOLID_FILL, DARKGRAY);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
            }
        }
    }

}
void deseneazaPiesa(int linia, int coloana, int cod, int m) //desenez din nou piesa
{
    int x1,y1,x2,y2,xmijloc,ymijloc;
    x1=stanga+latura*(coloana-1);
    y1=sus+latura*(linia-1);
    x2=x1+latura;
    y2=y1+latura;
    xmijloc=(x1+x2)/2;
    ymijloc=(y1+y2)/2;
    if(cod>10)
    {
        cod=cod%10;
    }
    if(cod==3)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasalb.JPG", d1, d2, d1+latura, d2+latura);
        else{
            if(t==1){
                 int ra=18, r, d;
                setfillstyle(SOLID_FILL, WHITE);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
            }
        }
    }
    if(cod==4)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasmaro.JPG", d1, d2, d1+latura, d2+latura);
        else{
            if(t==1){
                int ra=18, r, d;
                setfillstyle(SOLID_FILL, BROWN);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
                fillellipse(d,r+5, 2, 2);
            }
        }
    }
    if(cod==5)
    {
        int d1=dx+(coloana-1)*latura;
        int d2=dy+(linia-1)*latura;
        if(t==0)
            readimagefile("iepurasgri.JPG", d1, d2, d1+latura, d2+latura);
        else{
            if(t==1){
                 int ra=18, r, d;
                setfillstyle(SOLID_FILL, DARKGRAY);
                fillellipse((coloana-1)*latura+dx+latura/2,(linia-1)*latura+dy+latura/2, ra, ra);
                d=(coloana-1)*latura+dx+latura/2;
                r=(linia-1)*latura+dy+latura/2;
                setfillstyle(SOLID_FILL, BLACK);
                fillellipse(d-5,r-5, 4, 4);
                fillellipse(d+5,r-5, 4, 4);
                fillellipse(d,r+5, 2, 2);
            }
        }
    }
}
bool inInterior(int x, int y, int x1, int y1, int x2, int y2)
{
    return x1<=x && x<=x2 && y1<=y && y<=y2;
}
void mutarePiesa(int a[][6], int nr, int m, int b)
{
    initializariDimensiuni();
    int i, j;
    int i1, i2, j1, j2, cod1, cod2;
    bool g=false;
    clearmouseclick(WM_LBUTTONDOWN);
    setbkcolor(BLACK);
    dreptunghi(275, 25, 250, 60);
    int oriz, vert, lat, raza, dx, dy, n=5;
    oriz=800;
    vert=600;
    lat=70;
    raza=25;
    dx=(oriz-n*lat)/2;
    dy=(vert-n*lat)/2;
    int timpstart=time(NULL);
    int linia1=-1;
    int linia2=-1;
    int cod=-1, coloana1=-1, coloana2=-1;
    int timpacum=time(NULL);
    while(!castigat(nr, a, m))
    {
         //delay(1000);
      //  timer++;
      //  itoa(timer, time, 10);
        //outtextxy(500, 100, time);
        timpacum=time(NULL)-timpstart;
        char aux[100];
        itoa(timpacum,aux,10);
        outtextxy(700, 100, aux);
        setbkcolor(BLACK);
        int culoareant=getcolor();
        settextstyle(3, 0, 2);
        //setcolor(BLACK);
        setbkcolor(BLACK);
      /*  if (l==0)
            outtextxy(300, 50, "MUTARE INCORECTA" );
        else if (l==1)
            outtextxy(300, 50, "INCORRECT MOVE" );
            else if (l==2)
            outtextxy(280, 50, "MOUVEMENT INCORRECT" ); */
        setbkcolor(culoareant);
        clearmouseclick(WM_LBUTTONDOWN);
        int x, y;
        while(!ismouseclick(WM_LBUTTONDOWN))
        {
            setbkcolor(BLACK);
            timpacum=time(NULL)-timpstart;
            itoa(timpacum,aux,10);
            outtextxy(700, 100, aux);
        }
        getmouseclick(WM_LBUTTONDOWN, x, y);
        if(x>20 && x<90 && y>30 && y<60)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            start (b);
        }
        else if(x>20 && x<110 && y>130 && y<160)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            if(a[linia1+m][coloana1]==0 ){
                if(a[linia2+m][coloana2]==3 || a[linia2+m][coloana2]==4 || a[linia2+m][coloana2]==5){
                    deseneazaPiesa(linia1, coloana1, a[linia2+m][coloana2], m);
                    stergePiesa(linia2, coloana2,m);
                    a[linia1+m][coloana1]=a[linia2+m][coloana2];
                    a[linia2+m][coloana2]=0;
            }
                else{
                    if(a[linia2+m][coloana2]==6){
                        stergePiesa(linia2, coloana2, m);
                        stergePiesa(linia2, coloana2+1, m);
                        a[linia2+m][coloana2]=0;
                        a[linia2+m][coloana2+1]=0;
                        int d1=dx+(coloana1-1)*latura;
                        int d2=dy+(linia1-1)*latura;
                        if(t==0)
                            readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                        a[linia1+m][coloana1]=6;
                        a[linia1+m][coloana1+1]=7;

                }
                    else{
                        if(a[linia2+m][coloana2]==8){
                            stergePiesa(linia2, coloana2, m);
                            stergePiesa(linia2+1, coloana2, m);
                            a[linia2+m][coloana2]=0;
                            a[linia2+m+1][coloana2]=0;
                            int d1=dx+(coloana1-1)*latura;
                            int d2=dy+(linia1-1)*latura;
                            if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                            a[linia1+m][coloana1]=8;
                            a[linia1+m+1][coloana1]=9;
                        }
                        else{
                            if(a[linia2+m][coloana2]==9){
                                stergePiesa(linia2, coloana2, m);
                                stergePiesa(linia2-1, coloana2, m);
                                a[linia2+m][coloana2]=0;
                                a[linia2+m-1][coloana2]=0;
                                int d1=dx+(coloana1-1)*latura;
                                int d2=dy+(linia1-2)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia1+m][coloana1]=9;
                                a[linia1+m-1][coloana1]=8;
                            }
                            else{
                                if(a[linia2+m][coloana2]==7){
                                    stergePiesa(linia2, coloana2, m);
                                    stergePiesa(linia2, coloana2-1, m);
                                    a[linia2+m][coloana2]=0;
                                    a[linia2+m][coloana2-1]=0;
                                    int d1=dx+(coloana1-2)*latura;
                                    int d2=dy+(linia1-1)*latura;
                                    if(t==0)
                                        readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                                    a[linia1+m][coloana1]=7;
                                    a[linia1+m][coloana1-1]=6;
                                }
                            }
                        }
                    }
            }
            }
            else{
                if(a[linia1+m][coloana1]==2){
                        if(a[linia2+m][coloana2]==3 || a[linia2+m][coloana2]==4 || a[linia2+m][coloana2]==5){
                            deseneazaPiesagaura(linia1, coloana1, a[linia2+m][coloana2], m);
                            a[linia1+m][coloana1]=20+a[linia2+m][coloana2];
                            a[linia2+m][coloana2]=0;
                            stergePiesa(linia2, coloana2, m);
                        }
                        else{
                            if(a[linia2+m][coloana2]>10){
                            deseneazaPiesagaura(linia1, coloana1, a[linia2+m][coloana2]%10, m);
                            a[linia1+m][coloana1]=20+a[linia2+m][coloana2]%10;
                            a[linia2+m][coloana2]=2;
                            int d1=dx+(linia2-1)*latura;
                            int d2=dy+(coloana2-1)*latura;
                                if(t==0)
                                    readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
                                else{
                                    if(t==1){
                                        int ra=25;
                                        setfillstyle(SOLID_FILL, BLACK);
                                        fillellipse((coloana1-1)*latura+dx+latura/2,(linia1-1)*latura+dy+latura/2, ra, ra);
                                    }
                                }
                            }
                        }
                }
                else{
                    if(a[linia1+m][coloana1]==6){
                        stergePiesa(linia1, coloana1, m);
                        stergePiesa(linia2, coloana2, m);
                        a[linia1+m][coloana1]=0;
                        int d1=dx+(coloana1-2)*latura;
                        int d2=dy+(linia1-1)*latura;
                        if(t==0)
                            readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                        a[linia1+m][coloana1-1]=6;
                        a[linia1+m][coloana1]=7;
                        a[linia2+m][coloana2]=0;
                       // cout<<a[2+m][3]<<" "<<a[2+m][4];
                        //cout<<endl;
                    }
                    else{
                        if(a[linia1+m][coloana1]==7){
                            a[linia2+m][coloana2]=0;
                            stergePiesa(linia2, coloana2, m);
                            int d1=dx+(coloana1-1)*latura;
                            int d2=dy+(linia1-1)*latura;
                            if(t==0)
                                readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                            a[linia1+m][coloana1]=6;
                            a[linia1+m][coloana1+1]=7;

                        }
                        else{
                            if(a[linia1+m][coloana1]==8){
                                stergePiesa(linia1, coloana1, m);
                                stergePiesa(linia2, coloana2, m);
                                a[linia1+m][coloana1]=0;
                                int d1=dx+(coloana1-1)*latura;
                                int d2=dy+(linia1-2)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia1+m-1][coloana1]=8;
                                a[linia1+m][coloana1]=9;
                                a[linia2+m][coloana2]=0;
                            }
                            else{
                                if(a[linia1+m][coloana1]==9){
                                    a[linia2+m][coloana2]=0;
                                    stergePiesa(linia2, coloana2, m);
                                    int d1=dx+(coloana1-1)*latura;
                                    int d2=dy+(linia1-1)*latura;
                                    if(t==0)
                                        readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                    a[linia1+m][coloana1]=8;
                                    a[linia1+m+1][coloana1]=9;
                                }
                            }
                        }
                    }
                }
            }
           // start (b);
        } //AICI E BUTONUL PENTRU ANULEAZA
        else
        {
              linia1=(y-sus)/latura+1;
             coloana1=(x-stanga)/latura+1;
             cod=a[linia1+m][coloana1];
            //cout<<linia1<<" "<<coloana1<<" "<<cod<<" ";
            int g2=0;
            g2=castigat(nr, a, m);
            cout<<a[linia1+m][coloana1]<<" ";
            cout<<endl;
            if(cod==0 || cod==1 || cod==2)  //nu poti muta ciupercile si gaurile
            {
                settextstyle(3, 0, 2);
                setbkcolor(BLACK);
                if (l==0)
                    outtextxy(300, 50, "MUTARE INCORECTA" );
                else if (l==1)
                    outtextxy(300, 50, "INCORRECT MOVE" );
                    else if (l==2)
                        outtextxy(280, 50, "MOUVEMENT INCORRECT" );
            setbkcolor(BLACK);
            timpacum=time(NULL)-timpstart;
            itoa(timpacum,aux,10);
            outtextxy(700, 100, aux);
            }
            else
            {
                clearmouseclick(WM_LBUTTONDOWN);
                while(!ismouseclick(WM_LBUTTONDOWN))
                {
                    setbkcolor(BLACK);
                    timpacum=time(NULL)-timpstart;
                    itoa(timpacum,aux,10);
                    outtextxy(700, 100, aux);
                }
                if(x>20 && x<110 && y>130 && y<160)
        {
            PlaySound(TEXT("click.wav"), NULL, SND_SYNC);
            if(a[linia1+m][coloana1]==0 ){
                if(a[linia2+m][coloana2]==3 || a[linia2+m][coloana2]==4 || a[linia2+m][coloana2]==5){
                    deseneazaPiesa(linia1, coloana1, a[linia2+m][coloana2], m);
                    stergePiesa(linia2, coloana2,m);
                    a[linia1+m][coloana1]=a[linia2+m][coloana2];
                    a[linia2+m][coloana2]=0;
            }
                else{
                    if(a[linia2+m][coloana2]==6){
                        stergePiesa(linia2, coloana2, m);
                        stergePiesa(linia2, coloana2+1, m);
                        a[linia2+m][coloana2]=0;
                        a[linia2+m][coloana2+1]=0;
                        int d1=dx+(coloana1-1)*latura;
                        int d2=dy+(linia1-1)*latura;
                        if(t==0)
                            readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                        a[linia1+m][coloana1]=6;
                        a[linia1+m][coloana1+1]=7;

                }
                    else{
                        if(a[linia2+m][coloana2]==8){
                            stergePiesa(linia2, coloana2, m);
                            stergePiesa(linia2+1, coloana2, m);
                            a[linia2+m][coloana2]=0;
                            a[linia2+m+1][coloana2]=0;
                            int d1=dx+(coloana1-1)*latura;
                            int d2=dy+(linia1-1)*latura;
                            if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                            a[linia1+m][coloana1]=8;
                            a[linia1+m+1][coloana1]=9;
                        }
                        else{
                            if(a[linia2+m][coloana2]==9){
                                stergePiesa(linia2, coloana2, m);
                                stergePiesa(linia2-1, coloana2, m);
                                a[linia2+m][coloana2]=0;
                                a[linia2+m-1][coloana2]=0;
                                int d1=dx+(coloana1-1)*latura;
                                int d2=dy+(linia1-2)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia1+m][coloana1]=9;
                                a[linia1+m-1][coloana1]=8;
                            }
                            else{
                                if(a[linia2+m][coloana2]==7){
                                    stergePiesa(linia2, coloana2, m);
                                    stergePiesa(linia2, coloana2-1, m);
                                    a[linia2+m][coloana2]=0;
                                    a[linia2+m][coloana2-1]=0;
                                    int d1=dx+(coloana1-2)*latura;
                                    int d2=dy+(linia1-1)*latura;
                                    if(t==0)
                                        readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                                    a[linia1+m][coloana1]=7;
                                    a[linia1+m][coloana1-1]=6;
                                }
                            }
                        }
                    }
            }
            }
            else{
                if(a[linia1+m][coloana1]==2){
                        if(a[linia2+m][coloana2]==3 || a[linia2+m][coloana2]==4 || a[linia2+m][coloana2]==5){
                            deseneazaPiesagaura(linia1, coloana1, a[linia2+m][coloana2], m);
                            a[linia1+m][coloana1]=20+a[linia2+m][coloana2];
                            a[linia2+m][coloana2]=0;
                            stergePiesa(linia2, coloana2, m);
                        }
                        else{
                            if(a[linia2+m][coloana2]>10){
                            deseneazaPiesagaura(linia1, coloana1, a[linia2+m][coloana2]%10, m);
                            a[linia1+m][coloana1]=20+a[linia2+m][coloana2]%10;
                            a[linia2+m][coloana2]=2;
                            int d1=dx+(linia2-1)*latura;
                            int d2=dy+(coloana2-1)*latura;
                                if(t==0)
                                    readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
                                else{
                                    if(t==1){
                                        int ra=25;
                                        setfillstyle(SOLID_FILL, BLACK);
                                        fillellipse((coloana1-1)*latura+dx+latura/2,(linia1-1)*latura+dy+latura/2, ra, ra);
                                    }
                                }
                            }
                        }
                }
                else{
                    if(a[linia1+m][coloana1]==6){
                        stergePiesa(linia1, coloana1, m);
                        stergePiesa(linia2, coloana2, m);
                        a[linia1+m][coloana1]=0;
                        int d1=dx+(coloana1-2)*latura;
                        int d2=dy+(linia1-1)*latura;
                        if(t==0)
                            readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                        a[linia1+m][coloana1-1]=6;
                        a[linia1+m][coloana1]=7;
                        a[linia2+m][coloana2]=0;
                       // cout<<a[2+m][3]<<" "<<a[2+m][4];
                        //cout<<endl;
                    }
                    else{
                        if(a[linia1+m][coloana1]==7){
                            a[linia2+m][coloana2]=0;
                            stergePiesa(linia2, coloana2, m);
                            int d1=dx+(coloana1-1)*latura;
                            int d2=dy+(linia1-1)*latura;
                            if(t==0)
                                readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                            a[linia1+m][coloana1]=6;
                            a[linia1+m][coloana1+1]=7;

                        }
                        else{
                            if(a[linia1+m][coloana1]==8){
                                stergePiesa(linia1, coloana1, m);
                                stergePiesa(linia2, coloana2, m);
                                a[linia1+m][coloana1]=0;
                                int d1=dx+(coloana1-1)*latura;
                                int d2=dy+(linia1-2)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia1+m-1][coloana1]=8;
                                a[linia1+m][coloana1]=9;
                                a[linia2+m][coloana2]=0;
                            }
                            else{
                                if(a[linia1+m][coloana1]==9){
                                    a[linia2+m][coloana2]=0;
                                    stergePiesa(linia2, coloana2, m);
                                    int d1=dx+(coloana1-1)*latura;
                                    int d2=dy+(linia1-1)*latura;
                                    if(t==0)
                                        readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                    a[linia1+m][coloana1]=8;
                                    a[linia1+m+1][coloana1]=9;
                                }
                            }
                        }
                    }
                }
            }
           // start (b);
        } //AICI E BUTONUL PENTRU ANULEAZA
        else{
                setbkcolor(BLACK);
                timpacum=time(NULL)-timpstart;
                itoa(timpacum,aux,10);
                outtextxy(700, 100, aux);
                getmouseclick(WM_LBUTTONDOWN, x, y);
                  linia2=(y-sus)/latura+1;
                 coloana2=(x-stanga)/latura+1;
                 cout<<a[linia2+m][coloana2];
                cout<<endl;
                // cout<<linia2<<" "<<coloana2<<" "<<cod<<" ";
                int cod1=a[linia1+m][coloana1];
                clearmouseclick(WM_LBUTTONDOWN);
                if(a[linia1+m][coloana1]!=6 && a[linia1+m][coloana1]!=7 && a[linia1+m][coloana1]!=8&& a[linia1+m][coloana1]!=9)
                {
                    int g=mutarecorectaiepuri(a, linia1, linia2, coloana1, coloana2, m, cod1);
                    if(g==0)
                    {
                        settextstyle(3, 0, 2);
                        setbkcolor(BLACK);
                        if (l==0){
                            outtextxy(300, 50, "MUTARE INCORECTA" );
                            PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                        else if (l==1){
                            outtextxy(300, 50, "INCORRECT MOVE" );
                            PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                        else if (l==2)
                            {
                             outtextxy(280, 50, "MOUVEMENT INCORRECT" );
                               PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                        setbkcolor(BLACK);
                        timpacum=time(NULL)-timpstart;
                        itoa(timpacum,aux,10);
                        outtextxy(700, 100, aux);
                    }
                    else
                    {
                        settextstyle(3, 0, 2);
                        setbkcolor(WHITE);
                        setfillstyle(SOLID_FILL, BLACK);
                        floodfill(301, 51, WHITE);
                        if (l==0)
                            outtextxy(300, 50, "MUTARE INCORECTA" );
                        else if (l==1)
                            outtextxy(300, 50, "INCORRECT MOVE" );
                            else if (l==2)
                                outtextxy(280, 50, "MOUVEMENT INCORRECT" );
                        if(a[linia2+m][coloana2]==0)
                        {

                            a[linia2+m][coloana2]=a[linia1+m][coloana1]%10;//daca este mai mare decat 10 inseamna ca era un iepuras intr o gaura si o sa luam cu noi si gaura daca nu punem %10
                            stergePiesa(linia1,coloana1,m);
                            cod=a[linia1+m][coloana1]%10;
                            deseneazaPiesa(linia2,coloana2,cod, m);
                            if(a[linia1+m][coloana1]>10) //sa vedem daca era un iepuras intr o gaura
                            {
                                //cout<<"da";
                                a[linia1+m][coloana1]=2;//lasam doar gaura
                                int d1=dx+(linia1-1)*latura;
                                int d2=dy+(coloana1-1)*latura;
                                if(t==0)
                                    readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
                                else{
                                    if(t==1){
                                        int ra=25;
                                        setfillstyle(SOLID_FILL, BLACK);
                                        fillellipse((coloana1-1)*latura+dx+latura/2,(linia1-1)*latura+dy+latura/2, ra, ra);
                                    }
                                }
                            }
                            else
                            {
                                a[linia1+m][coloana1]=0;
                            }
                        }
                        else
                        {
                            if(a[linia2+m][coloana2]==2)
                            {
                                a[linia2+m][coloana2]=2*10+a[linia1+m][coloana1]%10;// sa diferentiem unde este un iepuras intr o gaura de gaura simpla si de iepuras
                                stergePiesa(linia1,coloana1, m);
                                //cout<<"nu";
                                deseneazaPiesagaura(linia2,coloana2,cod, m);
                                if(a[linia1+m][coloana1]>10)
                                {
                                    a[linia1+m][coloana1]=2;
                                    int d1=dx+(linia1-1)*latura;
                                    int d2=dy+(coloana1-1)*latura;
                                    if(t==0)
                                        readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
                                    else{
                                        if(t==1){
                                            int ra=25;
                                            setfillstyle(SOLID_FILL, BLACK);
                                            fillellipse((coloana1-1)*latura+dx+latura/2,(linia1-1)*latura+dy+latura/2, ra, ra);
                                        }
                                    }
                                }
                                else
                                {
                                    a[linia1+m][coloana1]=0;
                                }
                            }
                        }
                    }
                }
                else
                {
                    int cod1=a[linia1+m][coloana1];
                    int g=mutarecorectavulpi(a, linia1, linia2, coloana1, coloana2, m, cod1);
                    if(a[linia1+m][coloana1]==6)
                    {
                        if(a[linia2+m][coloana2]==7)
                            g=1;
                        else if(a[linia2+m][coloana2]!=0)
                            g=0;
                    }
                    if(a[linia1+m][coloana1]==7)
                    {
                        if(a[linia2+m][coloana2]==6)
                            g=1;
                        else if(a[linia2+m][coloana2]!=0)
                            g=0;
                    }
                    if(a[linia1+m][coloana1]==7)
                    {
                        if(a[linia2+m][coloana2]==0 && a[linia2+m][coloana2-1]==6)
                            g=1;
                    }
                    if(a[linia1+m][coloana1]==8)
                    {
                        if(a[linia2+m][coloana2]==9)
                            g=1;
                        else if(a[linia2+m][coloana2]!=0)
                            g=0;
                    }
                    if(a[linia1+m][coloana1]==9)
                    {
                        if(a[linia2+m][coloana2]==8)
                            g=1;
                        else if(a[linia2+m][coloana2]!=0)
                            g=0;
                    }

                    if(a[linia1+m][coloana1]==6 ||a[linia1+m][coloana1]==7)
                        if(linia1+m!=linia2+m)
                            g=0;
                    if(a[linia1+m][coloana1]==8||a[linia1+m][coloana1]==9)
                        if(coloana1!=coloana2)
                            g=0;
                    if(a[linia1+m][coloana1]==6 || a[linia1+m][coloana1]==7)
                        if(coloana2>5 || coloana2<1)
                            g=0;
                    if(a[linia1+m][coloana1]==8 || a[linia1+m][coloana1]==9)
                        if(linia2>5 || linia2<1)
                            g=0;
                    if(a[linia1+m][coloana1]==8 && a[linia2+m][coloana2]==9 &&linia2+1>5)
                        g=0;
                    if(a[linia1+m][coloana1]==6)
                        if(linia2+1>5)
                            g=0;
                    if(a[linia1+m][coloana1]==7)
                        if(coloana2-1<1)
                            g=0;
                    if(a[linia1+m][coloana1]==9)
                        if(linia2-1<1)
                            g=0;
                    if(a[linia1+m][coloana1]==6 && coloana2<coloana1 && a[linia2+m][coloana2]==7)
                        g=0;
                    if(a[linia1+m][coloana1]==7 && coloana2>coloana1 &&a[linia2+m][coloana2]==6)
                        g=0;
                    if(a[linia1+m][coloana1]==6 && a[linia2+m][coloana2]==7 && coloana2==5)
                        g=0;
                    //if(a[linia1+m][coloana1]==7)
                    if(g==0)
                    {
                        settextstyle(3, 0, 2);
                        setbkcolor(BLACK);
                        if (l==0){
                            outtextxy(300, 50, "MUTARE INCORECTA" );
                            PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                        else if (l==1){
                            outtextxy(300, 50, "INCORRECT MOVE" );
                            PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                         else if (l==2){
                            outtextxy(280, 50, "MOUVEMENT INCORRECT" );
                            PlaySound(TEXT("wrong.wav"), NULL, SND_SYNC);
                            delay(500);
                        }
                    }
                    else
                    {
                        settextstyle(3, 0, 2);
                        setbkcolor(WHITE);
                        if (l==0)
                            outtextxy(300, 50, "MUTARE INCORECTA" );
                        else if (l==1)
                            outtextxy(300, 50, "INCORRECT MOVE" );
                        if(a[linia1+m][coloana1]==6)
                        {
                            stergePiesa(linia1, coloana1, m);
                            stergePiesa(linia1, coloana1+1, m);
                            a[linia1+m][coloana1]=0;
                            a[linia1+m][coloana1+1]=0;
                            int d1=dx+(coloana2-1)*latura;
                            int d2=dy+(linia2-1)*latura;
                            if(t==0)
                                readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                            a[linia2+m][coloana2]=6;
                            a[linia2+m][coloana2+1]=7;

                        }
                        else
                        {
                            if(a[linia1+m][coloana1]==7)
                            {
                                stergePiesa(linia1, coloana1, m);
                                stergePiesa(linia1, coloana1-1, m);
                                a[linia1+m][coloana1]=0;
                                a[linia1+m][coloana1-1]=0;
                                int d1=dx+(coloana2-2)*latura;
                                int d2=dy+(linia2-1)*latura;
                                if(t==0)
                                    readimagefile("vulpe2.JPG", d1, d2, d1+2*latura, d2+latura);
                                a[linia2+m][coloana2]=7;
                                a[linia2+m][coloana2-1]=6;
                            }
                            else if(a[linia1+m][coloana1]==8)
                            {
                                stergePiesa(linia1, coloana1, m);
                                stergePiesa(linia1+1, coloana1, m);
                                a[linia1+m][coloana1]=0;
                                a[linia1+m+1][coloana1]=0;
                                int d1=dx+(coloana2-1)*latura;
                                int d2=dy+(linia2-1)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia2+m][coloana2]=8;
                                a[linia2+m+1][coloana2]=9;
                            }
                            else if(a[linia1+m][coloana1]==9)
                            {
                                stergePiesa(linia1-1, coloana1, m);
                                stergePiesa(linia1, coloana1, m);
                                a[linia1+m-1][coloana1]=0;
                                a[linia1+m][coloana1]=0;
                                int d1=dx+(coloana2-1)*latura;
                                int d2=dy+(linia2-2)*latura;
                                if(t==0)
                                    readimagefile("vulpe1.JPG", d1, d2, d1+latura, d2+2*latura);
                                a[linia2+m][coloana2]=9;
                                a[linia2+m-1][coloana2]=8;
                            }
                        }

                    }
                }
                setbkcolor(BLACK);
            timpacum=time(NULL)-timpstart;
            itoa(timpacum,aux,10);
            outtextxy(700, 100, aux);
                for(int j=1+m; j<=5+m; j++)
                    for(int i=1; i<=5; i++)
                    {
                        int raza=25, lat=70;
                        if(t==0){
                        if(a[j][i]==2)
                        {
                            int d1=dx+(i-1)*latura;
                            int d2=dy+(j-1-m)*latura;
                            if(t==0)
                                readimagefile("gaura.JPG", d1, d2, d1+latura, d2+latura);
                            else{
                                if(t==1){
                                    int raza=25;
                                    setfillstyle(SOLID_FILL, BLACK);
                                fillellipse((i-1)*latura+dx+latura/2, (j-1-m)*latura+dy+latura/2, raza, raza);
                                }
                            }
                        }
                        if(a[j][i]==23)
                        {
                            int d1=dx+(i-1)*latura;
                            int d2=dy+(j-1-m)*latura;
                            if(t==0)
                                readimagefile("iepurasalbgaura.JPG", d1, d2, d1+latura, d2+latura);
                            else{
                                if(t==1){
                                        int raza=25;
                                    setfillstyle(SOLID_FILL, BLACK);
                                    fillellipse((i-1)*latura+dx+latura/2, (j-1-m)*latura+dy+latura/2, raza, raza);
                                    int ra=18, r, d;
                                    setfillstyle(SOLID_FILL, WHITE);
                                    fillellipse((i-1)*latura+dx+latura/2,(j-1-m)*latura+dy+latura/2, ra, ra);
                                    d=(i-1)*latura+dx+latura/2;
                                    r=(j-1-m)*latura+dy+latura/2;
                                    setfillstyle(SOLID_FILL, BLACK);
                                    fillellipse(d-5,r-5, 4, 4);
                                    fillellipse(d+5,r-5, 4, 4);
                                    fillellipse(d,r+5, 2, 2);
                                }
                            }
                        }
                        if(a[j][i]==24)
                        {
                            int d1=dx+(i-1)*latura;
                            int d2=dy+(j-1-m)*latura;
                            if(t==0)
                                readimagefile("iepurasmarogaura.JPG", d1, d2, d1+latura, d2+latura);
                            else{
                                if(t==1){
                                     setfillstyle(SOLID_FILL, BLACK);
                                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                                    int ra=18, r, d;
                                    setfillstyle(SOLID_FILL, BROWN);
                                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                                    d=(i-1)*lat+dx+lat/2;
                                    r=(j-1-m)*lat+dy+lat/2;
                                    setfillstyle(SOLID_FILL, BLACK);
                                    fillellipse(d-5,r-5, 4, 4);
                                    fillellipse(d+5,r-5, 4, 4);
                                    fillellipse(d,r+5, 2, 2);
                                    fillellipse(d,r+5, 2, 2);
                                }
                            }
                        }
                        if(a[j][i]==25)
                        {
                            int d1=dx+(i-1)*latura;
                            int d2=dy+(j-1-m)*latura;
                            if(t==0)
                                readimagefile("iepurasgrigaura.JPG", d1, d2, d1+latura, d2+latura);
                        }
                    }
                    else{
                        if(t==1){
                            patrat((i-1)*lat+dx, (j-1-m)*lat+dy, lat);
                            setfillstyle(SOLID_FILL, GREEN);
                         //   floodfill((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,WHITE);
                            setfillstyle(SOLID_FILL, GREEN);
                           // fillellipse((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,raza-5, raza-5);
                if(a[j][i]==1)  // ciupercile
                {
                    setfillstyle(SOLID_FILL, RED);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, raza, raza);
                    setfillstyle(SOLID_FILL, WHITE);
                    int ra=4, d, r;
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    fillellipse(d, r, ra, ra);
                    fillellipse(d+10, r+10, ra, ra);
                    fillellipse(d-10, r-10, ra, ra);
                    fillellipse(d+10, r-10, ra, ra);
                    fillellipse(d-10, r+10, ra, ra);

                }
                if(a[j][i]==2)  // gauri
                {
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                }
                if(a[j][i]==3)  //iepurasul 1
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, WHITE);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==4)  //iepurasul 2
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, BROWN);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==5)  //iepurasul 3
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, DARKGRAY);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==23){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, WHITE);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==24){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, BROWN);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==25){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                   int ra=18, r, d;
                    setfillstyle(SOLID_FILL, DARKGRAY);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
               if(a[j][i]==7){

                    patrat(dx+(i-1)*lat+50,dy+(j-1-m)*lat+35, 10);
                   setfillstyle(SOLID_FILL, WHITE);
                    floodfill(dx+(i-1)*lat+50+2,dy+(j-1-m)*lat+35+2, WHITE);
                    floodfill(200+(i-1)*80+4,200+(j-1)*80+36 , WHITE);
                    dreptunghi(dx+(i-1)*lat, dy+(j-1-m)*lat+25,50 , 30);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-1)*lat+30+1, dy+(j-1-m)*lat+25+1, WHITE);
                    setfillstyle(SOLID_FILL, BLACK);
                }
                if(a[j][i]==6){
                    fillellipse(dx+(i-2)*lat+30+70+20,dy+(j-1-m)*lat+25+15 ,25,25);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-2)*lat+30+70+20+1,100+(j-1-m)*lat+25+15+1, WHITE );
                    int d, r;
                    d=(i-1)*lat+dx+lat/2+15;
                    r=(j-1-m)*lat+dy+lat/2+20;
                    setfillstyle(SOLID_FILL, BLACK);//ochii
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d-5,r-30, 4, 4);
                    fillellipse(d+13,r-15, 2, 2);
                    setfillstyle(SOLID_FILL, BLACK);
                }
                if(a[j][i]==8){
                    fillellipse(dx+(i-2)*lat+30+75,dy+(j-1-m)*lat+25+25 ,25,25);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-2)*lat+30+75+1,dy+(j-1-m)*lat+25+25+1, WHITE);
                    int d, r;
                    setfillstyle(SOLID_FILL, BLACK);
                    d=(i-1)*lat+dx+lat/2+15;
                    r=(j-1-m)*lat+dy+lat/2+20;
                    fillellipse(d-25,r-15, 4, 4);
                    fillellipse(d-5,r-15, 4, 4);
                    fillellipse(d-15,r+5, 2, 2);
                    setfillstyle(SOLID_FILL, BLACK);
                }
                if(a[j][i]==9){
                    dreptunghi(dx+(i-1)*lat+20, dy+(j-1-m)*lat,30 , 50);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-1)*lat+20+1, dy+(j-1-m)*lat+1, WHITE);
                    patrat(dx+(i-1)*lat+30,dy+(j-1-m)*lat+50, 10);
                    setfillstyle(SOLID_FILL, WHITE);
                    floodfill(dx+(i-1)*lat+30+1,dy+(j-1-m)*lat+50+1, WHITE);
                    setfillstyle(SOLID_FILL, BLACK);
                }
                if (l==0)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Inapoi");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Anuleaza");
    }
    else if (l==1)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Back");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Undo");
    }
    else if (l==2)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Arriere");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Annule");
    }

            }
                        }
                    }
            }
            }
        }
        setbkcolor(BLACK);
        timpacum=time(NULL)-timpstart;
        itoa(timpacum,aux,10);
        outtextxy(700, 100, aux);
        //cout<<endl;
        // cout<<nr<<"nr1";

    }
    nr=0;
    setcolor(BLACK);
    settextstyle(3, 0, 2);
    setbkcolor(BLACK);
    if (l==0)
        outtextxy(300, 50, "MUTARE INCORECTA" );
    else if (l==1)
        outtextxy(300, 50, "INCORRECT MOVE" );
    settextstyle(8, 0, 4);
    setbkcolor(RED);
    if (l==0)
        outtextxy(290, 40, "Ai castigat" );
    else if (l==1)
        outtextxy(330, 40, "You won" );
            else if (l==2)
        outtextxy(290, 40, "Tu as gagne" );
    delay(1300);
    start(b);


}

void joc(int b, int f)
{
    setcurrentwindow(b);
    //initwindow(800,600);
    setfillstyle(1, BLACK); // culoarea fundalului
    bar(0, 0, 800, 600); // face un chenar negru, not needed, e destul setfillstyle
    int i, j, x,y,oriz,dx, dy, vert, n=5, lat, raza,m=6*f;//m=6*nr niv; si mai trebuie adaugat in fiecare functie care apeleaza matricea numarul nivelului pentru a calcula m ul
    oriz=800;
    vert=600;
    lat=70;
    raza=25;
    dx=(oriz-n*lat)/2;
    dy=(vert-n*lat)/2;
    setbkcolor(BLACK);
    int nr=0;
    for(j=1+m; j<=n+m; j++)
    {
        for(i=1; i<=n; i++)
        {
            // patrat((i-1)*lat+dx, (j-1-m)*lat+dy, lat);
            //setfillstyle(SOLID_FILL, GREEN);
            // floodfill((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,WHITE);
            //  setfillstyle(SOLID_FILL, GREEN);
            // fillellipse((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,raza-5, raza-5);
            if (t==0)
            {
                if(a[j][i]==1)  // ciupercile
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("ciupercajoc.JPG", d1, d2, d1+lat, d2+lat);

                }
                if(a[j][i]==2)  // gauri
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("gaura.JPG", d1, d2, d1+lat, d2+lat);

                }
                if(a[j][i]==3)  //iepurasul 1
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasalb.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;

                }
                if(a[j][i]==4)  //iepurasul 2
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasmaro.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;

                }
                if(a[j][i]==5)  //iepurasul 3
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasgri.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;

                }
                if(a[j][i]==0)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("nimic.JPG", d1, d2, d1+lat, d2+lat);

                }
                if(a[j][i]==6)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("vulpe2.JPG", d1, d2, d1+2*lat, d2+lat);

                }
                if(a[j][i]==8)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("vulpe1.JPG", d1, d2, d1+lat, d2+2*lat);
                }
                if(a[j][i]==23)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasalbgaura.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;
                }
                if(a[j][i]==24)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasmarogaura.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;
                }
                if(a[j][i]==25)
                {
                    int d1=dx+(i-1)*lat;
                    int d2=dy+(j-1-m)*lat;
                    readimagefile("iepurasgrigaura.JPG", d1, d2, d1+lat, d2+lat);
                    nr++;
                }

            }
            else if (t==1)
            {
                patrat((i-1)*lat+dx, (j-1-m)*lat+dy, lat);
                setfillstyle(SOLID_FILL, GREEN);
                floodfill((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,WHITE);
                setfillstyle(SOLID_FILL, GREEN);
                fillellipse((i-1)*lat +dx+lat/2,(j-1-m)*lat+dy+lat/2 ,raza-5, raza-5);

                if(a[j][i]==1)  // ciupercile
                {
                    setfillstyle(SOLID_FILL, RED);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, raza, raza);
                    setfillstyle(SOLID_FILL, WHITE);
                    int ra=4, d, r;
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    fillellipse(d, r, ra, ra);
                    fillellipse(d+10, r+10, ra, ra);
                    fillellipse(d-10, r-10, ra, ra);
                    fillellipse(d+10, r-10, ra, ra);
                    fillellipse(d-10, r+10, ra, ra);

                }
                if(a[j][i]==2)  // gauri
                {
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                }
                if(a[j][i]==3)  //iepurasul 1
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, WHITE);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==4)  //iepurasul 2
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, BROWN);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==5)  //iepurasul 3
                {
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, DARKGRAY);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==23){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, WHITE);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==24){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                    int ra=18, r, d;
                    setfillstyle(SOLID_FILL, BROWN);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==25){
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse((i-1)*lat+dx+lat/2, (j-1-m)*lat+dy+lat/2, raza, raza);
                   int ra=18, r, d;
                    setfillstyle(SOLID_FILL, DARKGRAY);
                    fillellipse((i-1)*lat+dx+lat/2,(j-1-m)*lat+dy+lat/2, ra, ra);
                    d=(i-1)*lat+dx+lat/2;
                    r=(j-1-m)*lat+dy+lat/2;
                    setfillstyle(SOLID_FILL, BLACK);
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d+5,r-5, 4, 4);
                    fillellipse(d,r+5, 2, 2);
                    nr++;
                }
                if(a[j][i]==7){
                        setfillstyle(1, GREEN);
                        bar(dx+(i-1)*lat+1, dy+(j-1-m)*lat+1, dx+(i)*lat-1, dy+(j-m)*80-1);
                    patrat(dx+(i-1)*lat+50,dy+(j-1-m)*lat+35, 10);
                   setfillstyle(SOLID_FILL, WHITE);
                    floodfill(dx+(i-1)*lat+50+2,dy+(j-1-m)*lat+35+2, WHITE);
                  //  floodfill(200+(i-1)*80+4,200+(j-1)*80+36 , WHITE);
                    dreptunghi(dx+(i-1)*lat, dy+(j-1-m)*lat+25,50 , 30);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-1)*lat+30+1, dy+(j-1-m)*lat+25+1, WHITE);
                }
                if(a[j][i]==6){
                    setfillstyle(1, GREEN);
                    bar(dx+(i-1)*lat+1, dy+(j-1-m)*lat+1, dx+(i)*lat-1, dy+(j-m)*lat-1);
                    fillellipse(dx+(i-2)*lat+30+70+20,dy+(j-1-m)*lat+25+15 ,25,25);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-2)*lat+30+70+20+1,100+(j-1-m)*lat+25+15+1, WHITE );
                    int d, r;
                    d=(i-1)*lat+dx+lat/2+15;
                    r=(j-1-m)*lat+dy+lat/2+20;
                    setfillstyle(SOLID_FILL, BLACK);//ochii
                    fillellipse(d-5,r-5, 4, 4);
                    fillellipse(d-5,r-30, 4, 4);
                    fillellipse(d+13,r-15, 2, 2);
                }
                if(a[j][i]==8){
                    setfillstyle(1, GREEN);
                    bar(dx+(i-1)*lat+1, dy+(j-1-m)*lat+1, dx+(i)*lat, dy+(j-m)*lat-1);
                    fillellipse(dx+(i-2)*lat+30+75,dy+(j-1-m)*lat+25+25 ,25,25);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-2)*lat+30+75+1,dy+(j-1-m)*lat+25+25+1, WHITE);
                    int d, r;
                    setfillstyle(SOLID_FILL, BLACK);
                    d=(i-1)*lat+dx+lat/2+15;
                    r=(j-1-m)*lat+dy+lat/2+20;
                    fillellipse(d-25,r-15, 4, 4);
                    fillellipse(d-5,r-15, 4, 4);
                    fillellipse(d-15,r+5, 2, 2);
                }
                if(a[j][i]==9){
                    setfillstyle(1, GREEN);
                    bar(dx+(i-1)*lat+1, dy+(j-1-m)*lat+1, dx+(i)*lat, dy+(j-m)*lat-1);
                    dreptunghi(dx+(i-1)*lat+20, dy+(j-1-m)*lat,30 , 50);
                    setfillstyle(SOLID_FILL, BROWN);
                    floodfill(dx+(i-1)*lat+20+1, dy+(j-1-m)*lat+1, WHITE);
                    patrat(dx+(i-1)*lat+30,dy+(j-1-m)*lat+50, 10);
                    setfillstyle(SOLID_FILL, WHITE);
                    floodfill(dx+(i-1)*lat+30+1,dy+(j-1-m)*lat+50+1, WHITE);
                }
                setfillstyle(1, BLACK);
                floodfill(1, 1, WHITE);

            }

        }
    }
    oki=false;
    if (l==0)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Inapoi");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Anuleaza");
    }
    else if (l==1)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Back");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Undo");
    }
    else if (l==2)
    {
        settextstyle(10,0,1);
        setcolor(WHITE);
        setbkcolor(BLUE);
        outtextxy(20, 30, "Arriere");
        settextstyle(10,0,2);
        setcolor(WHITE);
        setbkcolor(RED);
        outtextxy(20, 130, "Annule");
    }

    clearmouseclick(WM_LBUTTONDOWN);
    clearmouseclick(WM_LBUTTONDOWN);
    mutarePiesa(a,nr ,m ,b);
}

int main()
{
    int b;
    b=initwindow(800, 600);
    meniu(b);
    getch();
    closegraph();
    return 0;
}
