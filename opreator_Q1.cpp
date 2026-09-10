#include <iostream>//12345678910

using namespace std;
int main (){
    int n;
    cout<<"Enter the value of the n:";
    cin>>n;
    int count = 0; 
    for(int i = 0; i<n; i++){
        if(n>0){
            n=n/10;
            count++;
        }

    }
    cout<<"Value is  :"<<count;
    return 0;

}