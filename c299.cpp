#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int m,mx=0,mn=1000;
    for(int i = 0; i<n; i++){
        cin >> m;
        mx = max(m,mx);
        mn = min(m,mn);
    }
    cout << mn << " " << mx << " ";
    if(mx-mn==n-1){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}