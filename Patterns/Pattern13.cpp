#include<bits/stdc++.h>
using namespace std;    

int flag=1;
void pattern13(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag++;
        }
        cout<<endl;
    }   
}

int main(){
    int n;
    cin>>n;
    pattern13(n);
    return 0;
}