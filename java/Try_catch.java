package com.company;

import java.util.Scanner;

class calc {
    public static void add(int a, int b) {
        System.out.println(a + b);
    }

    public static void sub(int a, int b) {
        System.out.println(a - b);
    }

    public static void multi(int a, int b) {
        System.out.println(a * b);
    }

    public static void divide(int a, int b) {
        System.out.println(a / b);
    }

}

public class Try_catch extends calc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("CHOOSE ONE + - * /");

        try {

            char input = sc.next().charAt(0);
            System.out.print("ENTER NUM 1:");
            int a = sc.nextInt();
            System.out.print("ENTER NUM 2:");
            int b = sc.nextInt();

            if (input == '+' || input == '-' || input == '*' || input == '/') {

                switch (input) {
                    case '+':

                        add(a, b);
                        break;

                    case '-':

                        sub(a, b);
                        break;
                    case '*':

                        multi(a, b);
                        break;

                    case '/':

                        divide(a, b);

                        break;

                    default:
                        break;
                }
            }
            else{
                System.out.println("INVALID OPERATOR DETECTED PLEASE TRY AGAIN");
            }
        } catch (Exception e) {
            //System.out.println("THIS OPERATION CANT BE PROFORMED ");
            e.printStackTrace();
            
        }
        

    }
}
