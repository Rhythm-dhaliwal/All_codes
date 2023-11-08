package com.company;

class inner implements Runnable {
    

    public void run() {
        for (int i = 0; i < 100; i++) {
            System.out.println("I am using AMD CPU");
        }
        
    }
}

class inner1 implements Runnable {
    public void run() {
        for (int i = 0; i < 100; i++) {
        System.out.println("I am using INTEL CPU");
        }
    }

}

public class interface_thread {

    public static void main(String[] args) throws InterruptedException {
        
        inner i1 = new inner();
        Thread t1 = new Thread(i1);
        t1.setPriority(Thread.MAX_PRIORITY);
        inner1 i2 = new inner1();
        Thread t2 = new Thread(i2);
        t2.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        
        t2.start();
        
    }
}
