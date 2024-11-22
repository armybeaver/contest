#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ; cin >> n ;
    system("cls");
    for (int i = 0; i<n; i++){
        for (int i = 0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i<n;i++){
        if (i == 0||i==(n-1)){
            for (int i= 0; i<n;i++){
                cout<<"*";
            }
        }
        else{
            for (int i = 0 ;i <n;i++){
                if (i==0||i==n-1){
                    cout<<"*";
                }
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i<n;i++){
        if (i == 0||i==(n-1)){
            for (int i= 0; i<n;i++){
                cout<<"*";
            }
        }
        else{
            for (int i = 0 ;i <n;i++){
                if (i==0||i==n-1){
                    cout<<"*";
                }
                else cout<<"#";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i<n;i++){
        if (i == 0||i==(n-1)){
            for (int o= 0; o<n;o++){
                cout<<i+1<<"  ";
            }
        }
        else{
            for (int o = 0 ;o<n;o++){
                if (o==0||o==n-1){
                    cout<<i+1<<" ";
                }
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}