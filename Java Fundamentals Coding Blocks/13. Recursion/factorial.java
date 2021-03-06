// find factorial of a number

import java.util.Scanner;

class factorial
{
    public static void main(String args[])
    {
        // input number
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
         
        System.out.println(factorial(n));
    }

    public static int factorial(int n)
    {
        if(n == 0 || n == 1)
            return 1;

        return n*factorial(n-1);
    }
}
