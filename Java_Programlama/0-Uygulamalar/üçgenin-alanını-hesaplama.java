import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Y�kekli�i ve taban uzunlu�u verilen ��genin alan�n� hesaplay�n�z. Formul: (y�kseklik x taban uzunlu�u)/2
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("��genin y�ksekli�ini giriniz: ");
		double yukseklik=scan.nextDouble();
		
		System.out.print("��genin taban uzunlu�unu giriniz: ");
		double tabanUzunlugu=scan.nextDouble();
		
		double alan=yukseklik*tabanUzunlugu/2;
		
		System.out.println("��genin alan�: "+alan);
		
		
	}
}
