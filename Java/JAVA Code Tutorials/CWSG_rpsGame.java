package com.company;

import java.util.Random;
import java.util.Scanner;

public class CWSG_rpsGame {
    public static void main(String[] args) {
//        ROCK-PAPER-SCISSOR GAME

//        O = Rock, 1 = paper, 2 = Scissor
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 0 for rock, 1 for Paper, 2 for Scissor: ");
        int user = sc.nextInt();

        Random random = new Random();
        int computer = random.nextInt(3);

        if(user == computer){
            System.out.println("DRAW!!");
        }
        else if(user == 0 && computer == 2 || user == 1 && computer == 0 || user == 2 && computer == 1){
            System.out.println("User Wins!!");
        }
        else{
            System.out.println("Computer Wins!!");
        }
        System.out.println("Computers Choice: " + computer);
    }
}
