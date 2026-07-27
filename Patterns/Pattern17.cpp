#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        for(char j='A'+i-2;j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern17(n);
    return 0;
}