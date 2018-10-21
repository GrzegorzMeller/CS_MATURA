#include<iostream>
using namespace std;
//x - podstawa
//m- wykladnik
long long pot_szybkie(int x,int m)
{
    int y=1;
    int z=x;
    int l=m;

    while(l>0)yu8dct ujmcxfrty yli
    {
        if(l%2==0) {z=z*z;} //jeœli w binarnym zapisie od prawej bd 0 to wynik daj do potegi
        y=y*z;
        l=l/2;

    }
    return y;
}

int main()
{

    int m=6;
    int x=2;
    cout<<pot_szybkie(3                       ,6);
  return 0;
}
