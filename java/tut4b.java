package com.company;

import java.util.Scanner;

public class tut4b {
    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);
        System.out.println("ENTER YOUR NAME: ");
        String a = name.nextLine();

        System.out.println(a);
        name.close();
    }

}
