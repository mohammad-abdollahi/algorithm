#include <iostream>
#include <string>
using namespace std;

//A and B and Team Training
int main()
{
    int xp, nb, a=0;
    cin>>xp>>nb;

    while(xp>0 and nb>0)
    {
        if(xp==1 && nb==1)
            break;
        if(xp>nb)
        {
            xp -= 2;
            nb--;
        }
        else
        {
            nb -= 2;
            xp--;
        }
        a++;
    }
    cout<<a;
    return 0;
}
