// print numbers in increasing order using recursion

import java.util.Scanner;

class number_increasing
{
    public static void main(String args[])
    {
        // input range
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
        print_increasing(n);
    }

    public static void print_increasing(int n)
    {
        if(n == 0)
            return;

        print_increasing(n-1);

         System.out.println(n);
    }
}
