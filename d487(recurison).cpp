#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

void print(int n){
    cout << n << "! = ";
    if(n>1){
        for(int i = n; i>1; i--){
            cout << i << " * ";
        }
    }
    cout << "1 = " << factorial(n) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n){
        print(n);
    }
    return 0;
}