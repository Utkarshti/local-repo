//  Remove Duplicates elements from the array. and the array elements must be in relative order.
// OUTPUT:-  return the total number of elements that are stored in the new array uniquely

#include<stdio.h>
int main(){
    int i,j;
    int array1[10];
    array1[0]=1;
    array1[1]=1;
    array1[2]=2;
    array1[3]=2;
    array1[4]=3;
    array1[5]=3;
    array1[6]=3;
    array1[7]=4;
    array1[8]=5;
    int size=sizeof(array1)/4;
    // int array2={1,2,3,2,2,2,2,1,3,5};
    for(i=0,j=0;i<size-1;i++){
       if(array1[j]!=array1[i]){
            j++;
            array1[j]=array1[i];
       }
    }
    printf("The Unique elements in the array are from 0 t0 %d index and total number of elements are: %d",j,j+1);
    printf("-----------------------------------------------------------");
    for(int i=0;i<size;i++)
    printf(" %d\t",array1[i]);
    return 0;
}