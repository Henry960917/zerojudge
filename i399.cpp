#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> v(3);
    for(int i = 0; i<3; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0]==v[1] && v[1]==v[2]){
        cout << 3 << " " << v[0] << endl;
    }
    else if(v[0]!=v[1] && v[1]==v[2]){
        cout << 2 << " " << v[2] << " " << v[0] << endl;
    }
    else if(v[0]==v[1] && v[1]!=v[2]){
        cout << 2 << " " << v[2] << " " << v[0] << endl;
    }
    else if(v[0]!=v[1] && v[1]!=v[2]){
        cout << 1 << " " << v[2] << " " << v[1] << " " << v[0] << endl;
    }
    return 0;
}