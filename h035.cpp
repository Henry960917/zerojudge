#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> x(n);
    vector <bool> down(10, false);
    vector <int> timer(10,0);
    int score = 0;
    for(int i = 0; i<n; i++){
        cin >> x[i];
    }

    for(int i = 0; i<n; i++){
        //升板
        for(int j = 1; j<=9; j++){
            if(timer[j]==i){
                down[j] = false;
            }
        }
        //投球
        int hit = x[i];
        if(hit!=-1 && !down[hit]){
            down[hit] = true;
            timer[hit] = i+12;
            score+=hit;
        }
        //判斷全清
        bool clear = true;
        for(int k = 1; k<=9; k++){
            if(!down[k]){
                clear = false;
                break;
            }
        }
        if(clear){
            cout << "perfect" << endl;
            return 0;
        }
    }
    cout << score << endl;
    return 0;
}