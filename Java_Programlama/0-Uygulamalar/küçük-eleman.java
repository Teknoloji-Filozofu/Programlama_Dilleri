
public class Main {
	public static void main(String[] args) {
		
		// Arrayin i�erisindeki en k���k elaman� bulunuz.
		
		int [] dizi= {45,78,2,19,48,56,23,47,49,15,97,3,1,46};
		
		int [] dizi2= {87,95,48,25,124,53,26,84,57,89,25,17,85,47,15,24};
		
		enKucukEleman(dizi);
		enBuyukEleman(dizi);
	}
	
	public static void enKucukEleman(int [] dizi) {
		
		int minDeger=dizi[0];
		
		for(int i=0;i<dizi.length;i++) {
			
			if(minDeger>=dizi[i]) {
				minDeger=dizi[i];
			}
			
		}
		
		System.out.println("En k���k de�er: "+minDeger);
		
	}
	
	public static void enBuyukEleman(int []array) {
		int maxDeger=array[0];
		
		for(int i=0;i<array.length;i++) {
			if(maxDeger<=array[i]) {
				
				maxDeger=array[i];
				
			}
		}
		System.out.println("En b�y�k de�er: "+maxDeger);
		
	}
	
}
