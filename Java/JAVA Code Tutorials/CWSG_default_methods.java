package com.company;

interface Camera{
    void takeSnap();
    void recordVideo();
}

interface wifi{
    String[] getNetworks();
    void ConnectNetworks(String networks);
}

class cellPhone{
    void callNum(int phone){
        System.out.println("Calling number: " + phone);
    }
    void pickCall(){
        System.out.println("Connecting....");
    }
}


class MySmartPhone extends cellPhone implements Camera, wifi{
    public void takeSnap(){
        System.out.println("taking Snap.");
    }
    public void recordVideo(){
        System.out.println("recording video.");
    }
    public String[] getNetworks(){
        System.out.println("getting list of networks..");
        String[] list = {"Sujal","Anmol","Chinu"};
        return list;
    }
    public void ConnectNetworks(String net){
        System.out.println("Connecting to : " + net);
    }
}

public class CWSG_default_methods {
    public static void main(String[] args) {
        MySmartPhone s = new MySmartPhone();
        String[] arr = s.getNetworks();
        for (String item : arr) {
            System.out.println(item);
        }

    }
}
