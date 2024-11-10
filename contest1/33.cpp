#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;
    int i = min({k2,k5,k6}); int tong = 0; tong = tong +i*256;
    k2=k2-i;
    int f = min({k2,k3});tong = tong + f*32; cout<<tong;
    return 0;
}