#include<bits/stdc++.h>

using namespace std;

int main (){
    int  n ; cin>>n;
    double s = 0;
    for (int i = 1 ; i <= n ; i++){
        s = s + 1.0*1/(2*i);
    }
    cout<<fixed<<setprecision(5)<<s;
    return 0;
}