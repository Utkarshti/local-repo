#include<iostream>
#include<string.h>
using namespace std;

//------------->    approach-2   <------------------------
// TC= O(n)
//  SC= o(1)
 
// bool checkPallindrome(char* array,int size){
//     int i,j;
    
//     cout<<"Array is : "<<array<<endl;
//     for(int i=0,j=size-1-i;i<=j;i++,j--){
//         if(array[i]!=array[j]){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    bool check;
    char string1[10];
    char string2[10];
    int i=0,counter=0;
    cout<<"Enter the string you want to check pallindrome or not"<<endl;
    cin>>string1;
    int length=strlen(string1);
    for(int i=length-1,j=0;i>=0;i--,j++){
        string2[j]=string1[i];
    }
    cout<<"string 1 :"<<string1<<endl;
    cout<<"string 2 :"<<string2<<endl;
    for(int i=0;i<length;i++){
        if(string1[i]!=string2[i]){
            cout<<"string is not pallindrome"<<endl;
            counter=1;
            break;
        }
    }
    if(counter==0){
        cout<<"String is pallindrome";
     }

    //   check=checkPallindrome(string1,length);
    //   cout<<check;

    return 0;
}