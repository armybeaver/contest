#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool scp(int n){
    int root = sqrt(n);
    if (root * root == n) return true ;
    else return false;
}

int main(){
    int n; cin>>n;
    cout<<scp(n);
    return 0;
}