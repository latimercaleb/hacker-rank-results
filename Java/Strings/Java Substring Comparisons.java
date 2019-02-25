// https://www.hackerrank.com/challenges/java-string-compare/problem
import java.util.Scanner;

public class Solution {
    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        String clonedString = s.trim();
        String [] arr = new String[clonedString.length() -k +1];
        for(int i=0; i <= clonedString.length() - k; i++){
            String temp = clonedString.substring(i,k+i);
            arr[i] = temp;
        }
        java.util.Arrays.sort(arr);
        smallest = arr[0];
        largest = arr[arr.length -1];
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
        System.out.println(getSmallestAndLargest(s, k));
    }
}
