#include<bits/stdc++.h>

using ll = long long;

using namespace std;

int tinhtong2(int n){
    int sum = 0;
    for (int i = 1;i<=n;i++) sum+=i;
    return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","W",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}