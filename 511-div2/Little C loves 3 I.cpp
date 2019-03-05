#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll n;
    cin >> n;
    if(n == 3){
        cout << "1 1 1";
        return 0;
    }
    ll a = 1, b = 2,c = 0;
    n = n - 3;
    while(n % 3 == 0){
        n --;
        c ++;
    }
    cout << n << " ";
    if((a+c)%3 == 0){
        cout << a << " " << b+c;
    }
    else{
        cout << a+c << " " << b;
    }
    return 0;
}
