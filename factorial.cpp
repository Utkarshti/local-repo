#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a  Positive Number you want to calculate factorial : "<<endl;
    cin>>number;
    if(number <0){
        cout<<"factorial of  negative number is not possible : "<<endl;
    }
    else{
        int fact=1;
        for(int i=1;i<=number;i++){
            fact=fact*i;
        }
        cout<<"factorial of "<<number<<" is "<<fact<<endl;
    }
    return 0;
}