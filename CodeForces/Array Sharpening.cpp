#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tests,n;
    cin>>tests;

    while(tests--)
    {
        cin>>n;
        vector <int> l(n);
        for(int i=0; i<n; i++)
        {
            cin>>l[i];
        }

        int prefixEnd = -1, suffixEnd = n;

	    for (int i = 0; i < n; ++i) {
		    if (l[i] < i) break;
		    prefixEnd = i;
	    }
	    for (int i = n-1; i >= 0; --i) {
		    if (l[i] < (n-1)-i) break;
		    suffixEnd = i;
	    }

	    if (suffixEnd <= prefixEnd) 
		    cout << "Yes\n";
	    else
		    cout << "No\n";
    }

    return 0;
}
