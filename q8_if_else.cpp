#include <iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<<" A = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;
    cout<<"C = ";
    cin>> c;
    if(a>b && a>c){
        cout<<" The largest is  "<<a;

    }
    else if(b>a && b>c){
        cout<<"The largest is  "<<b;
    }
    else {
        cout<<"The largest is  "<<c;
    }

    return 0;

}