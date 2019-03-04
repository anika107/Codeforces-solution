#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if(x > a){
        cout << "NO";
    }
    else{
        a = a - x;
        if(a+b < y){
           cout << "NO";
        }
        else{
            ll m = a+b;
            m = m - y;
            m = m + c;
            if(m < z){
                cout << "NO";
            }
            else{
                cout << "YES";
            }
        }
    }
    return 0;
}
