
public class Bisiklet implements Arac{

	private int hiz;
	
	@Override
	public void hareketeGec() {
		
		System.out.println("Bisiklet harekete ge�ti.");
	}

	@Override
	public void hizlan(int hiz) {
		this.hiz=hiz;
		System.out.println("Bisikletin h�z� "+hiz+" seviyesine getirildi.");
		
	}

}
