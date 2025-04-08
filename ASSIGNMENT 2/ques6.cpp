#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    cout<<"enter the third number";
    cin>>c;
    
    if(a<b&&a<c){
        cout<<a<<" is least number";  
    }
    else if(b<c&&b<a){
        cout<<b<<" is least number"; 
    }
    else{
        cout<<c<<" is least number";
    }
}