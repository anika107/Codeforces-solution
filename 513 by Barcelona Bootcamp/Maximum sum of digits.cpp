#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin >> n;
    //n = floor(n/2);
    if(n < 10){
        cout << n;
        return 0;
    }
    //ll x = n % 10;
    //n = f;
     //cout << n-99 << endl;
   // n = n - 9;
    //n --;
    //x ++;
    ll c = 0;
    /*while(x != 0){
        c += x%10;
        x = x/10;
    }*/
    ll x = n, s = 0, f = 0;
     while(n != 0){
        f += n%10;
        n = n/10;
        c ++;
    }
    c --;
    //cout << c << endl;
    for(int i = 0; i < c; i ++){
        s = (s * 10)+9;
        //cout << s << endl;
    }
   // cout << s << endl;
    x = x - s;
    c = 0;
    while(x != 0){
        c += x%10;
        x = x/10;
    }
    while(s != 0){
        c += s%10;
        s = s/10;
    }
    cout << c ;
    return 0;
}
