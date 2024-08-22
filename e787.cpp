#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>> treasure(n, vector<int>(m));
    vector<vector<int>> trans(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> treasure[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> trans[i][j];
        }
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int r_cnt=0, c_cnt=0;
            for(int x = 0; x<n; x++){
                c_cnt+=trans[x][j];//col
            }
            for(int y = 0; y<m; y++){
                r_cnt+=trans[i][y];//row
            }
            int cnt = c_cnt + r_cnt - trans[i][j];
            if(cnt%2){
                treasure[i][j]= 1-treasure[i][j];
            }
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << treasure[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}