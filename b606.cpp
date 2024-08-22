#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N,a,b;
    while(cin >> N, N){
        long long int cost=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i<N; i++){
            int tmp;
            cin >> tmp;
            pq.push(tmp);
        }
        for(int i = 0; i<N-1; i++){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cost += a+b;
            pq.push(a+b);
        }
        cout << cost << endl;
    }
    return 0;
}