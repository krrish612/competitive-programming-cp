#include <iostream>
using namespace std;
int main(){
    int n; int f; 
cout<<"Enter the value of the N':";
cin>>n;
f = 1;
for(int i = 1; i<n; i++){
    if(n%i==0){
        f=i;
    }
}
cout<<f;
return 0;
}