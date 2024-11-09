<<<<<<< HEAD
#include<iostream>

using namespace std;

int main (){
    int n,a,b; cin>>n>>a>>b;
    if (2*a>=b){
        if (n%2==0)cout<<n/2*b;
        else cout<<a+(n-1)/2*b;
    }
    else cout<<n*a;
    return 0;
=======
#include<iostream>

using namespace std;

int main (){
    int n,a,b; cin>>n>>a>>b;
    if (2*a>=b){
        if (n%2==0)cout<<n/2*b;
        else cout<<a+(n-1)/2*b;
    }
    else cout<<n*a;
    return 0;
>>>>>>> 06c47b3e61e15aa8520720f613492e1133ecbbd1
}