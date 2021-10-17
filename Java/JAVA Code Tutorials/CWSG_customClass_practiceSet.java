package com.company;
// Ques 1:
class Emp{
    int salary;
    String name;

    public int getSal(){
        return salary;
    }

    public String getName(){
        return name;
    }
    public void setName(String n){
        name = n;
    }
}

// Ques 2:
class Square{
    int side;

    public int area(){
        return side*side;
    }

    public int peri(){
        return 4*side;
    }
}


public class CWSG_customClass_practiceSet {
    public static void main(String[] args) {
//   Ques1:
        Emp obj1 = new Emp();
        obj1.setName("CodeWithSujalGera");
        obj1.salary = 12000;
        System.out.println(obj1.getName());
        System.out.println(obj1.getSal());

//        Ques 2:
        Square s1 = new Square();
        s1.side = 2;
        System.out.println(s1.area());
        System.out.println(s1.peri());
    }
}
