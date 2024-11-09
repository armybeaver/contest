<<<<<<< HEAD
#include<iostream>

using namespace std;

int main (){
    int n,m,a;
    cin >>n>>m>>a;
    if (n==m&&a>=m) cout<<"1";
    if ((float)(a/m)>1&&(float)(a/n)>1) cout <<"1";
    else if (a<m&&a<n){
        if (m%a!=0){
            m=(m/a)+1;
        }
        if (n%a!=0){
            n=(n/a)+1;
        }
        cout<<n/a*m/a;
    }
    else cout<<"2";   
    return 0;
=======
#include<iostream>

using namespace std;

int main (){
    int n,m,a;
    cin >>n>>m>>a;
    if (n==m&&a>=m) cout<<"1";
    if ((float)(a/m)>1&&(float)(a/n)>1) cout <<"1";
    else if (a<m&&a<n){
        if (m%a!=0){
            m=(m/a)+1;
        }
        if (n%a!=0){
            n=(n/a)+1;
        }
        cout<<n/a*m/a;
    }
    else cout<<"2";   
    return 0;
>>>>>>> 06c47b3e61e15aa8520720f613492e1133ecbbd1
}