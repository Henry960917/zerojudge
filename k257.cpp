#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num = 0;
    for(int i = 0; i<s.size(); i++){
        if(!isdigit(s[i])){
            cout << s[i];
        }
        else{
            num = num * 10 + (s[i]-'0');
        }
    }
    cout << setfill('0') << setw(3) << num << endl;
    return 0;
}
