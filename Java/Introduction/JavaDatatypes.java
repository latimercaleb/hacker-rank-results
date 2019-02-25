// https://www.hackerrank.com/challenges/java-datatypes/problem
import java.util.*;
import java.io.*;

class Solution{
    public static void checkNum(long x){
        String result = "";
        if(x>=-128 && x<=127){
            result += "* byte \n";
         }
        if(x>=-32768 && x<=32767){
            result += "* short \n";
        }
        if(x>=Math.pow(-2,31) && x<=Math.pow(2,31)-1){
            result += "* int \n";
         }
        if(x>=Math.pow(-2,63) && x<=Math.pow(2,63)-1){
            result += "* long";
        }
        System.out.println(result);
    }
    public static void main(String []argh)
    {

        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        for(int i=0;i<t;i++)
        {
            try
            {
                long x=sc.nextLong();
                System.out.println(x+" can be fitted in:");
                checkNum(x);
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}
