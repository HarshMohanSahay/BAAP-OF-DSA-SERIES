#include<iostream>
using namespace std;
int main(){
    float length,breath;
    
    cout<<"enter the length : ";
    cin>>length;
    cout<<"enter the breath : ";
    cin>>breath;
    float area;
    float peremter;
    area = length*breath;
    peremter = 2*(length+breath);
    if(area>peremter){
        cout<< "area is larger then peremeter";
    }
    else{
        cout<<"area is not larger then peremeter"; 
     }
}