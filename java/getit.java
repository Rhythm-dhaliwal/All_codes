package com.company;

class test1 {
    private int a;

    public void setA(int a) {
        this.a = a;
    }

    public int getA() {
        System.out.println(a);
        return a;

    }

}

public class getit extends test1 {
    public static void main(String args[]) {

        getit per = new getit();
        per.setA(450);
        per.getA();
        

    }
}
