// https://www.hackerrank.com/challenges/java-2d-array/problem
import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static int getHourglassSum(int n1, int n2, int n3, int n4, int n5, int n6, int n7){
        return n1 + n2 + n3 + n4 + n5 + n6 + n7;
    }
    public static int getLargest (int possibleLargest, int currentLargest){
        return currentLargest >= possibleLargest ? currentLargest : possibleLargest;
    }
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int[][] arr = new int[6][6];
        int oldLargest,newLargest;
        oldLargest = -65;
        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
         for(int i = 0; i <= 3; i++){
             for(int j = 1; j < 5; j++){
                 newLargest = getHourglassSum(arr[i][j-1], arr[i][j], arr[i][j+1], arr[i+1][j], arr[i+2][j-1], arr[i+2][j], arr[i+2][j+1]);
                 newLargest = getLargest(newLargest,oldLargest);
                 oldLargest = newLargest;
             }

         }

         System.out.print(oldLargest);

        scanner.close();
    }
}
