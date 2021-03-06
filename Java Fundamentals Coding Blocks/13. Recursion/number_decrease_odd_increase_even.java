// print numbers in first decreasing odd and then in increasing even order using recursion

import java.util.Scanner;

class number_decrease_odd_increase_even
{
    public static void main(String args[])
    {
        // input range
        System.out.println("Enter the value of n:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         System.out.println("\n");
         
        print_decrease_odd_increase_even(n);
    }

    public static void print_decrease_odd_increase_even(int n)
    {
        if(n == 0)
            return;

        if (n%2 == 1)
            System.out.println(n);

        print_decrease_odd_increase_even(n-1);

        if (n%2 == 0)
         System.out.println(n);
    }
}
