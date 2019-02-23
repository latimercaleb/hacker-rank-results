// https://www.hackerrank.com/challenges/java-static-initializer-block/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
public static boolean flag;
public static int B,H;
static{
    Scanner reader = new Scanner(System.in);
    flag = false;
    B = reader.nextInt();
    H = reader.nextInt();
    if(B > 0 && H > 0){
        flag = true;
    }
    else{
        System.out.print("java.lang.Exception: Breadth and height must be positive");
    }
}
public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}

	}//end of main

}//end of class
