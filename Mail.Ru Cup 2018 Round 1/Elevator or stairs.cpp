#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll x, y, z, t1, t2, t3, el, st;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    el = (abs(x-y))*t1;
    st = ((abs(x-z))*t2)+(t3*2)+((abs(x-y))*t2) + t3;
    ll m = min(el, st);
    //cout << el << " " << st;
    if(m == st){
       cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
