#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s;
    vector<string> res;
    while(cin >> s){
        res.push_back(s);
    }
    for(auto it=res.rbegin(); it!=res.rend(); it++){
        cout << *it << " ";
    }
}
