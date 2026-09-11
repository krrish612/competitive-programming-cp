#include <iostream> 
using namespace std;
int main(){
    int n;
    cout<<"Enter the ASCII value you want to Print :";
    cin>>n;
    int u = 65;
    
        if(n<65 || n>90 ){
            cout<<"Not valid Number ";
        }
        else{
            cout<<char(n);
            cout<<endl;
        }
    
    return 0;
}