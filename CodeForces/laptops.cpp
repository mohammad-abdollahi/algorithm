#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, t1, t2;
    bool ans=false;
    cin>>n;
    map <int,int>  v;

    for(int i=0;i<n;i++)
    {
        cin>>t1>>t2;
        v.insert(make_pair(t1,t2));
    }

    for(auto it=v.begin(); it!=v.end()--; )
    {
        if(it->second > (++it)->second)
        {
            ans=true;
            break;
        }
    }
    if(ans)
        cout <<"Happy Alex"<<endl; else cout <<"Poor Alex"<<endl;
    return 0;
}

