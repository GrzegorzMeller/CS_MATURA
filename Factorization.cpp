#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int pierwsza=2;
    int pierwiastek = sqrt(n);
    while(n>1&& pierwsza<=pierwiastek)
    {
        if(n%pierwsza==0) { cout<<pierwsza<<" "; n=n/pierwsza;}
        else pierwsza++;
    }
if(n>1) cout<<n;
    return 0;
}
