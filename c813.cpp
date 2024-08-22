#include <iostream>
using namespace std;

int f(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int g(int n){
    while(n>=10){
        n = f(n);
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n, n){
        cout << g(n) << endl;
    }
    return 0;
}
