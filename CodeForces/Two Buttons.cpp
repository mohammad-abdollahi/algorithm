#include <iostream>
using namespace std;
int main() {
    int m,n,ans=0;
    cin>>n>>m;
 
    while (n != m)
    {
        if (m > n)
            if (m % 2 == 0) m /= 2, ans++;
            else m++, ans++;
        else if (n > m) m++, ans++;
    }
    cout<<ans<<endl;
    return 0;
}
