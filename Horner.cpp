#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    //oblicz: 7*8^4+3*8^3+0*8^2+5*8^1+1*8^0
    int liczba=73051; //liczba zapisana w systemie ósemkowym
    int x=8; //argument wielomianu

    ostringstream ss;
    ss << liczba;
    string ciag = ss.str();
    int y=ciag[0]-48;

    for(int i=1; i<ciag.length();++i)
    {
        y=(y*x)+ciag[i]-48;

    }
    cout<<y;
    return 0;
}
