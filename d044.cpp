#include <iostream>
#include <vector>
using namespace std;

int sum_digits(int a){
    int sum = 0;
    while(a>0){
        sum += a % 10;
        a/=10;
    }
    return sum;
}

int d(int n){
    return n + sum_digits(n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <bool> can(1000001,false);
    for(int i = 1; i<=1000000; i++){
        int num = d(i);
        if(num<=1000000){
            can[num] = true;
        }
        if(!can[i]){
            cout << i << endl;
        }
    }
    return 0;
}