package alistirma;

public class MisafirOdasi extends Bolum{

	public MisafirOdasi(int en, int boy, int yukseklik, String duvarRengi) {
		super(en, boy, yukseklik, duvarRengi);
		// TODO Auto-generated constructor stub
	}

	@Override
	void bilgileriGoster() {
		System.out.println("Misafir odas� bilgileri: \nGeni�lik: "+getEn()+
				"Uzunluk: "+getBoy()+"\nY�kleklik: "+getYukseklik()+"\nDuvar Rengi: "+getDuvarRengi());
		
	}

}
