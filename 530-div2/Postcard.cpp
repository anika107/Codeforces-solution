#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll k, t = 0, snow = 0, candy = 0, len = 0;
    string s;
    cin >> s >> k;
    //cout << s.size();
    for(char c: s){
        if(c == '*'){
           snow ++;
        }
        else if(c == '?'){
            candy ++;
        }
        else{
            len ++;
        }

    }
    //cout << len << endl;
    if(len == k){
       for(char c: s){
           if(c == '*' || c == '?'){
              continue;
           }
           else{
              cout << c;
           }
       }
    }
    else if(len > k){
        if((len-k) <= (snow+candy)){
            ll h = len - k;
           for(int i = 0; i < s.size(); i ++){
               if((s[i+1] == '*' || s[i+1] == '?') && (h != 0)){
                  h --;
               }
               else if(s[i] == '*' || s[i] == '?'){
                  continue;
               }
               else{
                  cout << s[i];
               }
           }
        }
        else{
            cout << "Impossible";
        }
    }
    else{
        if(snow){
            int f = 0;
           for(int i = 0; i < s.size(); i ++){
              if(s[i+1] == '*' && f == 0){
                 ll h = k - len;
                 cout << s[i];
                 while(h){
                    cout << s[i];
                    //t ++;
                    h --;
                 }
                 f = 1;
              }
              else if(s[i] == '*' || s[i] == '?'){
                continue;
              }
              else{
                 cout << s[i];
                 //t ++;
              }

           }
        }
        else{
            cout << "Impossible";
        }
        //cout << t;
    }
    return 0;
}
