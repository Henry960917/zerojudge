#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int key,cnt=0;
    vector <int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cin >> key;
    int L=0, R=n-1;
    bool found = false;
    while(L<=R){
        int m = L+(R-L)/2;
        cnt++;
        if(a[m]==key){
            cout << m+1 << " " << cnt << endl;
            found = true;
            break;
        }
        if(a[m]<key){
            L = m+1;
        }
        else{
            R = m-1;
        }
    }
    if(!found){
        cout << "not found " << cnt << endl;
    }
    return 0;
}
