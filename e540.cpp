#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s;
        cin >> s;
        int len = s.size(), cnt = 0, sum = 0;
        for(int j = 0; j<len; j++){
            if(s[j]=='O'){
                cnt++;
                sum += cnt;
            }
            else{
                cnt = 0;
            }
        }
        cout << sum << endl;
    }
    return 0;
}