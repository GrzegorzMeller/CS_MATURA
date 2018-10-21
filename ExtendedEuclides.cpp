#include <iostream>

using namespace std;

int x; int y;

void Rozsz_Euklides(int a, int b)
{
    if(b!=0)
    {
        Rozsz_Euklides(b, a%b);
        int pom=y;
        y=x-((a/b)*y);
        x=pom;
    }
}

int main()
{
    x=1;
    y=0;

    int a = 231;
    int b=30;

    Rozsz_Euklides(a,b);

    cout<<x<<" "<<y;
    return 0;
}
