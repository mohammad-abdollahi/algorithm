#include <iostream>
 
using namespace std;
 
const int m = 1000000007;
int main()
{
    int t,k;
    long long int dp[500007]={}, sum[500007]={};
    cin >>t>>k;
 
    for (int i=0; i<k;i++) {
        dp[i] = 1;
        sum[i] = i+1;
    }
 
    for(int i=k; i<500000; i++){
        dp[i] = (dp[i-1]%m + dp[i-k]%m)%m;
        sum[i] = (sum[i-1]%m + dp[i]%m)%m;
    }
 
    for (int i=0; i<t; i++)
    {
        long long int a,b,ans;
        cin>>a>>b;
 
        ans = (sum[b] - sum[a-1])%m;
        if(ans<0)
            ans = ans + m;
        cout<<ans<<endl;
    }
    return 0;
}
