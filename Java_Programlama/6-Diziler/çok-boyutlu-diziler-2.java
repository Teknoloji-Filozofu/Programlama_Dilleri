
public class Main {
	public static void main(String[] args) {
		
		/*String [][] isimler=new String[3][2];
		
		isimler[0][0]="�mit";
		isimler[0][1]="�elebi";
		
		isimler[1][0]="Emin";
		isimler[1][1]="Y�lmaz";
		
		isimler[2][0]="Melih";
		isimler[2][1]="Demir";
		*/
		
		String [][] isimler= { {"�mit","�elebi"}, {"Emin", "Y�lmaz"},{"Melih","Demir"},{"Enes","Kandaz"}   };
		
		for(int i=0;i<4;i++) {
			
			for(int j=0;j<2;j++) {
				
				System.out.print(isimler[i][j]+" ");
			}
			System.out.println();
		}
	}
}
