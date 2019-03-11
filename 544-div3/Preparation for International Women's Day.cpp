#include <bits/stdc++.h>

using namespace std;

#define dbg(args...) {cout<<"-->";debugger::call(#args,args);cout<<"\n";}
struct debugger {
	static void call(const char* it) {}
	template<typename T, typename ... aT>
	static void call(const char* it, T a, aT... rest) {
		string b;
		for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
		cout << b << "=" << a << " ";
		call(++it, rest...);
	}
};
int main(){
    int n, x, c = 0, k;
    cin >> n >> k;
    int a[200005];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n; i ++){
        cin >> x;
        if(a[x%k] == -1){
            a[x%k] = 0;
        }
        a[x%k] ++;
    }
    /*for(int i = 0; i <= k; i ++){
        cout << a[i] << endl;
    }
    cout << endl;*/
    c += a[0]/2;
    for(int i = 1; i < k; i ++){
        //if(a[i] != -1 && a[k-i] != -1){
        if(i > k-i){
            break;
        }
            if(i == k-i){
                c += a[i]/2;
                //dbg(c);
                break;
            }
            else{
                int mn = min(a[i], a[k-i]);
                /*if(i == 0){
                    if(mn == a[k-i]){
                        c += (a[i]-mn)/2;
                    }
                }*/
                //dbg(mn);
                c += mn;
                //dbg(c);
            }
        //cout << c << endl;
        //}
    }
    cout << c*2;

    return 0;
}
