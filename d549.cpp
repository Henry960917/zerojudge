#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long long int a,b,c;
    while(cin >> a >> b >> c){
        cout << fixed << setprecision(2) << sqrt(a*a+c*c-b*b) << endl;
    }
    return 0;
}