void main() {
  var sinifListesi = ["ali", "ahmet", "mehmet", 23, true];

  List sinif2 = ["veli", "suleyman", "ahmet", 43];

  List<int> notlar = [43, 54];
  List<String> sinif3 = ["ali", "cafer"];

  print(notlar[0]);
  print(sinif2[1]);

  sinif2[1] = "vural";
  print(sinif2[1]);
}
