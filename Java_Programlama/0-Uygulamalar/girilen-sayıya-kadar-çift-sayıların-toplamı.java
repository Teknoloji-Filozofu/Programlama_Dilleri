import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Klavyeden girilen say�ya kadar olan say�lardan �ift olanlar�n toplam�n� bulun...
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Say� giriniz: ");
		int sayi=scan.nextInt();
		int toplam=0;
		
		/*
		int i=0;
		
		while(i<=sayi) {
			
			if(i%2==0) {
				System.out.println("i: "+i);
				toplam+=i;
			}
			
			i++;
			
		}
		System.out.println("Toplamlar�: "+toplam);
		*/
		
		
		
		
		while(sayi>0) {
			
			if(sayi%2==0) {
				System.out.println("Say�: "+sayi);
				toplam+=sayi;
			}
			sayi--;
		}
		System.out.println("Toplam: "+toplam);
		
	}
}
