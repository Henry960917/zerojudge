#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    vector<int> X(K);
    int C,into=0,mx=-1;
    for(int i = 0; i<K; i++){
        cin >> X[i];
        cin >> C;
        if(C==1){
            into++;
            if(into>mx){
                mx = into;
            }
        }
        else{
            into--;
        }
    }
    cout << mx << endl;
    return 0;
}