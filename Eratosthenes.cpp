#include <iostream>

using namespace std;

int main()
{

    int N=25;
    int S[N];
    int teraz=1;

    for(int i=0; i<N; ++i) S[i]=0;

    for(int j=2;j*j<N;++j)
    {
        if(S[j]==0) teraz =j;

        for(int i=teraz*teraz;i<N;i=i+teraz)
        {
            //if(i%teraz ==0) S[i]=1; //0 - oznacza liczb� pierwsz� 1 - oznacza liczb� z�o�on�
            S[i]=1;

        }
    }

    for(int i=2;i<N;++i)
    {
        if(S[i]==0) cout<<i<<endl;
    }



    return 0;
}
