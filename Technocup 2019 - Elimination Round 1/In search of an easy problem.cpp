#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, x, f = 0;
    cin >> n;
    while(n --){
        cin >> x;
        if(x == 1){
            f = 1;
        }
    }
    if(f){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
    return 0;
}
