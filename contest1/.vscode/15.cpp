#include<iostream>

using namespace std;

int main(){
    char c;
    cin>>c;
    if(c>='a'&&c<='z') cout<<"UPPER";
    else if(c>='A'&&c<='Z') cout<<"DIGIT";
    else cout<<"SPECIAL";
    return 0;
}