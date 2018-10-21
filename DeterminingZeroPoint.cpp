#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float Funkcja(float x)
{
    return (x*x)-2;
}


float polowienie_przedzialow(float a, float b, float epsilon)
{
     if(Funkcja(a)==0.0) return a;
    if(Funkcja(b)==0.0) return b;

    //cout.precision(5);
    while(b-a> epsilon)
    {
        float srodek = (a+b)/2;
        //cout<<srodek<<" "<<fixed<<setprecision(5)<<Funkcja(srodek)<<endl;

        if(Funkcja(srodek)==0.0)
        {
            cout<<"JESTEM!";
            return srodek;
        }
        if(Funkcja(srodek)*Funkcja(b)<0.0)
        {
        a = srodek;
        }
        //else if(Funkcja(srodek)*Funkcja(a)<0.0)
        else
        {
            b = srodek;
        }
    }
    return (a+b)/2;

}
int main()
{
    float a=-10;
    float b=10;
    float epsilon = 0.00001;

    cout<<polowienie_przedzialow(a, b, epsilon);


    return 0;
}


