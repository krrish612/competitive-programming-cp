#include <iostream>
using namespace std;
int main(){
     for(int i = 1; i<=20; i++){
        if(i == 3 || i == 8||i == 9|| i==14 ){
            continue;
        }
        else{
            cout<<i <<" " ;
            //l;

        }
     }
     return 0;
}