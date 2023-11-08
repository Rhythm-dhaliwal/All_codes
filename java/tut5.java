package com.company;

import java.util.Scanner;

public class tut5 {
    public static void main(String[] args) {
        System.out.println("ENTER THE VALUE IN KMS: ");
        Scanner a = new Scanner(System.in);
        float kms = a.nextFloat();
        float miles = kms * (float) 0.6213;
        System.out.println("ANSWER IS: " + miles);
    }
}