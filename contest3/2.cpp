#include<bits/stdc++.h>

using namespace std;

int tinhtong(int a, int b){
    int sum = 0;
    for (int i = a; i<=b;i++){
        if (i%2==0) sum+=i;
    }
    return sum;
}

int main(){
    int a , b;cin >>a>>b;
    cout<<tinhtong(a,b);';'
    return 0;
}