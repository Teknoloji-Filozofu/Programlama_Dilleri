import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		/*
		
		Eri�im Belirleyicisi= public, private, protected
		Ekstra �zellik= static, final
		Geri D�n�� Tipi= void, int..., String, boolean, char, 
		
		*/
		
		//Eri�imBelirleyicisi ekstra�zellik ekstra�zellik geriD�n��Tipi isim(parametre){ } 
		
		topla();
		
		carpma();
		
	}
	
	public static void topla() {
		
		/*
		System.out.println("Merhaba, topla metodunu kulland�n�z.");
		
		System.out.println("A+B: "+(14+15));*/
		
		
		Scanner scan=new Scanner(System.in);
		
		System.out.println("Birinci say�y� giriniz: ");
		int sayi1=scan.nextInt();
		System.out.println("�kinci say�y� giriniz: ");
		int sayi2=scan.nextInt();
		
		System.out.println("Toplamlar�: "+(sayi1+sayi2));
		
	}
	
	
	public static void carpma() {
		Scanner scan=new Scanner(System.in);
		
		System.out.println("Birinci say�y� giriniz: ");
		int sayi1=scan.nextInt();
		System.out.println("�kinci say�y� giriniz: ");
		int sayi2=scan.nextInt();
		
		System.out.println("�arp�mlar�: "+(sayi1*sayi2));
	}
	
	
	
}
