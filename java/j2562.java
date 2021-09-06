import java.util.Arrays;
import java.util.Scanner;

public class j2562{
    public static void main(String[] args){
        
        Scanner scan = new Scanner(System.in);
        int num[] = new int[9];
        int cnt=0;
        int cnt_t=0;
        int max=0;

        for(int i=0; i<9; i++){
            num[i] = scan.nextInt();
            cnt++;

            if(max<num[i]){
                max=num[i];
                cnt_t=cnt;
            }
        }

        System.out.println(max);
        System.out.println(cnt_t);
    }
}