#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll w, h, u1, d1, u2, d2, s = 0;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    s = w;
    for(int i = h; i > 0; i --){
        s = s + i;
        if(i == d1){
            s = s - u1;
        }
        if(i == d2){
            s = s - u2;
        }
        if(s < 0){
            s = 0;
        }
    }
    cout << s;
    return 0;
}
