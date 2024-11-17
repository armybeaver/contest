#include<bits/stdc++.h>

using namespace std;

int main (){
    int  n ; cin>>n;
    int i ;
    for (i= 1 ; i <= 18; i ++){
        if (n/(pow(10,i))<1){
        break;
        }
    }
    cout<<i;
    return 0;
}