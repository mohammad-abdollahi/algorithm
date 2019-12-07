#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    int m, n, ans=0;
    cin >> m >> n;
    int time = 240 - n;
 
    for ( int i=1; i<=m; i++ )
    {
        time = time - (i*5);
        if(time<0)
            break;
        ans++;
    }
    cout << ans <<endl;
    return 0;
}
