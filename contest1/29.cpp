#include<iostream>

using namespace std;

int main(){
    int n,u1,d; cin>>n>>u1>>d;
    cout<<n*u1+((n*(n-1))/2)*d;
    return 0;
}