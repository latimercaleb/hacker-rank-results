// https://www.hackerrank.com/challenges/java-currency-formatter/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        NumberFormat currentFormatter = NumberFormat.getCurrencyInstance(Locale.US);
        double payment = scanner.nextDouble();
        scanner.close();

        String us, india, china, france;
        us = currentFormatter.format(payment);
        currentFormatter = NumberFormat.getCurrencyInstance(Locale.CHINA);
        china = currentFormatter.format(payment);
        currentFormatter = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        france = currentFormatter.format(payment);

        Locale indiaInstance = new Locale("en","IN");
        currentFormatter = NumberFormat.getCurrencyInstance(indiaInstance);
        india = currentFormatter.format(payment);

        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
