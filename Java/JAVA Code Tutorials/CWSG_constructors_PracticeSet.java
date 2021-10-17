package com.company;

class Cylinder{
    int radius;
    int height;

    public void setRadius(int r){
        radius = r;
    }
    public int getradius(){
        return radius;
    }
    public void setHeight(int h){
        height = h;
    }
    public int getHeight(){
        return height;
    }
}

public class CWSG_constructors_PracticeSet {
    public static void main(String[] args) {
        Cylinder obj = new Cylinder();
        obj.setRadius(4);
        obj.setHeight(5);

        int k = obj.getradius();
        int z = obj.getHeight();
        int SA = (int) (2*3.14*k*(k+z));
        int vol = (int) (3.14*k*k*z);

        System.out.println(SA);
        System.out.println(vol);
    }
}
