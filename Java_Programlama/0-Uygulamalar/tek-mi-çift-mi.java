import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Klavyeden girilen say�n�n tek mi �ift mi oldu�unu belirleyiniz.
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("Say� giriniz: ");
		int sayi=scan.nextInt();
		
		if(sayi%2==0) {
			System.out.println("Say�: "+sayi+" �ift bir say�d�r.");
		}else {
			System.out.println("Say�: "+sayi +" tek bir say�d�r.");
		}
		
		
	}
}
