#include<iostream>
#include<string>

using namespace std;


int main(){
    string s;
    while(getline(cin, s)){
        for(auto it=s.rbegin(); it!=s.rend(); it++){
            cout << *it;
        }
    }
    return 0;
}

