#include <iostream>
#include <cmath>

using namespace std;

int px = 4;
int py = 4;


int W(int ax, int ay, int bx, int by)
{
  return (ax-px)*(by-py)-(bx-px)*(ay-py);
}

//int P(int ax, int ay, int px, int py)
//{
  //  return (ax)
//}

int main()
{


    int ax=4;
    int ay=4;

    int bx=18;
    int by=4;

    int cx=18;
    int cy=16;

    int dx=4;
    int dy=16;

    cout<<(fabs(W(ax, ay,bx,by))/2)+(fabs(W(bx, by,cx,cy))/2)+(fabs(W(cx,cy,dx,dy))/2)+(fabs(W(dx,dy,ax,ay))/2);
   // cout<<W(bx, by,cx,cy)+W(dx,dy,ax,ay);
    return 0;
}
