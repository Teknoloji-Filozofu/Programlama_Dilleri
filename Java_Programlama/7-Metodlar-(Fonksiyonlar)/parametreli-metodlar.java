
public class Main {
	public static void main(String[] args) {
		
		/*
		
		Eri�im Belirleyicisi= public, private, protected
		Ekstra �zellik= static, final
		Geri D�n�� Tipi= void, int..., String, boolean, char, 
		
		*/
		
		//Eri�imBelirleyicisi ekstra�zellik ekstra�zellik geriD�n��Tipi isim(parametre){ } 
		/*
		topla(18,5);
		
		topla(34,10);
		
		topla(78,14);
		
		carp(5,4);*/
		/*
		
		yasSoyle("Muhammed",45);
		yasSoyle("�mit", 29);
		yasSoyle("Emin", 28);*/
		/*
		int a=10+cikarma(38, 9);
		
		System.out.println("a: "+a);
		
		String isim=isimSoyle("�mit");
		System.out.println(isim);
		*/
		
		int sonuc=cikarma(20, 4)+bolme(20, 4);
		System.out.println(sonuc);
	}
	
	
	public static int bolme(int sayi1,int sayi2) {
		
		return sayi1/sayi2;
		
	}
	
	
	
	public static int cikarma(int sayi1,int sayi2) {
		
		int sonuc=sayi1-sayi2;
		
		//System.out.println("Sonu�: "+sonuc);
		
		return sonuc;
	}
	
	public static String isimSoyle(String isim) {
		
		String mesaj="Merhaba, "+isim;
		
		return mesaj;
	}
	
	
	
	public static void topla(int sayi,int sayi2) {
		
		//System.out.println("Girdi�iniz say� ile 10'un toplam�: "+(sayi+10));
		
		System.out.println("Toplamlar�: "+(sayi+sayi2));
		
	}
	
	private static void carp(int sayi1,int sayi2) {
		
		System.out.println("Say�lar�n �arp�m�: "+(sayi1*sayi2));
		
	}
	
	public static void yasSoyle(String isim,int yas) {
		
		System.out.println("Merhaba, "+isim+"\nYa��n�z: "+yas);
		
	}
	
	
}
