#include <iostream>

using namespace std;

int main()
{
    int a=2;
    int b=4;
    int c=5;

    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && c+b>a) cout<<"MOZNA";
    else cout<<"NIE";
    return 0;
}
