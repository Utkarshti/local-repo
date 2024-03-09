//  Concept of prefix sum


// #include<stdio.h>
// int main(){
//     int sum=0,i;
//     int Example1[19]={1,2,3,4,5,6,7};
//     printf("Printing the array before prefix sum::\n");
//     for(int k=0;k<7;k++){
//     printf("%d\t",Example1[k]);
//     }
//     for(int  i=0;i<7;i++){
//         sum=sum+Example1[i];
//         Example1[i]=sum;
//     }
    
//     printf("\nPrinting the updated array::\n");
//     for(int k=0;k<7;k++){
//     printf("%d\t",Example1[k]);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int sum=0,i;
    int Example1[19]={1,2,3,8,4,5,6,7};
    printf("Printing the array before prefix sum::\n");
    for(int k=0;k<7;k++){
    printf("%d\t",Example1[k]);
    }
    for(int  i=0;i<7;i++){
        sum=sum+Example1[i];
        Example1[i]=sum;
    }
    
    printf("\nPrinting the updated array::\n");
    for(int k=0;k<7;k++){
    printf("%d\t",Example1[k]);
    }
    return 0;
}
