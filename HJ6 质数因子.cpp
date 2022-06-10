##############迭代##############
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        for(int i=2; i<=sqrt(n) && i<n; i++)
            while(n % i == 0){
                cout<<i<<" ";
                n = n / i;
            }
        if(n-1){
            cout<<n;
        }
    }
    return 0;
}

#################递归####################
#include<iostream>
#include<cmath>

using namespace std;

void helper(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";
            helper(n / i);
            return;
        }
    }
    if(n - 1) cout << n << " ";
}

int main(){
    int n;
    while(cin >> n){
        helper(n);
    }
