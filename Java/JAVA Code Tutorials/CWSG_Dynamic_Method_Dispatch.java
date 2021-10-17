package com.company;

class Phone{
    public void showTime(){
        System.out.println("Time is 08:00 pm..");
    }
    public void on(){
        System.out.println("Turning Phone ON...");
    }
}

class SmartPhone extends Phone{
    public void music(){
        System.out.println("Playing music..");
    }
    public void on(){
        System.out.println("Turning SmartPhone ON...");
    }
}

public class CWSG_Dynamic_Method_Dispatch {
    public static void main(String[] args) {
        // Phone obj = new Phone();
        // obj.name();
        // SmartPhone sm = new SmartPhone();

        Phone obj = new SmartPhone();
        // SmartPhone obj2 = new Phone();  -> NOT ALLOWED

        obj.showTime();
        obj.on();
        // obj.music();  -> NOT ALLOWED
    }
}
