import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
Scanner scan=new Scanner(System.in);
		
		MatematikOgretmeni matematikOgretmeni=new MatematikOgretmeni("�smail", "�etinkaya", 45);
		EdebiyatOgretmeni edebiyatOgretmeni=new EdebiyatOgretmeni("Nurhayat", "�rencik", 55);
		IngilizceOgretmeni ingilizceOgretmeni=new IngilizceOgretmeni("Esra", "�nay", 37);
		while(true) {
		
		System.out.println("Bir ders se�iniz:\n1-)Matematik\n2-)Edebiyat\n3-)�ngilizce");
		
		
		int ders=scan.nextInt();
		scan.nextLine();
		
		if(ders==1) {
			System.out.println("Bir se�enek se�iniz: \n1-)Ders dinle\n2-)S�nav ol\n3-)Quiz ol");
			int secim=scan.nextInt();
			scan.nextLine();
			
			if(secim==1) {
				dersDinle(matematikOgretmeni);
			}else if(secim==2) {
				sinavOl(matematikOgretmeni);
			}else if(secim==3) {
				matematikOgretmeni.quizYap();
			}else {
				System.out.println("Hatal� se�im yapt�n�z. ");
			}
		}else if(ders==2) {
			System.out.println("Bir se�enek se�iniz: \n1-)Ders dinle\n2-)S�nav ol");
			int secim=scan.nextInt();
			scan.nextLine();
			if(secim==1) {
				dersDinle(edebiyatOgretmeni);
			}else if(secim==2) {
				sinavOl(edebiyatOgretmeni);
			}else {
				System.out.println("Hatal� bir se�in yapt�n�z.");
			}
		}else if(ders==3) {
			System.out.println("Bir se�enek se�iniz: \n1-)Ders dinle\n2-)S�nav ol\n3-)S�zl� yap");
			int secim=scan.nextInt();
			scan.nextLine();
			if(secim==1) {
				dersDinle(ingilizceOgretmeni);
			}else if(secim==2) {
				sinavOl(ingilizceOgretmeni);
			}else if(secim==3) {
				ingilizceOgretmeni.sozluYap();
			}
			else {
				System.out.println("Hatal� bir se�in yapt�n�z.");
			}
		}else {
			System.out.println("Hatal� bir se�im yapt�n�z.");
		}
		
		}
	}
	
	public static void dersDinle(Ogretmen ogretmen) {
		ogretmen.dersAnlat();
	}
	
	public static void sinavOl(Ogretmen ogretmen) {
		ogretmen.sinavYap();
	}
	
}
