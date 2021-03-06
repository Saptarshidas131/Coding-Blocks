// print numbers in decreasing order using recursion

import java.util.Scanner;

class number_decreasing
{
    public static void main(String args[])
    {
        // input range
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
        print_decreasing(n);
    }

    public static void print_decreasing(int n)
    {
        if(n == 0)
            return;
        System.out.println(n);

        print_decreasing(n-1);
    }
}
