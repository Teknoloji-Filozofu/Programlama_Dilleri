import java.util.ArrayList;

public class VBKullanici implements IKullanici{

	ArrayList<Kullanici> kullaniciler=new ArrayList<Kullanici>();
	
	@Override
	public void kullaniciKaydet(Kullanici kullanici) {
		kullaniciler.add(kullanici);
		
	}

	@Override
	public void kullaniciSil(int id) {
		kullaniciler.remove(id);
	}

	@Override
	public void kullaniciGuncelle(int id, Kullanici kullanici) {
		kullaniciler.set(id, kullanici);
		
	}

	@Override
	public void kullaniciGoruntule() {
		for(Kullanici kul:kullaniciler) {
			System.out.println("Kullan�c� Ad�: "+kul.getKullaniciAdi()+"\nParola: "+kul.getParola()+
					"\n�smi: "+kul.getIsim()+"\nSoyismi: "+kul.getSoyisim()+"\nMail: "+kul.getMail()+"\n------------------------------");
		}
		
	}
	
}
