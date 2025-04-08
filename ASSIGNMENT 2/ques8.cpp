#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter the first cordinate ";
    cin>>x1;
    cin>>y1;
    cout<<"enter the second cordinate ";
    cin>>x2;
    cin>>y2;
    cout<<"enter the third cordinate ";
    cin>>x3;
    cin>>y3;
    int m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    
    if(m1==m2){
        cout<<"co-linear ";  
    }
    else{
        cout<<"not a colinear";
    }
}