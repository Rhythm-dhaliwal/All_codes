package com.company;

import java.util.Scanner;

class bank1 {

    private static int balance = 10000;
    public static int getBalance() {
        return balance;
    }
    public void setBalance(int balance) {
        bank1.balance = newbal;
    }

    static int newbal=balance; 

    

}

public class test extends bank1 {

    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {

            System.out.println("JAVA BANK ATM");
            System.out.print("PLEASE CHOOSE THE OPTIONS BELOW: \n1.WITHDRAW\n2.DEPOSIT\n3.CHECK BALANCE\n4.EXIT\n");

            Scanner sc = new Scanner(System.in);
            int opt = sc.nextInt();
            if (opt == 1) {
                withdraw(getBalance());
            } else if (opt == 2) {
                System.out.println("DIPOSIT SECURE PAGE");
                System.out.print("ENTER THE AMOUNT: ");
                int dip = sc.nextInt();
                deposit(getBalance(), dip);

            } else if (opt == 3) {

                checkbal(newbal);
            } else if (opt == 4) {
                System.out.println("SUCCESSFULLY EXITED");
                break;
            }

            else {
                System.out.println("WRONG INPUT");
            }
            
        }
    }

    public static void withdraw(int balance) {
        System.out.println("WITHDRAW SECURE PAGE");
        System.out.print("ENTER THE AMOUNT: ");
        Scanner with = new Scanner(System.in);

        int a = with.nextInt();
        if (a > newbal) {
            System.out.println("WITHDRAW IS UNSUCCESSFUL INSUFFECIENT BALANCE\n");
        } else if (a <= newbal) {
            newbal = balance - a;
            System.out.println("WITHDWAW SUCCESSFUL\nYOUR BALANCE: " + newbal + "\n");
        }
        
    }

    public static void deposit(int balance, int dip) {

        newbal = newbal + dip;
        System.out.println("DIPOSIT SUCCESSFUL\n YOUR BALANCE: " + newbal + "\n");
    }

    public static void checkbal(int a) {

        int newbal = a;
        System.out.println("BALANCE SECURE PAGE\n" + "YOUR BALANCE: " + newbal + "\n");
    }
    
}

