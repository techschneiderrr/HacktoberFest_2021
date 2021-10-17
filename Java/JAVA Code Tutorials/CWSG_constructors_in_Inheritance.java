package com.company;

class Base1{
    Base1(){
        System.out.println("I am a Constructor");
    }
    Base1(int x){
        System.out.println("I am a Constructor with value of X as : " + x);
    }
}

class Derived1 extends Base1{
    Derived1(){
        super(0);
        System.out.println("I am a derived class constructor");
    }
    Derived1(int x, int y){
        super(x);
        System.out.println("I am an overloaded constructor with value of Y as : " + y);
    }
}

class ChildOfderived1 extends Derived1{
    ChildOfderived1(){
        System.out.println("i am a constructor of derived1 class");
    }

    ChildOfderived1(int x, int y, int z){
        super(x,y);
        System.out.println("i am a constructor of derived1 class with z as: " + z);
    }
}
public class CWSG_constructors_in_Inheritance {
    public static void main(String[] args) {
//        Base1 b = new Base1();
//        Derived1 d = new Derived1(15,20);
        ChildOfderived1 cd = new ChildOfderived1(10,20,30);
    }
}
