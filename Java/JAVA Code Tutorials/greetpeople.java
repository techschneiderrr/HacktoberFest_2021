package com.company;
import java.util.Scanner;

public class greetpeople {
    public static void main(String[] args) {
        System.out.println(
                "Enter your name: "
        );
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        System.out.println("Hello " + name + ", have a good day!");
    }
}
