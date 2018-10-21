#include <iostream>
#include<cstring>

using namespace std;

string Przestaw_Sasiadujace(string slowo)
{
    char pom='*';

    for(int i=0;i<slowo.length();i=i+2)
    {
        if(slowo[i+1])
        {
            pom=slowo[i];
            slowo[i]=slowo[i+1];
            slowo[i+1]=pom;
        }
    }
    return slowo;
}

bool czy_spolgloska(char litera)
{
  //sprawdzamy czy samog³oska - jest ich mniej
  switch(litera)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
      return 0;
  }
  return 1;
}

string Przestaw_Spolgloski(string slowo)
{
    char pom='*';
    char pom1='*';
    for(int i=0;i<slowo.length();++i)
    {
        if(czy_spolgloska(slowo[i]))
        {
            pom1=slowo[i];
            //cout<<pom1;
            if(pom!='*') slowo[i]=pom;
            pom=pom1;
        }

    }
    slowo[0]=pom;
    return slowo;

}
int main()
{

    cout<<Przestaw_Sasiadujace("lokomotywax")<<endl;;
     cout<<Przestaw_Spolgloski("lokomotywa");

    return 0;
}
