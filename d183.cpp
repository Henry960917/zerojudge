#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin >> n, n){
        bool found = false;
        for(int num = 1234; num<=98765/n; num++){
            int abcde = num*n;

            int a = abcde/10000;
            int b = (abcde/1000)%10;
            int c = (abcde/100)%10;
            int d = (abcde/10)%10;
            int e = abcde%10;
            
            int f = num/10000;
            int g = (num/1000)%10;
            int h = (num/100)%10;
            int i = (num/10)%10;
            int j = num%10;

            if(a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i && a!=j 
            && b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i && b!=j 
            && c!=d && c!=e && c!=f && c!=g && c!=h && c!=i && c!=j 
            && d!=e && d!=f && d!=g && d!=h && d!=i && d!=j 
            && e!=f && e!=g && e!=h && e!=i && e!=j 
            && f!=g && f!=h && f!=i && f!=j 
            && g!=h && g!=i && g!=j 
            && h!=i && h!=j 
            && i!=j){
                found = true;
                cout << setw(5) << setfill('0') << abcde << " / " << setw(5) << setfill('0') << num << " = " << n << endl; 
            }
        }
        if(!found){
            cout << "There are no solutions for " << n << "." << endl;
        }
    }
    return 0;
}