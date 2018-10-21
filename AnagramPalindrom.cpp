#include <iostream>

using namespace std;

int tablica[127]={}; //zerowanie licznikow?

bool Anagram(string a1, string a2)
{


    for(int i=0;i<a1.length();++i)
    {
        int pom = a1[i];
        tablica[pom]++;
    }

    for(int i=0;i<a2.length();++i)
    {
        int pom = a2[i];
        tablica[pom]--;
    }

    int licznik=0;
    for(int i=0;i<127;++i)
    {
        if(tablica[i]==0) licznik++;
    }
    if(licznik==127) return true;
    else return false;
}

bool Palindrom(string a3)
{
    string pom="     ";
    int licznik=0;
    int wyn=0;
    for(int i=a3.length()-1;i>=0;--i)
    {
        pom[licznik]=a3[i];
       // cout<<" "<<licznik<<" "<<pom[licznik]<<" "<<a3[licznik]<<endl;
        if(pom[licznik]==a3[licznik]) wyn++;
        licznik++;
    }
    cout<<a3<<" "<<pom<<endl;
    if(wyn==a3.length()) return true;
    else return false;
}
int main()
{
    //zalozenie: a1.length()=a2.length (nie chce mi sie robic if dla sprawdzania wszystkiego...)
    string a1="fraktal";
    string a2="kartafl";
    string a3="dfgfd";

    if(Anagram(a1,a2)){ cout<<"TO JEST ANAGRAM"<<endl;}
    if(Palindrom(a3)==true) cout<<"TO JEST PALINDROM";
    //else cout<<"TO NIE JEST PALINDROM";


    return 0;
}
