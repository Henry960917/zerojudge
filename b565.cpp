#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        vector<int> s(n);
        int mx = 0;
        for(int i = 0; i<n; i++){
            cin >> s[i];
        }
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += s[j];
                if(sum>mx){
                    mx = sum;
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}