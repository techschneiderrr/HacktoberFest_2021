#include<stdio.h>
 int gcd(int a, int b){
 	if(!b)
 		return a;
// 	else
 		gcd(b, a%b);
 }
 
 int main(){
 	int m,n,res;
 	scanf("%d%d",&m,&n);
 	res=gcd(m,n);
 	printf("GCD of %d and %d is %d",m,n,res);
 	return 0;
 }
