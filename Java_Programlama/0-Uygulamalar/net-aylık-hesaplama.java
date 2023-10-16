
public class Main {
	public static void main(String[] args) {
		
		/*
		
		Kullan�c�n�n �al��t��� g�n ile g�nl�k �cretine g�re o ki�inin net ayl�k �cretini hesaplay�n.
		
		- Ayl�k br�t gelir = (g�nl�k �cret* �al���lan g�n say�s�)
		- Gelir vergisi = (ayl�k br�t gelir * vergi oran�)
		- Net ayl�k �cret = (Ayl�k br�t gelir � Gelir vergisi)
		
		*/
		
		netAylik(150, 25);
		
	}
	
	public static int aylikBrut(int calisilanGun,int ucret) {
		System.out.println("aylikBrut Metodu");
		
		int aylikBrut=calisilanGun*ucret;
		
		return aylikBrut;
	}
	
	public static double gelirVergisi(int aylikBrutGelir) {
		System.out.println("gelirVergisiMetodu");
		
		double gelirVergisi=aylikBrutGelir*0.18;
		
		return gelirVergisi;
	}
	
	public static void netAylik(int ucret,int calisilanGun) {
		System.out.println("NetAylik Metodu");
		
		int aylikBrut=aylikBrut(calisilanGun, ucret);
		
		double gelirVergi=gelirVergisi(aylikBrut);
		
		System.out.println("Net maa��n�z: "+(aylikBrut-gelirVergi));
		
	}
	
	
	
}
