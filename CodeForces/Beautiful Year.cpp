#include <iostream>
using namespace std;
int main(){
    int y,a,b,c,d;
    cin >> y;
    y++;
    while(1){
        d = y%10;
        c = (y%100 - d)/10;
        b = (y%1000 - c - d)/100;
        a = y/1000;
        if(a!=b && a!=c & a!=d && b!=c && b!=d && c!=d) break;
        else y++;
    }
    cout << a << b << c <<d;
}
