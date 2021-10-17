package com.company;

// There is only on Public Class.
class Employee{
    int id;
    String name;
    int sal;

//    Methods in custom clqss
    public void printdetails(){
        System.out.println("Id is: " + id);
        System.out.println("Name is: " + name);
    }

    public int getSalary(){
        return sal*1000;
    }
}

public class CWSG_custom_class {
    public static void main(String[] args) {
        System.out.println("This is our custom class");

//        Creating Object
        Employee sujal = new Employee(); // instantiating a new Employee Object
        Employee obj2 = new Employee();

        // Setting Attributes
        sujal.id = 10;
        sujal.name = "CodeWithSujalGera";
        sujal.sal = 12;

        obj2.id = 17;
        obj2.name = "John";
        obj2.sal = 15;

//        System.out.println(sujal.id);
//        System.out.println(sujal.name);

//        Calling Method by object
        sujal.printdetails();
        System.out.println("Salary: " + sujal.getSalary());
        obj2.printdetails();
        System.out.println("Salary: " + obj2.getSalary());
    }
}
