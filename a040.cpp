#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int n){
    int cnt = 0;
    while(n!=0){
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    bool check = false;
    for(int i = n; i<=m; i++){
        int digits = count_digits(i);
        int tmp = i;
        int num = 0;
        while(tmp!=0){
            num += pow(tmp%10, digits);
            tmp /= 10;
        }
        if(num == i){
            cout << i << " ";
            check = true;
        }
    }
    if(!check){
        cout << "none"; 
    }
    cout << endl;
    return 0;
}