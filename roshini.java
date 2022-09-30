import java.util.*;
public class roshini{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int shift = sc.nextInt();
        int x,y;
        x=Character.getNumericValue(str.charAt(0));
        y=Character.getNumericValue(str.charAt(2));
        char ch=str.charAt(1);
        if(shift==0)
            normal(x,y,ch);
        else
            shifted(x,y,ch);
            
    }

    public static void normal(int x,int y,char ch) {
        switch(ch){
            case '+':
                System.out.println(x+y);
                break;
            case '-':
                System.out.println(x-y);
                break;
            case '*':
                System.out.println(x*y);
                break;
            case '/':
                System.out.println(x/y);
                break;
        }
    }

    public static void shifted(int x,int y,char ch) {
        switch(ch){
            case '-':
                System.out.println(x+y);
                break;
            case '+':
                System.out.println(x-y);
                break;
            case '/':
                System.out.println(x*y);
                break;
            case '*':
                System.out.println(x/y);
                break;
        }
    }
}

//correct method
/*import java.util.Scanner;
public class Question91{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		String input = sc.nextLine();
				int i=0,j=0;
		double output=0;
		// Split the input string into character array
		char seq[] = input.toCharArray();
		/*
		Use some method to separate the two operands
		and then perform the required operation.
		
		for(int a=0; a<seq.length; a++){
			if(seq[a]=='+'){
				i= Integer.parseInt(input.substring(0,a));
				j= Integer.parseInt(input.substring(a+1,seq.length));
				output = (double)i+j;
			}else if(seq[a]=='-'){
				i= Integer.parseInt(input.substring(0,a));
				j= Integer.parseInt(input.substring(a+1,seq.length));
				output = (double)i-j;
			}else if(seq[a]=='/'){
				i= Integer.parseInt(input.substring(0,a));
				j= Integer.parseInt(input.substring(a+1,seq.length));
				output = (double)i/j;
			}else if(seq[a]=='*'){
				i= Integer.parseInt(input.substring(0,a));
				j= Integer.parseInt(input.substring(a+1,seq.length));
				output = (double)i*j;
			}
		}
		// Print the output as stated in the question
		System.out.print(input+" = " + Math.round(output));
	}
}*/