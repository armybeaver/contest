#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;
    long long tong = 0;
    for (int i = 0; i <= sqrt(n); ++i){
        if (n % i == 0){
            tong = tong + i + n/i;
        }
    }
    cout<<tong;
    return 0;
}