package alistirma;

public class OturmaOdasi extends Bolum{

	public OturmaOdasi(int en, int boy, int yukseklik, String duvarRengi) {
		super(en, boy, yukseklik, duvarRengi);
		// TODO Auto-generated constructor stub
	}

	@Override
	void bilgileriGoster() {
		System.out.println("Oturma odas� bilgileri: \nGeni�lik: "+getEn()+
				"\nUzunluk: "+getBoy()+"\nY�kleklik: "+getYukseklik()+"\nDuvar Rengi: "+getDuvarRengi());
		
	}

}
