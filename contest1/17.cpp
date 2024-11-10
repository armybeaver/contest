
#include<iostream>

using namespace std;

int main(){
    float a,b,c,d,tb;
    cin>>a>>b>>c>>d;
    tb = (float)((a+b+2*c+3*d)/7);
    if (tb>=8.0) cout<<"GIOI";
    else if (tb>=6.5&&tb<8.0) cout <<"KHA";
    else cout<<"TRUNG BINH";
    return 0;
}