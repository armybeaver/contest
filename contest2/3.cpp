#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,souoc; cin>>n;
    for (int i=1; i <= n; i++){
        if (n%i==0){
            souoc++;
        }
    }
    cout<<souoc<<endl;
    for (int i=1; i <= n; i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}