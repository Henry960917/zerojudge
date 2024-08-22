#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    string str;
    for(int i = 0; i<t; i++){
        int count = 0;
        bool check = true;
        cin >> str;
        stack<char> s;
        for(int j = 0; j<str.size(); j++){
            if(str[j]=='('){
                s.push(str[j]);
            }
            else if(str[j] == ')'){
                if(!s.empty()){
                    s.pop();
                    count++;
                }
                else{
                    check = false;
                    break;
                }
            }
        }
        if(!check || !s.empty()){
            cout << 0 << endl;
        }
        else{
            cout << count << endl;
        }
    }
    return 0;
}