#include <iostream>

using namespace std;

double Macierz(int ax, int ay, int bx, int by, int cx, int cy)
{
    return ax*by+bx*cy+cx*ay-cx*by-ax*cy-bx*ay;
}

bool Przynaleznosc_Punktu_Do_Prostej(int ax, int ay, int bx, int by, int cx, int cy)
{
     if(Macierz(ax, ay, bx,by,cx,cy)==0.0)
    {
        if(min(ax, bx)<=cx<=max(ax, bx) && min(ay, by)<=cy<=max(ay, by)) return true;
    }
}

int main()
{
    int ax=2;
    int ay=2;

    int bx=3;
    int by=4;

    int cx=6;
    int cy=7;

    int dx=8;
    int dy=9;

    if(Przynaleznosc_Punktu_Do_Prostej(ax, ay, bx,by,cx,cy)) return 0;
    else if(Przynaleznosc_Punktu_Do_Prostej(ax, ay, bx,by,dx,dy)) return 0;

    if(Macierz(ax, ay, bx,by,cx,cy)>0 && Macierz(ax, ay, bx,by,dx,dy)<0||Macierz(ax, ay, bx,by,cx,cy)<0 && Macierz(ax, ay, bx,by,dx,dy)>0)
        cout<<"ODCINKI SIE PRZECINAJA";
    else cout<<"ODCINKI SIE NIE PRZECINAJA";

    return 0;
}
