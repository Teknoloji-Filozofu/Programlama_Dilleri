import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Girilen say�n�n fakt�riyelini hesaplay�n...
		
		//5!=5*4*3*2*1=120
		//7!=7*6*5*4*3*2*1=
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Say� giriniz: ");
		int sayi=scan.nextInt();
		
		int faktoriyel=1;
		
		for(int i=sayi;i>0;i--) {
			
			System.out.println("i: "+i);
			faktoriyel*=i;
			System.out.println("Faktoriyel: "+faktoriyel);
		}
		
		//System.out.println("Faktoriyel: "+faktoriyel);
		
	}
}
