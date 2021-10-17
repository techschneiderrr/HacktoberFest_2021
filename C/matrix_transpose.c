//matrix transpose

//output
// Before transpose:

// 1       2       3
// 4       5       6
// 7       8       9

// After trsnspose:

// 1       4       7
// 2       5       8
// 3       6       9

#include<stdio.h>
void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("\nBefore transpose:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
         }
        printf("\n");
     }
    //swap
    for(int i=0;i<3;i++)
    {
      for(int j=i;j<3;j++)
      {
       
        int temp= arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
      }
    }
    printf("\nAfter trsnspose:\n\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);}
        printf("\n");
    }
}
