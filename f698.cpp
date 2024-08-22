#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string str;
    stack <int> s;
    while(cin >> str){
        if(str=="+" || str=="-" || str=="*" || str=="/"){
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();

            if(str=="+"){
                s.push(a+b);
            }
            else if(str=="-"){
                s.push(a-b);
            }
            else if(str=="*"){
                s.push(a*b);
            }
            else if(str=="/"){
                s.push(a/b);
            }
        }
        else{
            s.push(stoi(str));
        }
    }
    cout << s.top() << endl;
    return 0;
}