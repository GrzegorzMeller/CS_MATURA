#include <iostream>

using namespace std;

int Funkcja(int xi)
{
    return (xi*xi)+3;
}

int main()
{
    //f(x)=x^2 + 3
    //przedzial: <2,5>
    //dokladnosc n=3

    int xp=2;
    int xk=5;
    int n=3;

    int dx= (xk-xp)/n;
    int wynik=0;
    for(int i=1;i<=n;++i)
    {
        //cout<<Funkcja(xp+(i*dx))<<endl;
        wynik=wynik+(dx*Funkcja(xp+(i*dx)));
    }
    cout<<wynik;
    return 0;
}
