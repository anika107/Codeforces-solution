#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, n, c = 0;
    cin >> t;
    while(t --){
        cin >> n;
        c = 0;
        while(n){
            if(n%2) c ++;
            n = n / 2;
        }
        cout << (1<<c) << endl;
    }

    return 0;
}


