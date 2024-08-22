#include <iostream>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        if(n<0){
            break;
        }
        cout << 1+((n*n+n)/2) << endl;
    }
    return 0;
}