import java.util.*;
public class maxSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        //int arr[] = new int[n+1];
        int currNum,prevNum=0,max=0,s=0;
        for(int i=0;i<n;i++)
        {
            currNum=sc.nextInt();
            if(currNum>prevNum)
            {
                s+=currNum;
            }
            else
            {
                if(max<s)
                {
                    max=s;
                    s=currNum;
                }
            }
            prevNum=currNum;
        }
        if(max<s)
            max=s;
        System.out.println(max);
        //int max=0,s=0;
        /*for(int i=0;i<n;i++)
        {
            //int s=0;
            if(arr[i]<arr[i+1])
            {
                s+=arr[i];
            }
            else
            {
                s+=arr[i];
                if(max<s)
                {
                    max=s;
                    s=0;
                }
            }
        }*/
        //System.out.println(max);
    }

}
