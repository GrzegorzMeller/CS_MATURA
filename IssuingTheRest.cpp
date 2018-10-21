#include <iostream>

using namespace std;

int main()
{
    int m=96;
    int nominaly[]={1,2,5,10,20,50,100};
    int P=0;
    int i=6;

    while(m>0)
    {
        if(nominaly[i]<=m) {P=m/nominaly[i]; cout<<nominaly[i]<<" x "<<P<<endl;  m=m-(nominaly[i]*P);}
        else i--;
    }
    return 0;
}
