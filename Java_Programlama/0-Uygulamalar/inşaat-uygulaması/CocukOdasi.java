package alistirma;

public class CocukOdasi extends Bolum{

	public CocukOdasi(int en, int boy, int yukseklik, String duvarRengi) {
		super(en, boy, yukseklik, duvarRengi);
		// TODO Auto-generated constructor stub
	}

	@Override
	void bilgileriGoster() {
		System.out.println("�ocuk odas� bilgileri: \nGeni�lik: "+getEn()+
				"Uzunluk: "+getBoy()+"\nY�kleklik: "+getYukseklik()+"\nDuvar Rengi: "+getDuvarRengi());
		
	}

}
