#include<iostream>

using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int l, res;

    if (l%2==0) l=n/2; 
    else l=n/2+1;

    if(l%m==0) cout<<l; 
    
    res=(l/m+1)*m; 
    if (res<=n)cout<<res;
    else cout<<"-1";
    return 0;
}