// find a number raised to the power of another

import java.util.Scanner;

class power
{
    public static void main(String args[])
    {
        // input number
        System.out.println("Enter the value of number:");
        Scanner sc = new Scanner(System.in);
        int n,p;
        n = sc.nextInt();
        System.out.println("Enter the value of power:");
        p = sc.nextInt();
         System.out.println("\n");
         
        System.out.println(power(n,p));
    }

    public static int power(int n, int p)
    {
        if(p==0)
            return 1;
        return (n*power(n,p-1));
    }
}
