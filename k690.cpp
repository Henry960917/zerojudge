#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    char s[2];
    for(int i = 0; i<n; i++){
        cin >> a >> s >> b;
        if(s[0] =='*' && s[1]=='*'){
            cout << fixed << setprecision(0) << pow(a,b) << endl;
        }
        else if(s[0] == 'x'){
            cout << a*b << endl;
        }
    }
    return 0;
}