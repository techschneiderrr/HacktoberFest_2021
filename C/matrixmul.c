// matrix multiplication

//output
// Sum:

// 30      36      42
// 66      81      96
// 102     126     150

#include<stdio.h>
void main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum[3][3];
   
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          sum[i][j]=0;
          for(int k=0;k<3;k++){
            sum[i][j]+=arr[i][k]*arr2[k][j];
          }
       }
     }
       printf("\nSum:\n\n");
     for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          printf("%d\t",sum[i][j]);
       }
       printf("\n");
     }
}
