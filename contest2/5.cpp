#include<bits/stdc++.h>

using namespace std;

int main(){
    int n , tich= 1; cin>>n;
    for (int i = 1; i<=sqrt(n); i++){
        if (n%i==0){
            tich = tich * i * n/i;
        }
    }
    cout<<tich;
    return 0;
}