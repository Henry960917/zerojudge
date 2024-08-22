#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n;
    while(cin >> n){
        int num = 0;
        for(int i = 0; i<n.size(); i++){
            num += n[i]-'0';
        }
        if(num==0){
            cout << "yes" << endl;
        }
        else if(num%3==0){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}