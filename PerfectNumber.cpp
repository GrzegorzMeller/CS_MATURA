#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int suma=0;

    for(int i=1;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            if(n/i!=n) //nie mozemy wziac pod uwage dzielnika bedacego n
            {
                    suma = suma + i + (n/i);
            }
            else suma++;
        }
        cout<<suma<<" ";
    }
    if(suma==n) cout<<"LICZBA JEST DOSKONALA!!!";
    else cout<<"NIE JEST";
    return 0;
}
