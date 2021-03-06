// print numbers in first decreasing and then in increasing order using recursion

import java.util.Scanner;

class number_decreasing_increasing
{
    public static void main(String args[])
    {
        // input range
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
         
        print_decreasing_increasing(n);
    }

    public static void print_decreasing_increasing(int n)
    {
        if(n == 0)
            return;

        System.out.println(n);

        print_decreasing_increasing(n-1);

         System.out.println(n);
    }
}
