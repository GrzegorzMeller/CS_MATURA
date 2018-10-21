#include <iostream>

using namespace std;

int main()
{
    string a1="pascal";
    string a2="pa";
    cout<<a2.length()<<endl;
    int j=0;
    int licznik=0;
    for(int i=0;i<a1.length();++i)
    {
        if(a2[0]==a1[i])
        {

            licznik++;
            cout<<"PIERWSZE "<<a2[0]<<" "<<a1[i]<<" "<<licznik<<endl;
            for(int x=0;x<a2.length()-1;++x) //a2.length()-1 bo pierwsza pozycja zosta³a juz policzona
            {
                cout<<" "<<a2[licznik]<<" "<<a1[i+1+x]<<" "<<licznik<<endl;
                if(a2[licznik]==a1[i+1+x]) licznik++;


            }
            cout<<licznik<<" "<<a2.length()<<endl;
            if(licznik==a2.length()) {cout<<"ZNALAZLEM NA POZYCJI: "<<i<<" "<<i+licznik-1<<endl;return 0;}
        }
        else licznik=0;


        j++;
    }

    return 0;
}
