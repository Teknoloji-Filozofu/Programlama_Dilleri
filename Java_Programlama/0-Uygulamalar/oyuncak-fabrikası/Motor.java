
public class Motor implements Arac{

	private int hiz;
	
	@Override
	public void hareketeGec() {
		System.out.println("Motor harekete ge�ti.");
		
	}

	@Override
	public void hizlan(int hiz) {
		this.hiz=hiz;
		System.out.println("Motorun h�z� "+hiz+" seviyesine getirildi.");
		
	}

}
