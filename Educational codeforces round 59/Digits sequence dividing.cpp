#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    int q, n;
    cin >> q;
    while(q --){
        cin >> n >> s;
        if(n == 2){
            if(s[0] >= s[1]){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
                cout << 2 << endl << s[0] << " " << s[1] << endl;
            }
        }
        else{
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s[0] << " ";
            for(int i = 1; i < n; i ++){
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}



