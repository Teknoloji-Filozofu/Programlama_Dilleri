package alistirma;

public class Banyo extends Bolum{

	public Banyo(int en, int boy, int yukseklik, String duvarRengi) {
		super(en, boy, yukseklik, duvarRengi);
	}

	@Override
	void bilgileriGoster() {
		System.out.println("Banyo bilgileri: \nGeni�lik: "+getEn()+
				"Uzunluk: "+getBoy()+"\nY�kleklik: "+getYukseklik()+"\nDuvar Rengi: "+getDuvarRengi());
		
	}

}
