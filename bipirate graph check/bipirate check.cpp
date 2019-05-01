#include <iostream>
#include <queue>
using namespace std;


bool check(int g[][100],int n){
    int color[100]={};
    for(int i=0;i<n;i++)
        color[i]=-1;

    color[0]=1;

    queue <int> q;
    q.push(0);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if (g[u][u] == 1)
            return false;

        for (int v = 0; v < n; ++v)
        {
            if (g[u][v] && color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (g[u][v] && color[v] == color[u])
                return false;
        }
    }
    return true;
}


int main(){
    int n=0, graph[100][100]={},i=0,k=0;
    string line;

    /*ifstream myfile ("file.txt");
    if (myfile.is_open())
    {
        while (getline (myfile,line))
        {
            cout << line << '\n';
            for(int j=0;j<line.length();j++) {
                if (line[j] != ' ')
                    if (i == 0)
                        n = line[j] - 48;
                    else {
                        graph[i - 1][line[j] - 49] = 1;
                    }
            }
            i++;
        }
        myfile.close();
    }*/
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        getline(cin,line);
       // cout << line << '\n';
        for(int j=0;j<line.length();j++)
            graph[i - 1][line[j] - 49] = 1;

    }
   // cout<<n<<endl;
    //cout<<graph[0][0];
    check(graph,n)?cout<<"Yes":cout<<"No";
}