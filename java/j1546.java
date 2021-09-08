import java.util.Arrays;
import java.uitl.Scanner;

public class j1546{
    public static void main(String[] args){
        int n;
        Scanner scan = new Scanner(System.in);
        double max=0.0;
        double ave=0.0;
        double result=0.0;
        double sub[]=new double[1000]
        
        for(int i=0; i<n; i++){
            sub[i]=scan.nextInt();
            if(max<sub[i]){
                max=sub[i];
            }
        }

        for(int i=0; i<n; i++){
            sub[i]=(sub[i]/max)*100;
            ave+=sub[i];
        }

        result=ave/n;

        System.out.print(result);
    }
}