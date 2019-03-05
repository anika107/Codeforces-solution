#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, c = 0, f =  0;
    cin >> n;
    string s;
    cin >> s;
    if(n >= 11){
        int x= floor(n/11);
        for(int i = 0 ;i < n; i ++){
            if(s[i] == '8'){
               c ++;
               /*if(c == x){
                  f = 1;
                  break;
               }*/
            }
        }
        //cout << c << " " << x << endl;
        if(c <= x){
            cout << c;
        }
        else if(c > x){
            cout << x;
        }
        else{
            cout <<0;
        }
    }
    else{
        cout << 0;
    }
    return 0;
}
