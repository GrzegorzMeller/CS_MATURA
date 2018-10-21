#include <iostream>

using namespace std;

int Macierz(int ax, int ay, int bx, int by, int cx, int cy)
{
    return ax*by+bx*cy+cx*ay-cx*by-ax*cy-bx*ay;
}

int main()
{
    //wykres tych punktow narysowany jest w zeszycie
    int ax = 3;
    int ay =2;

    int bx = 13;
    int by= 8;

    int cx= 8;
    int cy=5;


    if(Macierz(ax, ay, bx,by,cx,cy)==0)
    {
        if(min(ax, bx)<=cx<=max(ax, bx) && min(ay, by)<=cy<=max(ay, by)) cout<<"PUNKT C NALEZY DO ODCINKA |AB|";
    }
    return 0;
}
