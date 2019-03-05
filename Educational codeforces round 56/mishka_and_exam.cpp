#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector <ll> a(n), b(n);
    for(int i = 0; i < n/2; i ++){
        cin >> b[i];
    }
    a[0] = 0;
    a[n-1] = b[0];
    for(int i = 1; i < (n/2); i ++ ){
        a[i] = max(a[i-1], b[i]-a[n-i]);
        a[n-i-1] = b[i] - a[i];
    }
    for(int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    return 0;
}
