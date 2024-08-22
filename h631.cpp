#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n%2==0){
        n/=2;
    }
    while(n%3==0){
        n/=3;
    }
    while(n%5==0){
        n/=5;
    }
    if(n==1){
        cout << "ugly" << endl;
    }
    else{
        cout << "beautiful" << endl;
    }
    return 0;
}