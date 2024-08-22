#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector <int> ascii;
    int len = s.size();
    for(int i = 0; i<len; i++){
        ascii.push_back(s[i] - '0');
        
    }
    
}