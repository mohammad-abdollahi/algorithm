#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long long int numberOfShops, shopCoin[100000]={}, numberOfDays, money[100000]={};
    cin>>numberOfShops;
 
    for (int i=0; i<numberOfShops; i++)  cin>>shopCoin[i];
 
    cin>>numberOfDays;
    for (int i=0; i<numberOfDays; i++)  cin>>money[i];
 
    sort(shopCoin, shopCoin+numberOfShops);
 
    for (int i=0; i<numberOfDays; i++){
        cout<<upper_bound(shopCoin, shopCoin+numberOfShops, money[i])-shopCoin<<endl;
    }
 
    return 0;
}
