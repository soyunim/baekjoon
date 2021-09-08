import java.util.Arrays;
import java.util.Scanner;

public class j2577{
    public static void main(String[] args){
        int num;
        int multi = 1;
        int result;
        int arr[] = new int[10];

        Scanner scan = new Scanner(System.in);

        for(int i=0; i<3; i++){
            num = scan.nextInt();

            multi *= num;
        }

        for(int i=0; multi>0; i++){
            result = multi%10;
            arr[result]+=1;
            multi /= 10;
        }

        for(int i=0; i<10; i++){
            System.out.println(arr[i]);
        }

    }
}