#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        cout << n << "! = ";
        int sum = 1;
        if(n>1){
            for(int i = n; i>=2; i--){
                cout << i << " * ";
                sum*=i;
            }
        }
        cout << "1 = " << sum << endl;
    }
    return 0;
}