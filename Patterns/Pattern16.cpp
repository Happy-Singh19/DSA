#include<bits/stdc++.h>
using namespace std;    

void pattern16(int n){
    for(char i='A';i<'A'+n;i++){
        for(char j='A';j<=i;j++){
            cout<<i;
        }
        cout<<endl; 
    }
}

int main(){
    int n;
    cin>>n;
    pattern16(n);
    return 0;
}