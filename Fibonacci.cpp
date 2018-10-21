#include <iostream>

using namespace std;

int FibRekurencyjnie(int n)
{
    if(n<3) return 1;

    return FibRekurencyjnie(n-1)+FibRekurencyjnie(n-2);
}

int FibIteracyjnie(int n)
{
    int Fib[n];
    Fib[0]=1;
    Fib[1]=1;
    for(int i=2;i<n;++i)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];
        //cout<<Fib[i]<<endl;
    }
    return Fib[n-1 ];
}
int main()
{
    int n=5;
   cout<<FibIteracyjnie(n);
    return 0;
}
