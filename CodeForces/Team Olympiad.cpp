#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    int n, one[5000]={}, two[5000]={},  three[5000]={},j=0,k=0,l=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int t;
        cin>>t;
        if(t==1)
        {
            one[j]=i;
            j++;
        }
        else if(t==2)
        {
            two[k]=i;
            k++;
        }
        else
        {
            three[l]=i;
            l++;
        }
    }
    int m = min(l, min(j,k));
    cout<<m<<endl;
 
    for(int i=0; i<m; i++)
        cout<<one[i]<<' '<<two[i]<<' '<<three[i]<<endl;
 
    return 0;
}
