#include<stdio.h>
int fact(int num){ //Function to find factorial of a number. 
	if(num==0||num==1)
		return 1;
	else
		return(num*fact(num-1));
}
int main(){
	int n;
	scanf("%d",&n);
	printf("Fact(%d) = %d",n,fact(n)); //function call
	return 0;
}
