package com.company;

class myMainEmployee{
    private int id;
    private String name;

    public myMainEmployee(){
        id = 45;
        name = "Your-Name-Here";
    }
    // Constructor Overloading...
    public myMainEmployee(String myName, int myId){
        id = myId;
        name = myName;
    }

    public void setNames(String n){
        name = n;
    }

    public String getNames(){
        return name;
    }

    public void setIds(int i){
        id = i;
    }
    public int getIds(){
        return id;
    }

}

public class CWSG_constructors {
    public static void main(String[] args) {
        myMainEmployee obj0 = new myMainEmployee();
        myMainEmployee obj = new myMainEmployee("CodeWithSujalGera",10);

        System.out.println(obj0.getIds());
        System.out.println(obj0.getNames());

        System.out.println(obj.getIds());
        System.out.println(obj.getNames());
    }
}
