#include <iostream>
 
using namespace std;
 
int main()
{
    int n,ans=0;
    cin>>n;
 
    while(n!=0)
    {
        if(n>=100) {n=n-100; ans++;}
 
        else if(n>=20) {n=n-20; ans++;}
 
        else if(n>=10) {n=n-10; ans++;}
 
        else if(n>=5) {n=n-5; ans++;}
 
        else if(n>=1) {n--; ans++;}
    }
    cout<<ans<<endl;
    return 0;
}
