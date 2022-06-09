#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> order;
    int n;
    int count;
    cin>>count;
    while(cin>>n){
        order.insert(n);
    }
    
    for(auto it = order.begin(); it!=order.end(); it++){
        cout<<*it<<endl;
    }
}
