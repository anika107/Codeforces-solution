#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, t , k = 1;
    cin >> t;
    while(t --){
        cin >> n >> m;
        //cout << n << " " << n*2 << endl;
        for(int i = 0; i < n; i ++){
            char c = 'a';
            k = 1;
            while(k <= m && i < n){
                cout << c;
                k ++;
                i ++;
                c ++;
            }
            i --;
        }
        cout << endl;
    }
    return 0;
}



