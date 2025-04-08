#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year : ";
    cin>>year;
   
    if(year%4==0){
        cout<<"This is the leap year "; 
    }
    else{
        cout<<"this is not the leap year"; 
    }
    
}