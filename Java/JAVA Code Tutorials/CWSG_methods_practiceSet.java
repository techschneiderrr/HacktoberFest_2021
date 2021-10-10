package com.company;

public class CWSG_methods_practiceSet {
//    Ques 1:
    static void table(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n * i);
        }
    }

//        Ques 2:
        static void pattern1(int n){
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
                    System.out.print("*");
                }
                System.out.print("\n");
            }
        }

//        Ques 3:
    static int naturalSum(int n){
        if(n==1){
            return 1;
        }
        else{
            return n + naturalSum(n-1);
        }
    }



    public static void main(String[] args) {
//        QUES 1 :
        table(7);

//        Ques 2:
        pattern1(8);

//        Ques 3:
        int res = naturalSum(4);
        System.out.println(res);

    }
}
