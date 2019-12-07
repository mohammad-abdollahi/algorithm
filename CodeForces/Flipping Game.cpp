#include <iostream>
 
using namespace std;
 
int main()
{
    int t,ans=0,a,z=0,zz=-1,o=0;
    cin>>t;
 
    while(t--){
        cin>>a;
        if(a){
            o++;
            if(z>0)
                z--;
        }
        else{
            z++;
            if(z>zz)
                zz=z;
        }
    }
    cout<<o+zz<<endl;
    return 0;
}
