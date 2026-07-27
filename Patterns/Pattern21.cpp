#include<bits/stdc++.h>
using namespace std;    

/*void pattern21(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n=4;
    pattern21(n);
    return 0;
}