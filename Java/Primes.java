package primepackage;
import java.util.*;
public class Primes{
	public static void checkforprime(){
		Scanner sc=new Scanner(System.in);
		int i,m=0,flag=0;      
		  int n=sc.nextInt(); 
		  m=n/2;       
		   for(i=2;i<=m;i++){      
			if(n%i==0){      
			 System.out.println(n+" is not prime number");      
			 flag=1;      
			 break;      
			}      
		   }      
		   if(flag==0)  { System.out.println(n+" is prime number"); }  
}}