import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		
		
		//Final notu, vize notu ve proje notu girilen ��rencinin y�lsonu notunu hesaplay�n. (Vize %30, Proje %20, Final %50)
		
		Scanner scan=new Scanner(System.in);
		
		System.out.print("L�tfen Vize notunuzu giriniz: ");
		double vizeNotu=scan.nextDouble();
		
		System.out.print("L�tfen final notunuzu giriniz: ");
		double finalNotu=scan.nextDouble();

		System.out.print("L�tfen proje notunuzu giriniz: ");
		double projeNotu=scan.nextDouble();
		
		
		System.out.println("��rencinin y�lsonu notu: "+(vizeNotu*0.3+finalNotu*0.5+projeNotu*0.2));
		
	}
}
