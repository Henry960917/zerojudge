#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    int n;
    cin >> a;
    cin >> n;
    int len = a.size();
    for(int i = 0; i<len; i++){
        cout << a[i];
        if(i==n){
            cout << ".";
        }
    }
    cout << endl;
    return 0;
}