import java.util.Arrays;
import java.util.Scanner;

public class j3052{
    public static void main(String[] args){
        int num[]=new int[10];
        int result=0;

        Scanner scan = new Scanner(System.in);

        for(int i=0; i<10; i++){
            num[i]=scan.nextInt();
            num[i]%=42;
        }

        for(int i=0; i<10; i++){
            int cnt=0;
            for(int j=0; j<i; j++){
                if(num[i]==num[j]){
                    cnt++;
                }
            }
            if(cnt==0){
                result++;
            }
        }
        System.out.print(result);
    }
}