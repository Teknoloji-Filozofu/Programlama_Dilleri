package alistirma;

public class YatakOdasi extends Bolum{

	public YatakOdasi(int en, int boy, int yukseklik, String duvarRengi) {
		super(en, boy, yukseklik, duvarRengi);
	}

	@Override
	void bilgileriGoster() {
		System.out.println("Yatak odas� bilgileri: \nGeni�lik: "+getEn()+
				"\nUzunluk: "+getBoy()+"\nY�kleklik: "+getYukseklik()+"\nDuvar Rengi: "+getDuvarRengi());
		
	}

}
