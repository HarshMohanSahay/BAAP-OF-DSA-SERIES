#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x axis ";
    cin>>x;
    cout<<"enter the y axis";
    cin>>y;
    
    
    if(y==0 && x!=0){
        cout<<"point on x axis";  
    }
    else if(x==0 && y!=0){
        cout<<"point on y axis"; 
    }
    else if(x==0&&y==0){
        cout<<"It is origin ";
    }
    
}