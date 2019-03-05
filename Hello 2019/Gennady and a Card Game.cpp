#include <bits/stdc++.h>

using namespace std;
int main(){
    string o, a, b, c, d, e;
    cin >> o >> a >> b >> c >> d >> e;
    if(o[0] == a[0] || o[0] == b[0] ||o[0] == c[0] ||o[0] == d[0] ||o[0] == e[0] || o[1] == a[1] ||o[1] == b[1] ||o[1] == c[1] ||o[1] == d[1] ||o[1] == e[1] ){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
