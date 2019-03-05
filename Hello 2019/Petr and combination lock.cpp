#include <bits/stdc++.h>

using namespace std;
int flag = 0;

void rot(int a[], int m, int i, int s){
    if(i == m){
        if(s == 0 || s == 360 || (s%360) == 0){
            flag = 1;
        }
        return ;
    }
    rot(a, m, i+1, s-a[i]);
    rot(a, m, i+1, s+a[i]);

}
int main(){
    int m, a[10000];
    cin >> m;
    for(int i = 0; i < m; i ++){
        cin >> a[i];
    }
    rot(a, m, 0, 0);
    if(flag == 1){
       cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
