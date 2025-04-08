#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first side";
    cin>>a;
    cout<<"enter the second side";
    cin>>b;
    cout<<"enter the second side";
    cin>>c;
    
    if(a==b&&b==c){
        cout<<"this is equilateral triangle";  
    }
    else if(a==b||c==a||b==c){
        cout<<"This is isosceles triangle"; 
    }
    else{
        cout<<"This is scalene triangles";
    }
}