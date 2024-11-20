#include<bits/stdc++.h>

using namespace std;

int main (){
    int  n ; cin>>n;
    int dem = 0 ;
    int i;
    for (i = 1 ; i < 18; ++i){
        int vl = (n - (n/(pow(10,i)))*(pow(10,i)))/(pow(10,i-1));
        if (vl == 1 || vl == 2 || vl == 3 || vl == 5 || vl == 7){
            dem ++;
        }
        else if (n/(pow(10,i))==0){
            break;
        }
    }
    cout<< dem;
    return 0;
}