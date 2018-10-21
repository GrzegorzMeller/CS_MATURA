#include <iostream>

using namespace std;

int main()
{
    string ciag="352*+";
    int stos[ciag.length()];
    int licznik_stosu=ciag.length();
    //int wierzcholek_sosu=ciag.length();
    int wyn=0;
    for(int i=0;i<ciag.length();++i)
    {
        if(ciag[i]>=48&&ciag[i]<=58){stos[licznik_stosu]=ciag[i]-48; licznik_stosu--;}
        else if(ciag[i]=='*')
        {
            cout<<endl<<"MNOZE TERAZ DIWE LICZBY "<<stos[licznik_stosu+2]<<" * "<<stos[licznik_stosu+1]<<endl;
            stos[licznik_stosu+2]=stos[licznik_stosu+2]*stos[licznik_stosu+1];
            licznik_stosu++;
        }
        else if(ciag[i]=='/') {stos[licznik_stosu+1]=stos[licznik_stosu+2]/stos[licznik_stosu+1];}
        else if(ciag[i]=='+')
        {
            cout<<endl<<"DODAJE TERAZ DWIE LICZBY "<<stos[licznik_stosu+2]<<" + "<<stos[licznik_stosu+1]<<endl;
            stos[licznik_stosu+2]=stos[licznik_stosu+2]+stos[licznik_stosu+1];
            licznik_stosu++;
        }
        else if(ciag[i]=='-') {stos[licznik_stosu+1]=stos[licznik_stosu+2]-stos[licznik_stosu+1];}
    }
   cout<<stos[licznik_stosu+1];
    return 0;
}
