#include<stdio.h>
int QuickSort(int array[],int first,int last){
    int i, j, pivot,temp;
   
        pivot = first;
        i = first;
        j = last;

        while(i<j){
            while(array[i] <= pivot){
                i++;
             }
             while(array[j] > pivot){
                j--;
             }
             if(i<j){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
        }
        }
        temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
    
    QuickSort(array, first, pivot - 1);
    QuickSort(array, pivot + 1, last);
}
int main(){
    int m, first, last, arr[50], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the %d elements in the array:", n);
    for (m = 0; m < n;m++){
        scanf("%d", &arr[m]);
    }
    QuickSort(arr[m], 0, n - 1);
   for (m = 0; m < n;m++){
       printf("%d", arr[m]);
   }
    return 0;
}