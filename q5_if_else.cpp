#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Input Number :";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<" N is divisible by 3 and 5 ";
    }
    else{
        cout<<" N is not divisible By 5 ";
    }
    return 0;
}