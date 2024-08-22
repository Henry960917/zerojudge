#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int M=1;
    while(cin >> n){
        vector <int> s(n);
        for(int i = 0; i<n; i++){
            cin >> s[i];
        }
        long long int P = -99999;
        for(int i = 0; i<n; i++){
            long long int product = 1;
            for(int j = i; j<n; j++){
                product*=s[j];
                if(product>P){
                    P = product;
                }
            }
        }
        cout << "Case #" << M << ": The maximum product is ";
        if(P>0){
            cout << P;
        }
        else{
            cout << 0;
        }
        cout << ".\n\n";
        M++;
    }
    return 0;
}