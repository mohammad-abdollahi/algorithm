#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    int ones=0, twos=0, threes=0;
    string inp;
    cin>>inp;
    for (auto i:inp)
    {
        if(i=='1')
            ones++;
        else if (i=='2')
            twos++;
        else if (i=='3')
            threes++;
        else
            continue;
    }
 
    if (ones!=0 and twos==0 and threes==0)
    {
       for (int i=0; i<ones-1; i++)
           cout<< "1+";
       cout<<"1"<<endl;
    }
    else if(ones==0 and twos==0 and threes==0){
        cout<<endl;
    }
    else{
        for (int i = 0; i < ones; i++)
            cout << "1+";
        if(threes==0)
        {
            for (int i = 0; i < twos-1; i++)
                cout << "2+";
            cout<<'2'<<endl;
        }
        else {
            for (int i = 0; i < twos; i++)
                cout << "2+";
            for (int i = 0; i < threes-1; i++)
                cout << "3+";
            cout<<'3'<<endl;
        }
    }
    return 0;
}
