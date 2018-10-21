#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   double eps = 0.000000001;
   int P;
   cin>>P;

   double a=1;
   double b=P;

   while(fabs(a-b)>=eps)
   {
       a= (a+b)/2;
       b=P/a;
   }
   cout<<a<<" "<<b;
    return 0;
}
