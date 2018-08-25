#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k, c = 0, f = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    char r = s[0];
    for(int i = 1;i < n; i ++){
        if(r == s[i]){
            c = 0;
            f = 0;
            for(int j = i, k = 0; j < n; j ++, k ++){
                if(s[j] != s[k]){
                    c = 0;
                    f = 1;
                    break;
                }
                c ++;
            }
            if(f == 0){
               break;
            }
        }
    }
    if(c)
       k --;
    while(k --){
        for(int i = 0;i < n - c; i ++){
            cout << s[i];
        }
    }
    if(c)
       cout << s;
    return 0;
}
