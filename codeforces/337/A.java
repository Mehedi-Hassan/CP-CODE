import static java.lang.Integer.max;
import static java.lang.Integer.min;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        ArrayList<Integer>number = new ArrayList<Integer>();
        Scanner input = new Scanner(System.in);
        int n, m, temp, temp1 = 0, temp2 = 0;
        n = input.nextInt();m = input.nextInt();
        for(int i=0;i<m;i++)
        {
            temp = input.nextInt();
            number.add(temp);
        }
        Collections.sort(number);
        temp = 100000000;
        for(int i=n-1;i<m;i++)
        {
            temp1 = number.get(i);
            temp2 = number.get(i);
            for(int j=n-1;j>=0;j--)
            {
                temp1 = min(temp1,number.get(i-j));
                temp2 = max(temp2,number.get(i-j));
            }
            if(temp2-temp1<temp)
            temp = temp2-temp1;
        }
        System.out.print(temp);
    }
}