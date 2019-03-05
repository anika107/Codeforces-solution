#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll a, b, t;
    cin >> t;
    while(t --){
    cin >> a >> b;
    if(a%2 == 0 && b%2 == 0){
       cout << (a+b)/2;
    }
    else if(a%2 == 0 && b%2 != 0){
        cout << (a-b-1)/2;
    }
    else if(a%2 != 0 && b % 2 == 0){
        cout << ((a+b+1)/2)-a;
    }
    else{
        cout << -1 * ((a+b)/2);
    }
    cout << endl;
    }
    return 0;
}
