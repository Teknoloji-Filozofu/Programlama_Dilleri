import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		
		VBKullanici vbKullanici=new VBKullanici();
		Scanner scan=new Scanner(System.in);
		
		while(true) {
			
			System.out.println("1-)Kullan�c� Ekle\n2-)Kullan�c� Sil\n3-)Kullan�c� G�ncelle\n4-)T�m Kullan�c�lar\n5-)��k��");
			int islem=scan.nextInt();
			scan.nextLine();
			
			if(islem==1) {
				
				System.out.print("Kullan�c� Ad� giriniz: ");
				String kulAdi=scan.nextLine();
				System.out.print("Kullan�c� parola giriniz: ");
				String parola=scan.nextLine();
				System.out.print("Kullan�c� isim giriniz: ");
				String isim=scan.nextLine();
				System.out.print("Kullan�c� soyisim giriniz: ");
				String soyisim=scan.nextLine();
				System.out.print("Kullan�c� mail giriniz: ");
				String mail=scan.nextLine();
				
				
				Kullanici kullanici=new Kullanici(kulAdi, parola, isim, soyisim, mail);
				
				vbKullanici.kullaniciKaydet(kullanici);
			}else if(islem==2) {
				System.out.print("Silmek istedi�niiz kullan�c�n�n numaras�n� giriniz: ");
				int id=scan.nextInt();
				scan.nextLine();
				
				vbKullanici.kullaniciSil(id);
				
			}else if(islem==3) {
				
				System.out.print("Kullan�c� Ad� giriniz: ");
				String kulAdi=scan.nextLine();
				System.out.print("Kullan�c� parola giriniz: ");
				String parola=scan.nextLine();
				System.out.print("Kullan�c� isim giriniz: ");
				String isim=scan.nextLine();
				System.out.print("Kullan�c� soyisim giriniz: ");
				String soyisim=scan.nextLine();
				System.out.print("Kullan�c� mail giriniz: ");
				String mail=scan.nextLine();
				
				System.out.print("Hangi kullan�c�y� g�ncellemek istersiniz: ");
				int id=scan.nextInt();
				scan.nextLine();
				
				
				Kullanici kullanici=new Kullanici(kulAdi, parola, isim, soyisim, mail);
				vbKullanici.kullaniciGuncelle(id, kullanici);
				
			}else if(islem==4) {
				vbKullanici.kullaniciGoruntule();
			}else if(islem==5) {
				System.out.println("Program sonland�r�ld�.");
				break;
			}
			
		}
		
		
	}
}
