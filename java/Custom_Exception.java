package com.company;
import java.util.Scanner;



class myexceptAge extends Exception {

    public myexceptAge(String str){
        super(str);
    }
}

public class Custom_Exception {
    public static void main(String[] args) {
        Scanner test = new Scanner(System.in);
       
        System.out.println("ENTER YOUR AGE");
         int age = test.nextInt();
        try {
           
            if (age>125) {
                throw new myexceptAge("AGE IS NOT VALID PLEASE TRY AGAIN");
            }
            else{
                System.out.println("THE AGE IS: "+age);
            }

        } catch (Exception e) {
            
            e.printStackTrace();
           
        }

    }
}