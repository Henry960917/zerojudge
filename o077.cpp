#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>> arr(h, vector<int>(w));
    for(int k = 0; k<n; k++){
        int r,c,t,x;
        cin >> r >> c >> t >> x;
        for(int i = 0; i<h; i++){
            for(int j = 0; j<w; j++){
                if(abs(i-r)+abs(j-c)<=t){
                    arr[i][j]+=x;
                }
            }
        }
    }
    for(int i = 0; i<h; i++){
        for(int j = 0; j<w; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}