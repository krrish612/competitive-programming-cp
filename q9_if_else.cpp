#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks of the student:";
    cin>>n;
    if(n>81 && n<100){
        cout<<"The student grade is A+";
    }
    else if (n>61 && n<80)
    {
        cout<<"The student has grade Of b";
    }
    else if (n>41&&n<60)
    {
        cout<<"The student grade is C";
    }
    else{
        cout<<"The student grade is F";
    }
    
    return 0;
    
}