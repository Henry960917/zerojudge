#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int D,I;
    for(int i = 0; i<t; i++){
        cin >> D >> I;
        int x = 1;
        for (int j = 0; j<D; j++)
        {
            //¥ª¤l¾ð2x ¥k¤l¾ð2x+1
            if (I%2==0)
            {
                I /= 2;
                x = (x*2)+1;
            }
            else
            {
                I = (I/2)+1;
                x *= 2;
            }
        }
        cout << x/2 << "\n";
    }
    return 0;
}