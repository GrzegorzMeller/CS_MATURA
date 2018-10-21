#include <iostream>

using namespace std;

double Macierz(int ax, int ay, int bx, int by, int cx, int cy)
{
    return ax*by+bx*cy+cx*ay-cx*by-ax*cy-bx*ay;
}
int main()
{
    int ax = 2;
    int ay =3;

    int bx = 4;
    int by= 3;

    int cx= 2;
    int cy=3;

    int m = Macierz(ax,ay,bx,by,cx,cy);
    if(m==0) cout<<"WSPOLLINIOWE";
    else if(m>0.0) cout<<"PO LEWEJ STRONIE OD WEKTORA AB";
    else cout<<"PO PRAWEJ STRONIE WEKTORA AB";
    return 0;
}
