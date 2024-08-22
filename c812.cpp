#include <iostream>
using namespace std;

int main(){
    int N,V,q;
    cin >> N >> V >> q;
    int cnt = 0;
    for(int k = 0; k<N-1; k++){
        int i,j,rij;
        cin >> i >> j >> rij;
        if(rij>=q){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}