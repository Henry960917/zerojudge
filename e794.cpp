#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> a(n);
    a[0]=0, a[1]=1;
    for(int i = 2; i<=46; i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[n] << ":" << a[n+1] << endl;
    return 0;
}