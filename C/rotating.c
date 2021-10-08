#include <stdio.h>
#include <stdlib.h>

void printReversedArray(int arr[],int len){
    for(int i= 0;i<len;i++){
        printf(" %d ",arr[i]);
    }
}
//Store it in a different array and reverse it
void method1(int arr1[],int len){
    int i,j,k;
    int temp[len];
    for(i=0,j=len-1;j>=0;j--,i++){
        temp[i]=arr1[j];
    }
    for(i=0;i<len;i++){
        arr1[i]=temp[i];
    }
    printReversedArray(arr1,len);

}
//in array method using temp variable
void method2(int arr2[],int len){
    int temp;
    for(int i=0;i<len/2;i++){
        temp=arr2[i];
        arr2[i]=arr2[len-1-i];
        arr2[len-1-i]=temp;
    }
    printReversedArray(arr2,len);
}
//recursive approach
void method3(int arr3[],int start,int end,int len){
    int temp;
    if(start>=end) {
        printReversedArray(arr3,len);
         return;
    }
    temp = arr3[start];
    arr3[start]=arr3[end];
    arr3[end]=temp;
    method3(arr3,start+1,end-1,len);
}
int main(){
    int len,i;
    printf("Enter the number of items in the array:");
    scanf("%d", &len);
    int arr[len];
    for(i=0;i<len;i++){
        printf("Enter the element %d:",(i+1));
        scanf("%d", &arr[i]);
    }
    // method1(arr,len);
    // method2(arr,len);
    method3(arr,0,len-1,len);

    return 0;
}