package com.company;

public class CWSG_methodOverloading {
    static  void tellJoke(){
        System.out.println("This is a Void method");
    }

    static void change(int a){
        a = 100;
    }

    static void change2(int [] arr){
        arr[0] = 100;
    }

    static void foo(){
        System.out.println("Good Morning Bro!");
    }

    static void foo(int a){
        System.out.println("Good Morning " + a + " Bro!");
    }

    static void foo(int a,int b){
        System.out.println("Good Morning " + a + " Bro!");
        System.out.println("Good Morning " + b + " Bro!");
    }
    public static void main(String[] args) {
//        tellJoke();

//        case 1 - Changing an Integer
        int x = 45;
        int y= 56;
        change(x);
        System.out.println("The value of x after change is : " + x); // OUTPUT: Doesn't Change

//        Case: 2 - Changing an Array
        int [] marks = {56,65,29,86,54};
        change2(marks);
        System.out.println("The value of ele in array changes to: " + marks[0]); // OUTPUT: Changed.
        // here marks is a reference to an object. so instead of making the copy, main address is passed and it changes
        // the value of array element.

//        Method Overloading
        foo();
        foo(3000);
        foo(500,1000);
        // Arguments are AActual..
    }
}
