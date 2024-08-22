#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin >> s){
        int len = s.length();
        int cnt=0;
        for(int i = 0; i<len; i++){
            if(s[i]=='0' || s[i]=='6' || s[i]=='9'){
                cnt++;
            }
            if(s[i]=='8'){
                cnt+=2;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}