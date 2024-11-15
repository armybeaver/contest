#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;cin>>n;
    int state = 0;
    int mang[n];
    for(int i = 0; i<=n;i++){
        cin>>mang[i];
    }
    for(int i = 0; i<=n;i++){
        if (mang[i]==2022){
        cout<<"YES";
        state ++;
        break;
        }
    }
    if (state == 0) cout<<"NO";
    return 0;
}