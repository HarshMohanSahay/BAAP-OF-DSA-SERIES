#include<iostream>
using namespace std;
int main(){
    int r;
    float pi=3.14;
    cout<<"enter the radius : ";
    cin>>r;
    float area;
    float circum;
    area = pi*r*r;
    circum = 2*pi*r;
    if(area>circum){
        cout<< "area is larger then circum";
    }
    else{
        cout<<"area is not larger then circumstance"; 
     }
}