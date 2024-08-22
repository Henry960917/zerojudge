#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> num(N);
    vector <bool> visited(N,false);
    for(int i = 0; i<N; i++){
        cin >> num[i];
    }
    int cnt = 0;
    for(int i = 0; i<N; i++){
        if(visited[i]==0){
            cnt++;
            int j = i;
            while(visited[j]==0){
                visited[j]=true;
                j = num[j];
            }
        }
    }
    cout << cnt << endl;
    return 0;
}