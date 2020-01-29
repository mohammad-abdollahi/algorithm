#include <iostream>

using namespace std;

int main() {
    int n, a[100000]={}, p[100000]={}, ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>p[i];
    }
    int min = p[0];
    for (int i=0; i<n; i++){
        if(p[i]<min)
            min=p[i];
        ans += min*a[i];
    }
    cout<<ans<<endl;

    return 0;
}
	
