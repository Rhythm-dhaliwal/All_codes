//THIS SOULUTION IS FOR HACKERSRANK PROBLEM 'Java Loops II'  
package com.company;
import java.util.*;

class Java_Loops_II {
    public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int c = 1;
            int ans = a + (c * b);
            for (int j = 0; j < n; j++) {

                System.out.print(ans + " ");

                c = c + c;
                ans = ans + (c * b);
            }
            System.out.println();

        }
        in.close();
    }
}
// SOLUTION BY RHYTHM DHALIWAL FOLLOW ON GITHUB FOR MORE SOLUTIONS
