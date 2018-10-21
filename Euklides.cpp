#include <iostream>

using namespace std;

int NWD(int a, int b)
{
    if(b!=0)
    {
        int tmp =a%b;
        a=b;
        b=tmp;
        cout<<a<<" "<<b<<endl;
        return NWD(a,b);
    }
    else return a;

}



int main()
{
    int a,b;
    cin>>a>>b;
    cout<<NWD(a,b);
    return 0;
}
