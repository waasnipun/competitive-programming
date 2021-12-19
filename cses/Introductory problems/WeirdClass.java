import java.util.Scanner;

public class WeirdClass {
    public static void main(String[] args) {

        long n;
        Scanner scanin = new Scanner(System.in);
        n = scanin.nextInt();
        System.out.print(n+" ");
        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else{
                n = 3*n +1;
            }
            System.out.print(n);
            System.out.print(" ");
        }

    }
}
