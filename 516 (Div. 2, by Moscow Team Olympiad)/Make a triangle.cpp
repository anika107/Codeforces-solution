#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b, c, s, f, t;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        f = a;
        s = b;
        t = c;
    }
    if(b >= a && b >= c){
        f = b;
        s = a;
        t = c;
    }
    if(c >= a && c >= b){
        f = c;
        s = b;
        t = a;
    }
   // cout << f << s << t;
    if(f < (s+t)){
        cout << 0;
    }
    else{
        cout << f - (s+t) +1;
    }
    return 0;
}

