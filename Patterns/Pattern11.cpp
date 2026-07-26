#include<bits/stdc++.h>
using namespace std;

int flag=0;
void pattern11(int n){
    for(int i=0;i<n;i++){
        if(i%2==0) flag=1;
        else flag=0;
        for(int j=0;j<=i;j++){
            cout<<flag;
            flag=1-flag;
        }
        cout<<endl; 
    }
}

int main(){
    int n;
    cin>>n;
    pattern11(n);
    return 0;
}
