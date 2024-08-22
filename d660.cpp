#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int i = 0; i<T; i++){
        int N;
        cin >> N;
        int low = 0, high = 0;
        vector <int> wall(N);
        for(int j = 0; j<N; j++){
            cin >> wall[j];
        }
        for(int j = 1; j<N; j++){
            if(wall[j-1]<wall[j]){
                high++;
            }
            else if(wall[j-1]>wall[j]){
                low++;
            }
        }
        cout << "Case " << i+1 << ": " << high << " " << low << endl;
    }
    return 0;
}