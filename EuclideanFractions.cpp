#include <iostream>

using namespace std;

int NWD(int a,int b)
{
    if(b!=0)
    {
    int temp=a%b;
    a=b;
    b=temp;
    NWD(a, b);
    }
    else
    return a;
}

int NWW(int a, int b)
{
    if(a>=b) return (a*b)/NWD(a,b);
    else return (a*b)/NWD(b,a);
}

int main()
{
    int licznik1 = 3;
    int mianownik1 = 6;
    int a=1;

    if(licznik1>=mianownik1) a=NWD(licznik1, mianownik1);
        else  a=NWD(mianownik1, licznik1);
    licznik1=licznik1/a;
    mianownik1=mianownik1/a;
    //-----------------------------------------------
    int licznik2=5;
    int mianownik2=7;

    if(licznik2>=mianownik2) a=NWD(licznik2, mianownik2);
        else  a=NWD(mianownik2, licznik2);
    licznik2=licznik2/a;
    mianownik2=mianownik2/a;
    //---------------DODAWANIE----------------------------------

    int suma_licznik=(licznik1*NWW(mianownik1, mianownik2)/mianownik1)+(licznik2*NWW(mianownik1,mianownik2)/mianownik2);
    int suma_mianownik=NWW(mianownik1,mianownik2);
    cout<<"DODAWANIE: "<<suma_licznik<<"/"<<suma_mianownik<<endl;
    //------------------ODEJMOWANIE--------------------------------
    int roznica_licznik=(licznik1*NWW(mianownik1, mianownik2)/mianownik1)-(licznik2*NWW(mianownik1,mianownik2)/mianownik2);
    int roznica_mianownik=NWW(mianownik1,mianownik2);
    cout<<"ODEJMOWANIE: "<<roznica_licznik<<"/"<<roznica_mianownik<<endl;

    //--------------------MNOZENIE---------------------------------
    int iloczyn_licznik= licznik1*licznik2;
    int iloczyn_mianownik=mianownik1*mianownik2;
    cout<<"MNOZENIE: "<<iloczyn_licznik<<"/"<<iloczyn_mianownik<<endl;

    //--------------------DZIELENIE--------------------------------
    int iloraz_licznik=licznik1*mianownik2;
    int iloraz_mianownik=mianownik1*licznik2;
    cout<<"DZIELENIE: "<<iloraz_licznik<<"/"<<iloraz_mianownik<<endl;
    return 0;
}
