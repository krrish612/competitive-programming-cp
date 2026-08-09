#include<iostream>
using  namespace std;
int main(){
    int a,b,c;
    cout<<"A :";
    cin>>a;
    cout<<"B : ";
    cin>>b;
    cout<<"C : ";
    cin>>c;
    if( a+b>c || b+c >a || a+c>b){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Invalid Triangle:";
    }


}