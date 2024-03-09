#include<stdio.h>
#define MAX 100

void printprincipaldiagonal(int arr[][MAX],int length){
    int i,j;
    printf("%d",length);
for( i=0;i<length;i++){
   for( j=0;j<length;j++){
    if(i==j){
     printf("%d\t",arr[i][j]);
    }
      

   }
}
}
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size][size];
    printf("Enter the elements in the array:");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&array[i][j]);
        }
    }
      printprincipaldiagonal(array,size);
   

    return 0;
}

