import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scan=new Scanner(System.in);
		
		KitapIslemleri kitapIslemleri=new KitapIslemleri();
		
		while(true) {
			System.out.println("Hangi i�lemi yapmak istersiniz? \n1-)Kitap Ekle\n2-)Kitap Sil\n3-)Kitap G�ncelle"
					+ "\n4-)T�m Kitaplar� G�r�nt�le\n5-)Program� Sonland�r");
			int cevap=scan.nextInt();
			scan.nextLine();
			
			if(cevap==1) {
				
				System.out.print("Kitap �smi giriniz");
				String kitapAd�=scan.nextLine();

				System.out.print("Kitap ISBN no giriniz");
				String kitapIsbn=scan.nextLine();

				System.out.print("Kitap a��klamas� giriniz");
				String kitapAciklama=scan.nextLine();
				
				
				System.out.print("Yazar �smi giriniz");
				String yazarAdi=scan.nextLine();

				System.out.print("Yazar ya�� giriniz");
				int yas=scan.nextInt();
				scan.nextLine();

				System.out.print("Yazar memleketi giriniz");
				String memleket=scan.nextLine();
				

				System.out.print("Yay�nevi �smi giriniz");
				String yayineviAdi=scan.nextLine();
				
				System.out.print("Yay�nevi adresi giriniz");
				String adres=scan.nextLine();
				
				Yazar yazar=new Yazar(yazarAdi, yas, memleket);
				Yayinevi yayinevi=new Yayinevi(yayineviAdi, adres);
				Kitap kitap=new Kitap(kitapAd�, kitapIsbn, yazar, yayinevi, kitapAciklama);
				
				kitapIslemleri.kitapEkle(kitap);
				
			}else if(cevap==2) {
				System.out.print("Silmek istedi�niiz kitab�n numaras�n� giriniz: ");
				int index=scan.nextInt();
				scan.nextLine();
				kitapIslemleri.kitapSil(index);
				
			}else if(cevap==3) {
				System.out.print("Hangi kitab� g�ncellemek istersiniz: ");
				int index=scan.nextInt();
				scan.nextLine();
				
				System.out.print("Kitap �smi giriniz");
				String kitapAd�=scan.nextLine();

				System.out.print("Kitap ISBN no giriniz");
				String kitapIsbn=scan.nextLine();

				System.out.print("Kitap a��klamas� giriniz");
				String kitapAciklama=scan.nextLine();
				
				
				System.out.print("Yazar �smi giriniz");
				String yazarAdi=scan.nextLine();

				System.out.print("Yazar ya�� giriniz");
				int yas=scan.nextInt();
				scan.nextLine();

				System.out.print("Yazar memleketi giriniz");
				String memleket=scan.nextLine();
				

				System.out.print("Yay�nevi �smi giriniz");
				String yayineviAdi=scan.nextLine();
				
				System.out.print("Yay�nevi adresi giriniz");
				String adres=scan.nextLine();
				
				Yazar yazar=new Yazar(yazarAdi, yas, memleket);
				Yayinevi yayinevi=new Yayinevi(yayineviAdi, adres);
				Kitap kitap=new Kitap(kitapAd�, kitapIsbn, yazar, yayinevi, kitapAciklama);
				
				kitapIslemleri.kitapGuncelle(index, kitap);
			}else if(cevap==4) {
				kitapIslemleri.tumKitaplar();
			}else if(cevap==5) {
				System.out.println("Program sonland�r�ld�.");
				break;
			}
			System.out.println("_________________________________________________________");
		}
		
		
		
		
	}
}
