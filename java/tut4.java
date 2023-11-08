package com.company;

import java.util.Scanner;

public class tut4 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        System.out.println("ENTER A NUMBER 1:");
        int a = s1.nextInt();
        System.out.println("ENTER A NUMBER 2:");
        int b = s1.nextInt();
        int c = a + b;

        System.out.println("ANSWER: " + (c));
        

        s1.close();

    }

}

/*
  always remember to start with abasic hello world program to know all system
  works fine.
  
  we can use sout as a bareminimum java code [sout]will type system.out.....
  automatically.
  
  import java.util.Scanner; used to implement input from user.
  int a = s1.nextInt(); it is used to store the value in int.
  s1.close(); is used to close the scanner so the data dont overflow.
  
 */