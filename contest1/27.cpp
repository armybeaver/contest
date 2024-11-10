#include<iostream>

using namespace std;

int main(){
    float a;cin>>a;
    a=a*10;
    if (a-(int)(a/10)*10>5.0) cout<<(int)a/10+1;
    else cout<<(int)a/10;
    return 0;
}