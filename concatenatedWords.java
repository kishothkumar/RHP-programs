import java.util.*;
import java.text.Collator;
public class concatenatedWords {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc = new Scanner(System.in);
		String str=sc.nextLine();
		String arr[] = str.split(" ");
		for(int i=0;i<arr.length-1;i++)
		{
		    for(int j=i+1;j<arr.length;j++)
		    {
		    if(Character.toLowerCase(arr[i].charAt(0))==Character.toLowerCase(arr[j].charAt(0)) && arr[i]!="*")
		    {
		        arr[i]=arr[i]+arr[j];
		        arr[j]="*";
		    }
		    }
		}
		
		Arrays.sort(arr,Collator.getInstance());
        for(String s:arr)
        {
            if(s!="*")
                System.out.println(s+" ");
        }
	}
}