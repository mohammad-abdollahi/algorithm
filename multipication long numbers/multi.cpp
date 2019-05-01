#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

string multiply(string a, string b)
{
    int s1 = a.size();
    int s2 = b.size();

    if(s1== 0 || s2 == 0)
        return "0";

    vector<int> res(s1+s2, 0);
    int i_b = 0;
    int i_a = 0;

    for (int i = s1-1; i >= 0 ; i--){
        int carry=0;
        int n1 = a[i] - '0';
        i_b = 0;
        for (int j = s2 - 1; j >= 0 ; j--) {
            int n2 = b[j] - '0';
            int sum = n1*n2 + res[i_a + i_b] + carry;
            carry = sum / 10;
            res[i_a + i_b] = sum % 10;
            i_b++;
        }

        if(carry > 0)
            res[i_a+i_b] += carry;
        i_a++;
    }
    int i = res.size() - 1;
    while (i>=0 && res[i] == 0)
        i--;

    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
        s += std::to_string(res[i--]);

    return s;
}


int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    if((a.at(0) == '-' || b.at(0) == '-') &&
       (a.at(0) != '-' || b.at(0) != '-' ))
        cout<<"-";


    if(a.at(0) == '-' && b.at(0)!='-')
    {
        a = a.substr(1);
    }
    else if(a.at(0) != '-' && b.at(0) == '-')
    {
        b = b.substr(1);
    }
    else if(a.at(0) == '-' && b.at(0) == '-')
    {
        a = a.substr(1);
        b = b.substr(1);
    }
    cout << multiply(a, b);

    return 0;
}