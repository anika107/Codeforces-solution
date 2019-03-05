#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double area(ll x1, ll y1, ll x2, ll y2,ll x3, ll y3){
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) +x3 * (y1 - y2)) / 2.00);
}

bool check(ll x1, ll y1, ll x2, ll y2, ll x3,ll y3, ll x4, ll y4, ll x, ll y){

    double A = area(x1, y1, x2, y2, x3, y3) +area(x1, y1, x4, y4, x3, y3);
    double A1 = area(x, y, x1, y1, x2, y2);
    double A2 = area(x, y, x2, y2, x3, y3);
    double A3 = area(x, y, x3, y3, x4, y4);
    double A4 = area(x, y, x1, y1, x4, y4);

    return (A == A1 + A2 + A3 + A4);
}

int main(){
    ll n, d, f, m, x, y;
    cin >> n >> d >> m;
    f = n-d;
    while(m --){
        cin >> x >> y;
        if (check(0, d, d, 0, n, f, f, n, x, y)){
           cout << "YES";
        }
        else{
           cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
