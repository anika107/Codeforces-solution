#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    //cout << __gcd(15);
    ll n, x, y, m = 0;
    cin >> n;
    while(n --){
        cin >> x >> y;
        m = max(m, (x+y));
    }
    cout << m;
    return 0;
}
