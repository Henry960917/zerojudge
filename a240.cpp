#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        int sum=0, num=1;
        for(int i = 0; i<n; i++){
            num*=10;
            arr[i] = num/17;
            num-=arr[i]*17;
            sum+=arr[i];
        }
        cout << arr[n-1] << " " << sum << endl;
    }
    return 0;
}