#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ; cin >>n;
    system("cls");
    for (int i = 1;i<=n;i++){
        for (int o = 1;o<=i;o++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1;i<=n;i++){
        for (int o = n;o>=i;o--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1; i<=n;i++){
        for (int o = i; o<n+i;o++){
            if (o>=n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1; i<=n;i++){
        for (int o = i;o<=n+i;o++){
            if (o>n) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1;i<=n;i++){
        for (int o = 1;o<=i;o++){
            if (i==n){
                for (int i = 1; i<=n;i++) cout<<"*" ;
                break;
            }
            else if (o==1||o==i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}