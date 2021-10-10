package com.company;
import java.util.Scanner;

public class CWSG_userinput {
    public static void main(String[] args) {
        System.out.println("Taking Input from User!");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Num 1: ");
        int a = sc.nextInt();
        System.out.println("Enter Num 2: ");
        int b = sc.nextInt();
        int sum = a + b;
        System.out.println("Sum of 2 number: " + sum);
    }
}
