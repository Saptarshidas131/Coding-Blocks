// print the nth fibonacci

import java.util.Scanner;

class nth_fibonacci
{
    public static void main(String args[])
    {
        // input number
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
         
        System.out.println(nth_fibonacci(n));
    }

    public static int nth_fibonacci(int n)
    {
       int first = 0, second = 1, next = 0;

       if(n==0 || n==1)
        return n;

       return nth_fibonacci(n-2) + nth_fibonacci(n-1);
    }
}
