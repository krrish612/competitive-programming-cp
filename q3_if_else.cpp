#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Sp";
    cin>>sp;
    cout<<"Cp";
    cin>>cp;
    if(sp>cp){
        cout<<"The seller had mad a profit";

    }
   else if(cp>sp){
        cout<<"The seller  had mad a lost";
    }
    else{
    cout<<"no profit no loss";
    }
    return 0;

}