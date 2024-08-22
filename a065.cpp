#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i<s.size()-1; i++){
        if(s[i]>=s[i+1]){
            cout << (s[i]-'0')-(s[i+1]-'0');
        }
        else{
            cout << (s[i+1]-'0')-(s[i]-'0');
        }
    }
    cout << endl;
    return 0;
}