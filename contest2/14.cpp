#include<bits/stdc++.h>

using namespace std;

int main (){
    int n ; cin >> n ;
    int sum = 1;
    for (int i = 0 ; i < n; i++){
       sum = sum *(n-i);
    }
    cout<<sum;
    return 0;
}