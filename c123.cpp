#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    while(cin >> N && N!=0){
        while(true){
            vector<int> car(N);
            cin >> car[0];
            if(car[0]==0){
                break;
            }
            for(int i = 1; i<N; i++){
                cin >> car[i];
            }
            stack <int> s;
            int car_count = 0;
            for(int i = 1; i<=N; i++){
                s.push(i);
                while (!s.empty() && s.top() == car[car_count]) {
                    s.pop();
                    car_count++;
                }
            }
            if(car_count == N){
                cout << "Yes" << '\n';
            }
            else{
                cout << "No" << '\n';
            }
        }
    }
    return 0;
}