
public class Main {
	public static void main(String[] args) {
		
		//Beden K�tle Indeksini hesaplay�n�z. ( Kilo/(Boy*Boy))
		
		hesapla(75, 1.78);
		
		hesapla(90, 1.85);
		
		hesapla("Ali",70,1.80);
		
		hesapla(75,1.78,"Emin");
	}
	
	public static void hesapla(int kilo,double boy) {
		
		System.out.println("Beden k�tle indeksiniz: "+(kilo/(boy*boy)));
		
	}
	
	public static void hesapla(String isim,int kilo,double boy) {
		
		System.out.println("Merhaba, "+isim+" Beden k�tle indeksiniz: "+(kilo/(boy*boy)));
		
	}
	
	public static void hesapla(int kilo,double boy,String isim) {
		
		System.out.println("Merhaba, "+isim+" Beden k�tle indeksiniz: "+(kilo/(boy*boy)));
	}
	
}
