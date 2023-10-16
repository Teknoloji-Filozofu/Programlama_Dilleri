package map;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.TreeMap;

public class Main {
	public static void main(String[] args) {
		
		//HashMap
		//TreeMap
		//LinkedHashMap
		
		HashMap<String,String> ulkeler=new HashMap<String ,String>();
		
		
		ulkeler.put("TR","T�rkiye");
		ulkeler.put("AZ", "Azerbaycan");
		ulkeler.put("KKTC","Kuzey K�br�s T�rk Cumhuriyeti");
		ulkeler.put("TM", "T�rkmenistan");
		
		//ulkeler.clear();
		
		//ulkeler.remove("TR");
		//ulkeler.remove("TM","T�rkmenistan");
		
		//System.out.println(ulkeler.get("KKTC"));
		
		//System.out.println(ulkeler.keySet());
		//System.out.println(ulkeler.values());
		System.out.println("HashMap Elemanlar�: "+ulkeler);
		//System.out.println(ulkeler.size());
		
		//ulkeler.clear();
		//System.out.println(ulkeler.isEmpty());
		
		TreeMap<String,String> ulkeler2=new TreeMap<String ,String>();
		ulkeler2.put("TR", "T�rkiye");
		ulkeler2.put("AZ","Azerbaycan");
		ulkeler2.put("KKTC", "Kuzey K�br�s T�rk Cumhuriyeti");
		ulkeler2.put("TM", "T�rkmenistan");
		
		System.out.println("TreeMap Elemanlar�: "+ulkeler2);
		
		LinkedHashMap<String, String> ulkeler3=new LinkedHashMap<String,String>();
		
		ulkeler3.put("TR", "T�rkiye");
		ulkeler3.put("AZ","Azerbaycan");
		ulkeler3.put("KKTC", "Kuzey K�br�s T�rk Cumhuriyeti");
		ulkeler3.put("TM", "T�rkmenistan");
		
		System.out.println("LinkedHashMap Elemanlar�: "+ulkeler3);
		
	}
}
