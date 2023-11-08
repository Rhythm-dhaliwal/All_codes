package com.company;

class custom_thread1 extends Thread {
    //@Override
    public void run() {
        for (int i=0; i<100 ; i++) {
        System.out.println("THIS IS THREAD 1");
        }
    }
}

class custom_thread2 extends Thread {
    //@Override
    public void run() {
        for (int i=0; i<100 ; i++) {
           System.out.println("THIS IS THREAD 2"); 
        }
        
    }
}

public class threads {
public static void main(String[] args) {
    



    custom_thread1 th1=new custom_thread1();
    custom_thread2 th2=new custom_thread2();
    
    

    th1.start();
    th2.start();
}
}
