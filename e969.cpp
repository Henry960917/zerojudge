#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int total = n;
    int min = 0;
    string food;
    if(k==0){
        
        food = "Apple pie";
        total-=32;
        if(total!=0){
            cout << min << ": Wayne eats an " << food << ", and now he has " << total << " dollars." << endl;
        }
    }
    else if(k==1){
        food = "Corn soup";

    }

}