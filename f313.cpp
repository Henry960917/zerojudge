#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r,c,k,m;
    cin >> r >> c >> k >> m;
    vector<vector<int>> arr(r, vector<int> (c));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin >> arr[i][j];
        }
    }
    
    return 0;
}