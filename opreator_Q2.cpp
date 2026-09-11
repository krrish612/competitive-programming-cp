#include <iostream>
using  namespace std;
int main(){
    int n;
    cin>>n;
    int sum  = 0; 
    int  lastdigit;
    for(int i =0; n>0; i++){
      lastdigit= n%10;
        sum += lastdigit;
        n = n/10;

    }
    cout<<sum ;
}