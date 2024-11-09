#include<iostream>

using namespace std;

int main(){
    int a ,b;
    cin>>a>>b;
    if ((1ll*a*b)%2==1){
        cout<<((1ll*a*b-1)/2);
    }
    else cout<<((1ll*a*b)/2);
    return 0;
}