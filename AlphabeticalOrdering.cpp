#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a = "pascal";
    sort(a.begin(), a.end());
    cout<<a<<endl;

    reverse(a.begin(), a.end());
    cout<<a;
    return 0;
}
