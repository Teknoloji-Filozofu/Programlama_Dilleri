
public class Main {
	public static void main(String[] args) {
		
		/*Oyuncak fabrikas�nda �retilen oyunca��n kafa k�sm� istenilen kafalarla de�i�tirilebilsin ve 
		  oyunca��n alt�na farkl� ara�lar eklenebilsin. 
		 */
		
		SariKafa sariKafa=new SariKafa("D�z", "Sar�", "Ye�il");
		
		Bisiklet bisiklet=new Bisiklet();
		
		K�rm�z�Kafa k�rm�z�Kafa=new K�rm�z�Kafa("Dalgal�", "K�rm�z�", "Siyah");
		
		Motor motor=new Motor();
		
		MaviKafa maviKafa=new MaviKafa("K�v�rc�k", "Mavi", "Mavi");
		
		Araba araba=new Araba();
		
		OyuncakBebek bebek=new OyuncakBebek(maviKafa, araba);
		
		bebek.selamla();
		bebek.hareketeGec();
		
		bebek.getArac().hizlan(15);
		
		bebek.getBas().bilgiler();
	}
}
