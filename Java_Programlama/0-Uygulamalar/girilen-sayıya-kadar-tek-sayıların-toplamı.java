import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Klavyeden girilen say�ya kadar olan say�lardan tek olanlar�n toplam�n� bulun...
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Ekrana bir say� giriniz: ");
		int sayi=scan.nextInt();
		
		int toplam=0;
		/*
		for(int i=0;i<=sayi;i++) {
			
			if(i%2==1) {
				System.out.println("i: "+i);
				toplam+=i;
			}
		}
		System.out.println("Toplamlar�: "+toplam);
		*/
		
		for(int i=sayi;i>0;i--) {
			
			if(i%2==1) {
				System.out.println("i: "+i);
				toplam+=i;
			}
			
		}
		System.out.println("Toplamlar�: "+toplam);
		
	}
}
