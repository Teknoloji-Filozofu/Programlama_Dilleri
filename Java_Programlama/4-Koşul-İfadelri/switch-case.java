import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		Scanner scan=new Scanner(System.in);
		System.out.print("Ya��n�z� giriniz: ");
		int yas=scan.nextInt();
		
		
		switch(yas) {
		
		case 25:
			System.out.println("Ya��n�z 25");
		break;
		
		case 20:
			System.out.println("Ya��n�z 20");
		break;
		
		case 18:
			System.out.println("Ya��n�z 18");
		break;
		
		default:
			System.out.println("Ya��n�z bilinemedi.");
		break;
		}
		
		
	}
}
