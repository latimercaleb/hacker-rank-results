// Problem Link: https://www.hackerrank.com/challenges/java-loops/problem
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int stopFlag = n-1;
            int exp = 1;
            int sequenceEntry;
            while(n != stopFlag){
                int expResult = (int)Math.pow(2,exp);
                sequenceEntry = (expResult*b) + a;
                System.out.printf("%d ", sequenceEntry);
                exp ++;
                n--;
            }
            System.out.printf("%n");

        }
        in.close();
    }
}
