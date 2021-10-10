package com.company;

public class CWSG_methods {
//    Method (Inside the class and outside the main)
    static int mySum(int x, int y){
        int sum = x+y;
        return sum;
    }

//    Method (Without using "STATIC" by object creation)
    int mySub(int x,int y){
        int sub = x-y;
        return sub;
    }
    public static void main(String[] args) {
        int a = 5;
        int b = 6;
        int add = mySum(a,b);
        System.out.println(add);
        int c = 45;
        int d = 56;
        int add2 = mySum(c,d);
        System.out.println(add2);


//        Object Creation
        CWSG_methods obj = new CWSG_methods();
        int res = obj.mySub(5,9);
        System.out.println(res);
    }
}
