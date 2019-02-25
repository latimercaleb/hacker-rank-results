// https://www.hackerrank.com/challenges/java-end-of-file/problem
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = 1;
        while(sc.hasNextLine()){
            String word = sc.nextLine();
            String result = count + " " + word;
            System.out.println(result);
            count++;
        }
    }
}
