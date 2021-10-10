package com.company;

public class CWSG_recursion {
//        factorial(n) = n * (n-1) * .... * 1
//        factorial(n) = n * factorial(n-1)
//        factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
    static int factorial(int n){
        if(n==0 || n == 1){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }

    static int factorial_iterative(int n){
        if(n==0 || n == 1){
            return 1;
        }
        else{
            int prod = 1;
            for(int i=1;i<=n;i++){
                prod *= i;
            }
            return prod;
        }
    }

    public static void main(String[] args) {
        int n = 5;
        System.out.println("The factorial of n is: " + factorial(n));
        System.out.println("The factorial of n is: " + factorial_iterative(n));
    }
}
