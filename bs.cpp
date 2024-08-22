#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int key,cnt=0;
    int a[10001];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cin >> key;
    int L=0, R=n-1;

    while(L<=R){
        int m = L+(R-L)/2;
        if(a[m]==key){
            cnt++;
            cout << m+1 << " " << cnt << endl;
            break;
        }
        if(a[m]<key){
            L = m+1;
            cnt++;
        }
        else{
            R = m-1;
            cnt++;
        }
    }
    if(L>R){
        cout << "not found " << cnt << endl;
    }
    return 0;
}