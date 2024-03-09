// -------------------------------------->   approach -1   <------------------------------------------------------

// #include<iostream>
// using namespace std;
// int main(){
//     int number,rem,rev=0,original,t;
//     cout<<"Enter the number of test cases you want to check: "<<endl;
//     cin>>t;
//    while(t!=0){
//  cout<<"\nEnter a Number you want to reverse : "<<endl;
//     cin>>number;
//     original=number;
//     rev=0;
//     while(number!=0){
//         rem=number%10;
//         rev=rev*10+rem;
//         number=number/10;
//     }
//     cout<<"original number was : "<<original<<endl;
//     cout<<"reversed number is : "<<rev;
//     t--;
//    }
//     return 0;
    
// }

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int number,rem,rev=0,original,t;
    cout<<"Enter the number of test cases you want to check: "<<endl;
    cin>>t;
   while(t!=0){
    cout<<"Enter a number: "<<endl;
    cin>>number;
    string num=to_string(number);
    // we can also replace this logic with this line 
     reverse(num.begin(),num.end());


    // int i=0,j;
    // char temp;
    // j=num.length()-1;
    // while(i<num.length()/2){
    //   temp=num[i];
    //   num[i]=num[j];
    //   num[j]=temp;
    //   i++;
    //   j--;
    // }
     number=stoll(num);
    cout<<" reversed number is :"<<number<<endl;
    t--;
   }
    return 0;
    
}