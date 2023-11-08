package com.company;

import java.util.Scanner;

public class digits_in_num {
    public static void main(String[] args) {
        System.out.println("ENTER THE NUMBER:");
        Scanner sc = new Scanner(System.in);
        int in = sc.nextInt();
        int count=0;
        for(int i=in;i!=0;count++){
            i=i/10;
        }
        System.out.println(count);
        sc.close();
    }
}
