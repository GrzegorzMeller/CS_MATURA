#include <iostream>

using namespace std;

string SzyfrCezara(string x, int klucz)
{
    string wynik="";
    klucz = klucz%26;
    for(int i=0;i<x.length();++i)
    {
        int slowo = x[i];
        slowo=slowo+klucz;
        if(slowo>90) slowo = slowo-26;
        char litera = slowo;
        wynik=wynik+litera;
    }
    return(wynik);
}

string Odszyfruj(string x, int klucz)
{
    string wynik="";
    klucz = klucz%26;
    for(int i=0;i<x.length();++i)
    {
        int slowo=x[i];
        slowo = slowo-klucz;
        if(slowo<65) slowo=slowo+26;
        char litera = slowo;
        wynik= wynik+litera;
    }
    return(wynik);
}

string PodajBlad(string x, string y)
{
    int slowo1=x[i];
    int slowo2=y[i];
    int klucz = y[i]-x[i];

    for(int i=1;i<x.length();++i)
    {
        if(x[i]+klucz != y[i])
        {
            cout<<y;
            return 0;
        }
    }
    return 0;
}
int main()
{
    //6.1
   //for(int i=0;i<100;++i)
   //{
     //  string s;
       //cin>>s;
       //cout<<SzyfrCezara(s,107)<<endl;

   //}

   //6.2
   //for(int i=0;i<3000;++i)
   //{
     //  string s;
     //  int k;
     //  cin>>s>>k;
     //  cout<<Odszyfruj(s,k)<<endl;
   //}

   //6.3
   for(int i=0;i<700;++i) //700 bo potem sa bledy w pliku
   {
       string x, y;
       cin>>x>>y;
       cout<<PodajBlad(x,y)<<endl;
   }

    return 0;
}
