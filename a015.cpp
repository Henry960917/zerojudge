#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int r,c;
    while(cin >> r >> c){
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                cin >> matrix[i][j];
            }
        }
        vector<vector<int>> trans(c, vector<int>(r));
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                trans[j][i] = matrix[i][j];
            }
        }
        for(int i = 0; i<c; i++){
            for(int j = 0; j<r; j++){
                cout << trans[i][j] << " ";
            }
            cout << endl;
        }
    }
}