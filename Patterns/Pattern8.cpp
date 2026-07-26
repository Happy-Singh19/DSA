#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern8(n);
    return 0;
}