#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    cin >> m >> n;
    vector<vector<int>> img(m, vector<int>(n));
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> img[i][j];
        }
    }

    for(int i = 0; i<m; i++){
        int left = -1;
        for(int j = 0; j<n; j++){
            if(img[i][j]==1){
                if(left==-1){
                    left = j;
                }
                else{
                    for(int k = left+1; k<j; k++){
                        img[i][k] = 1;
                    }
                    left = -1;
                }
            }
        }

    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << img[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}