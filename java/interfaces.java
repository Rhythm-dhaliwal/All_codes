package com.company;

import java.util.Scanner;

interface Speaker {
    static int vol = 50;
    static int newvol = vol;

    void volumeup(int a);

    void volumedown(int a);

    void pause();

    void play();
}

class boat_nirvana implements Speaker {

    @Override
    public void volumeup(int a) {

        System.out.println("VOLMUE " + (vol + a) + "%\n");
    }

    @Override
    public void volumedown(int a) {

        System.out.println("VOLMUE " + (vol - a) + "%\n");
    }

    @Override
    public void pause() {

        System.out.println("MUSIC HAS BEEN STOPPED\n");

    }

    @Override
    public void play() {
        System.out.println("PLAYING THE MUSIC\n");
    }

}

public class interfaces {
    public static void main(String args[]) {

        System.out.println("1.PAUSE\n2.PLAY\n3.VOLUME UP\n4.VOLUME DOWN");
        Scanner sc = new Scanner(System.in);
        int choose = sc.nextInt();

        boat_nirvana anc21 = new boat_nirvana();

        if (choose == 1) {
            anc21.pause();
        } else if (choose == 2) {
            anc21.play();
        } else if (choose == 3) {
            anc21.volumeup(10);
        }

        else if (choose == 4) {

            anc21.volumedown(10);
        } else {
            System.out.println("anc21 HAS BEEN TURNED OFF");

        }
    }
}