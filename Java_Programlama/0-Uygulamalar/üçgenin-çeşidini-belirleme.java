import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		//Kenar uzunluklar� girilen ��genin �e�idini belirleyiniz.
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("��genin birinci kenar�n� giriniz: ");
		int a=scan.nextInt();

		System.out.print("��genin ikinci kenar�n� giriniz: ");
		int b=scan.nextInt();

		System.out.print("��genin ���nc� kenar�n� giriniz: ");
		int c=scan.nextInt();
		
		
		if(a==b && b==c) {
			System.out.println("��gen E�kenar bir ��gendir.");
		}else if(a==b || b==c || a==c) {
			System.out.println("��gen ikizkenar bir ��gendir.");
		}else {
			System.out.println("��gen �e�it kenar ��gendir.");
		}
		
		
	}
}
