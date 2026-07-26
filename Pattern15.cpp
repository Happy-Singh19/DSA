#include<bits/stdc++.h>
using namespace std;    

void pattern15(int n){
    for(int i=n;i>=1;i--){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl; 
    }
}

int main(){
    int n;
    cin>>n;
    pattern15(n);
    return 0;
}