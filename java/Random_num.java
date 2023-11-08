package com.company;

import java.util.*;

public class Random_num {

    public static void main(String[] args) {
        System.out.println("THIS IS A PROGRAM TO SORT AN ARRAY");

        Scanner sc = new Scanner(System.in);

        Random r1 = new Random();
        int arr[] = new int[10000];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = r1.nextInt(10000);
            System.out.print(arr[i] + " ");
        }
        
        System.out.println("\n\n");
        System.out.print("PRESS P TO PRINT THE SORTED ARRAY: ");
        String inp = sc.nextLine();

        for (int j = 0; j < arr.length; j++) {
            for (int k = 0; k < arr.length - j - 1; k++) {
                if (arr[k] > arr[k + 1]) {
                    int temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
        if (inp.equals("P")) {
            printArray(arr);
        }
        else{
            System.out.println("ERROR");
        }

        sc.close();
    }

    public static void printArray(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

}
