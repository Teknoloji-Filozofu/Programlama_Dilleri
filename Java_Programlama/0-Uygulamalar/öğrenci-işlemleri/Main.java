import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		ArrayList<Ogrenci> ogrenciler=new ArrayList<Ogrenci>();
		
		Scanner scan=new Scanner(System.in);
		
		while(true) {
			
			System.out.println("Hangi i�lemi yapmak istersiniz?\n1-)��renci Kaydet\n2-)��renci Sil\n3-)��rencileri G�r�nt�le\n4-)��k��");
			
			int islem=scan.nextInt();
			scan.nextLine();
			if(islem==1) {
				
				System.out.print("��renci ismi girin: ");
				String isim=scan.nextLine();
				System.out.print("��renci soyismi girin: ");
				String soyisim=scan.nextLine();
				System.out.print("��renci numaras� girin: ");
				int numara=scan.nextInt();
				scan.nextLine();
				System.out.print("��renci ortalamas� girin: ");
				double ortalama=scan.nextDouble();
				scan.nextLine();
				
				Ogrenci ogrenci=new Ogrenci(numara, isim, soyisim, ortalama);
				
				ogrenciler.add(ogrenci);
				
			}else if(islem==2) {
				
				System.out.println("Hangi ��rencisi silmek istersiniz?");
				String isim=scan.nextLine();
				Ogrenci ogrenci=null;
				
				for(Ogrenci ogr:ogrenciler) {
					
					if(ogr.getAdi().equals(isim)) {
						ogrenci=ogr;
					}
				}
				ogrenciler.remove(ogrenci);
				
			}else if(islem==3) {
				
				if(ogrenciler.isEmpty()) {
					System.out.println("�uan listede kay�tl� ��renci bulunmamaktad�r.\n-------------------");
				}
				
				for(Ogrenci ogrenci:ogrenciler) {
					System.out.println("��rencinin Ad�: "+ogrenci.getAdi()+
							"\n��rencinin Soyad�: "+ogrenci.getSoyadi()+"\nNumaras�: "+ogrenci.getNumarasi()+
							"\n��rencinin Ortalamas�: "+ogrenci.getOrtalama()+"\n-----------------------------");
				}
				
			}else if(islem==4) {
				System.out.println("Program sonland�r�ld�.");
				break;
			}
			
			
			
			
		}
		
		
	}
}
