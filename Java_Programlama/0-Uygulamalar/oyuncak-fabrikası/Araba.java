
public class Araba implements Arac{

	private int hiz;
	
	@Override
	public void hareketeGec() {
		System.out.println("Araba harekete ge�ti.");
		
	}

	@Override
	public void hizlan(int hiz) {
		this.hiz=hiz;
		System.out.println("Araban�n h�z�"+hiz+" seviyesine getirildi.");
	}

}
