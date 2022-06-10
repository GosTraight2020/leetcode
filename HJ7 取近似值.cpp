#include<iostream>

using namespace std;

int main(){
    float a;
    while(cin >> a){
        int b = int(a);
        float res = a-b;
        if(res >= 0.5) cout<<b+1;
        else cout<<b;
    }
}
