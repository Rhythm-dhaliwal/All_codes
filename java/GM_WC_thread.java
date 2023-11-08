package com.company;

class goodmorning extends Thread {
    public void run() {
        for (int i = 1; i > 0; i++) {
            System.out.println("Good Morning");
        }

    }
}

class welcome extends Thread {
    public void run() {
        for (int i = 1; i > 0; i++) {
            System.out.println("Welcome");
        }

    }
}

public class GM_WC_thread {
    public static void main(String[] args) {
        goodmorning t1 = new goodmorning();
        welcome t2 = new welcome();

        t1.start();
        t2.start();

    }

}
