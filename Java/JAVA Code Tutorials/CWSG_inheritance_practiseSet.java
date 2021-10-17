package com.company;

class Circle{
    int radius;
    Circle(int r){
        this.radius = r;
    }

    public double area(){
        return Math.PI*this.radius*this.radius;
    }
}

class Cylinder1 extends Circle{
    int height;

    Cylinder1(int r, int h){
        super(r);
        this.height = h;
    }
    public double area(){
        return Math.PI*radius*radius*this.height;
    }
}


public class CWSG_inheritance_practiseSet {
    public static void main(String[] args) {
        Circle obj = new Circle(4);
        Cylinder1 obj1 = new Cylinder1(4,6);

        System.out.println(obj.area());
        System.out.println(obj1.area());
    }
}
