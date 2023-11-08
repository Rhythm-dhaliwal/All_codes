package com.company;

import java.util.Scanner;

class nomral {
    public static void add(int a, int b) {
        System.out.println(a + b);
    }

    public static void subtract(int a, int b) {
        System.out.println(a - b);
    }

    public static void product(int a, int b) {
        System.out.println(a * b);
    }

    public static void divide(int a, int b) {
        System.out.println(a / b);
    }
}

class sintific extends nomral {
    public static void sin(int a, int b) {
        System.out.println(Math.sin(a + b));
    }

    public static void cos(int a, int b) {
        System.out.println(Math.cos(a + b));
    }

    public static void tan(int a, int b) {
        System.out.println(Math.tan(a + b));
    }
}

public class multicalculator extends sintific {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\n\t\t\t\t\t\t\t\tWELCOME TO THE CALCULATOR APP");
        System.out.println("1.NORMAL CALCULATOR\n2.SINTIFIC CALCULATOR\n3.HYBRID CALCULATOR");
        int calctype = sc.nextInt();

        if (calctype == 1) {
            System.out.println("CHOOSE THE FUNCTION");
            System.out.println("+ - * /");

            String input = sc.next();

            System.out.println("ENTER NUMBERS:");
            int a = sc.nextInt();
            int b = sc.nextInt();
            switch (input) {
                case "+":

                    add(a, b);
                    break;

                case "-":

                    subtract(a, b);
                    break;
                case "*":

                    product(a, b);
                    break;

                case "/":

                    divide(a, b);

                    break;

                default:
                    break;
            }

        } else if (calctype == 2) {
            System.out.println("CHOOSE THE FUNCTION");
            System.out.println("sin cos tan");

            String input = sc.next();

            System.out.println("ENTER NUMBERS:");
            int a = sc.nextInt();
            int b = sc.nextInt();
            switch (input) {
                case "sin":

                    sin(a, b);
                    break;

                case "cos":

                    cos(a, b);
                    break;
                case "tan":

                    tan(a, b);
                    break;

                default:
                    break;
            }

        } else if (calctype == 3) {
            System.out.println("CHOOSE THE FUNCTION");
            System.out.println("+ - * / sin cos tan");

            String input = sc.next();

            System.out.println("ENTER NUMBERS:");
            int a = sc.nextInt();
            int b = sc.nextInt();
            switch (input) {
                case "+":

                    add(a, b);
                    break;

                case "-":

                    subtract(a, b);
                    break;
                case "*":

                    product(a, b);
                    break;

                case "/":

                    divide(a, b);

                    break;
                case "sin":

                    sin(a, b);
                    break;

                case "cos":

                    cos(a, b);
                    break;
                case "tan":

                    tan(a, b);
                    break;

                default:
                    break;
            }

        } else {
            System.out.println("ERROR 404 WRONG INPUT TYPE");
        }

        sc.close();
    }

}
