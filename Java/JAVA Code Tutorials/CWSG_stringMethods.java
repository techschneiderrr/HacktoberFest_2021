package com.company;

import java.util.Locale;

public class CWSG_stringMethods {
    public static void main(String[] args) {
        String name = "Sujal";
        // String Methods

        System.out.println(name);
        System.out.println(name.length()); // length of string
        System.out.println(name.toLowerCase()); // LowerCase
        System.out.println(name.toUpperCase()); // UpperCase

        String s1 = "    Sujal      ";
        System.out.println(s1);
        System.out.println(s1.trim()); // trim the spaces

        System.out.println(name.substring(0,3)); //substring
        System.out.println(name.substring(1,5));

        System.out.println(name.replace('u','e')); // replace chars.
        System.out.println(name.replace("Su","Pu")); //replace string

        System.out.println(name.startsWith("Su")); // startsWith : boolean result
        System.out.println(name.startsWith("su"));

        System.out.println(name.endsWith("al")); // endsWith : Boolean result
        System.out.println(name.endsWith("el"));

        System.out.println(name.charAt(4)); // Char at particular Index.

        System.out.println(name.indexOf("S")); // Index of string
        System.out.println(name.indexOf("ja",1)); // index of string from particular index

        String newName = "Sujaljal";
        System.out.println(newName.indexOf("jal",3));

        System.out.println(newName.lastIndexOf("j")); // pos from last index.
        System.out.println(newName.lastIndexOf("ja",5));

        System.out.println(name.equals("Sujal")); // equality check
        System.out.println(newName.equals("sujaljal"));
        System.out.println(newName.equalsIgnoreCase("sujaljal")); // ignoring char case

        System.out.println("I am a \" double quote escape seq char");
        System.out.println("I am a new line \n escape seq char");


    }
}
