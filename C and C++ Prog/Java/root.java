import java.util.Scanner;

public class root {
    public static void main(String[] args)
     {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter the value of a");
        double a=input.nextDouble();
        System.out.println("Enter the value of b");
        double b=input.nextDouble();
        System.out.println("Enter the value of c");
        double c=input.nextDouble();
        double d=b*b-4.0*a*c;
        if(d>0.0)
        {
            System.out.println("Roots are real and unequal");
              double r1=(-b+Math.pow(d,0.5))/(2.0*a);
              double r2=(-b+Math.pow(d,0.5))/(2.0*a);
            System.out.println("The roots are " +r1  +r2);
        }
        else if(d==0.0)
        {
            System.out.println("Roots are real and unequal");
            double r1=-b/(2.0*a);
            System.out.println("The root is "+r1);
        }
        else{
            System.out.println("Root are not real");
        }
    }
}
