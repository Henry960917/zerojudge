#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int cnt = 0,tm=0,a,b;
    vector <int> clerk(m);
    vector <int> clerk_times(m);
    vector <int> drinks;
    for(int i = 0; i<n; i++){
        int tmp;
        cin >> tmp;
        drinks.push_back(tmp);
    }
    for(int i = 0; i<m; i++){
        clerk_times[i] = drinks[i];
    }
    while(!drinks.empty()){
        for(int i = 0; i<m; i++){
            if(clerk_times[i]!=0){
                clerk_times[i]--;
                cnt++;
            }
            else{
                for(int j = i; j<n; j++){
                    clerk_times[j] = drinks[j];
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}