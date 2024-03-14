 import java.util.*; 
class bikers 
{ 
         public static void main(String[] args)  
         { 
                   float s1,s2,s3,s4,s5,average; 
                   Scanner s = new Scanner(System.in); 
                   System.out.println("Enter speed of first racer:"); 
                   s1 = s.nextFloat(); 
                   System.out.println("Enter speed of second racer:"); 
                   s2 = s.nextFloat(); 
                   System.out.println("Enter speed of third racer:"); 
                   s3 = s.nextFloat(); 
                   System.out.println("Enter speed of fourth racer:"); 
                   s4 = s.nextFloat(); 
                   System.out.println("Enter speed of fifth racer:"); 
                   s5 = s.nextFloat(); 
                   average=(s1+s2+s3+s4+s5)/5; 
                   if(s1>average) 
                   System.out.println("First racer is qualify racer:"); 
                   else if(s2>average) 
                   System.out.println("Second racer is qualify racer:"); 
                   else if(s3>average) 
                   System.out.println("Third racer is qualify racer:"); 
                   else if(s4>average) 
                   System.out.println("Fourth racer is qualify racer:"); 
                   else if(s5>average) 
                   System.out.println("Fifth racer is qualify racer:"); 
         } 
}