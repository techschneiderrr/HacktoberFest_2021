package com.company;

public class CWSG_string_practiceSet {
    public static void main(String[] args) {
        String s1 = "SuJal";
//        1. Convert string to Lower Case
        String lowerCaseString = s1.toLowerCase();
        System.out.println(lowerCaseString);

//        2. replace spaces with _ in a string
        String name = "Sujal Gera 19BIT0272";
        String newName = name.replace(" ", "_");
        System.out.println(newName);

//        3. letter template is given, do replacement

        String letter = "Dear <|name|>, Thanks a lot";
        String newLetter = letter.replace("<|name|>", "Sujal Gera");
        System.out.println(newLetter);

//        4. Detect double and tripple spaces in a string

        String text = "This  Sentence contains    double and    tripple spaces";
        System.out.println(text.indexOf("  "));
        System.out.println(text.indexOf("   "));

//        5. Esc Seq Letter sentence writing
        String lettters = "\"Dear Sujal, This Java Course is nice. Thanks\"";
        System.out.println(lettters);
    }
}
