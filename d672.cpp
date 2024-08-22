#include <iostream>
using namespace std;

int sum_counting(int n){
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n/=10;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(cin >> s && s!="0"){
        int n=0;
        for(int i = 0; i<s.size(); i++){
            n+=s[i]-'0';
        }
        int degree = 1;
        while(n > 9){
            n = sum_counting(n);
            degree++;
        }
        if(n==9){
            cout << s << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
        else{
            cout << s << " is not a multiple of 9." << endl;
        }
    }
    return 0;
}