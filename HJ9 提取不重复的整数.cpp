#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    unordered_set<int> record;
    while(cin >> n){
        while(n){
            int temp = n % 10;
            if(record.find(temp) == record.end()){
                record.insert(temp);
                cout << temp;
            }
            n /= 10;
        }
        
    }
    return 0;
}
