#include <iostream> 
using  namespace std;
int main(){
    int n;
    cout<<"enter the value of the factorial :";
    cin>>n;
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact*i;

    }
    cout<<"The value of the factorial is :"<<fact;
    return  0;

}