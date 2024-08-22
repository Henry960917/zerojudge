#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,D;
    cin >> n >> D;
    vector<int> stock_price(n);
    for(int i = 0; i<n; i++){
        cin >> stock_price[i];
    }
    int profit = 0,sold = 0;
    int bought = stock_price[0];
    int cnt = 1;
    for(int i = 1; i<n; i++){
        if(cnt==1 && stock_price[i]>=bought+D){
            sold = stock_price[i];
            profit += sold-bought;
            cnt = 0;
        }
        if(cnt==0 && stock_price[i]<=sold-D){
            bought = stock_price[i];
            cnt++;
        }
    }
    cout << profit << endl;
    return 0;
}