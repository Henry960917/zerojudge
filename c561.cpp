#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i<n; i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int max = 0;
    for(int i = 0; i<n; i++){
        int reversed = 0;
        while(a[i]>0){
            reversed = reversed*10 + a[i]%10;
            a[i]/=10;
        }
        if(reversed>max){
            max = reversed;
        }
    }
    cout << max << endl;
    return 0;
}