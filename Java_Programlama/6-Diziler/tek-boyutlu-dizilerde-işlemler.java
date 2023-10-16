import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		
		/* 
		   1-) Yeni bir tane tam say� tipinde array olu�tur ve i�erisine rastgele degerler ekle.
		   2-) Olu�turdu�un dizinin elamanlar�n� k���kten b�y��e s�rala
		   3-) Yeni bir array olu�tur ve s�ralanm�� arrayi yeni olu�turdu�un aray�n i�erisine kopyala
		   4-) Yeni bir array olu�tur ve s�ralanm�� dizinin 2. indeksi ile 6. indeksi aras�ndaki de�erleri
		   yeni arrayin i�ine kopyala.
		   
		 */
		
		int [] sayilar= {70,15,19,28,2,6,1,97,48,59,55};
		for(int i=0;i<sayilar.length;i++) {
			System.out.print(sayilar[i]+" ");
		}
		System.out.println();
		System.out.println("--------------------------------------");
		Arrays.sort(sayilar);
		
		for(int i=0;i<sayilar.length;i++) {
			System.out.print(sayilar[i]+" ");
		}
		
		System.out.println();
		System.out.println("--------------------------------------");
		
		int[] b=Arrays.copyOf(sayilar,11);
		for(int i=0;i<b.length;i++) {
			System.out.print(b[i]+" ");
		}
		System.out.println();
		System.out.println("--------------------------------------");
		
		int[] c=Arrays.copyOfRange(sayilar, 2, 6);
		for(int i=0;i<c.length;i++) {
			System.out.print(c[i]+" ");
		}
		
	}
}
