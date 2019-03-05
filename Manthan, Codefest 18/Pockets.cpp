#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, c = 0, d;
    cin >> n;
    while(n > 0){
        n /=2;
        c ++;
    }
    cout << c;
    return 0;
}
