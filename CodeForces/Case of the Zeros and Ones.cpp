#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    int t,c=0,d=0;
    string a;
    cin>>t>>a;
    for(int i=0;i<t;i++)
    {
        if(a[i]=='1')
            c++;
        else
            d++;
    }
 
    if(c>d)
        cout<<c-d<<endl;
    else
        cout<<d-c<<endl;
    return 0;
}
