package com.company;

import java.util.Scanner;

public class primenum {
    public static void main(String[] args) {

        System.out.println("ENTER THE Nth TERM OF TEST CASES");
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        
        for (int i = 1; i <= test; i++) {
            int count = 0;
            for (int div = 1; div <= i; div++) {

                if (i % div == 0) {
                    count++;
                }

            }
            
            
            if (count == 2) {
                System.out.println(i+". prime");
            } else {
                System.out.println(i+". not prime");
            }
        }
sc.close();
    }
}
