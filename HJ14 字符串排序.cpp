#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<string, vector<string>, greater<string>> q;
    string s;
    for (int i=0; i<n; i++){
        cin >> s;
        q.push(s);
    }
    
    while(!q.empty()){
        cout << q.top() <<endl;
        q.pop();
    }
    
    return 0;
}
