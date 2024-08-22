#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    char c;
    cin >> c;
    for(int i = 0; i<n; i++){
        int s;
        cin >> s;
        vector<int> a(m, 0);
        for(int j = m-1; j>=0 && s>0; j--){
            a[j] = s % 2;
            s/=2;
        }
        for(int j = 0; j<m; j++){
            if(a[j]==0){
                cout << ".";
            }
            else{
                cout << c;
            }
            if(j<m-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}