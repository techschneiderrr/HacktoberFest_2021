package com.company;

class base{
    int x;

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void printMe(){
        System.out.println("I am a constructor");
    }
}

class derived extends base{
    int y;

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}

public class CWSG_inheritance {
    public static void main(String[] args) {
        derived d = new derived();
        d.setX(4);
        System.out.println(d.getX());
        d.setY(12);
        System.out.println(d.getY());
    }
}
