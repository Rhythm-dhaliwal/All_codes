package com.company;

import java.util.Scanner;

public class fibbonaci {
    public static void main(String[] args) {
        System.out.print("ENTER HTE NUMBER YOU WANT TO PRINT TO: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
       
        int a = 0;
        int b = 1;
        System.out.print("1 ");
        for (int i = 1; i < n; i++) {
            int c = a + b;
            a = b;
            b = c;

            System.out.print(c + " ");
        }
        sc.close();
    }
        
    }
