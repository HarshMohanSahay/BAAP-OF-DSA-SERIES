#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any charcter ";
    cin>>ch;
    int a =int(ch);
    
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        cout<<"It's Alphabet ";  
    }
    else if(a>=48 && a<=57){
        cout<<"It's Digit";
    }
    else cout<<"It's special charater";
}