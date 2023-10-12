void main() {
  //fonksiyon çağırma işlemi
  fonk();

  kisafonk();

  int p = f1() + f2();
  print(p);

  topla(8, 5);

  ustFonk("mehmet");
}

//fonksiyon tanımlama işlemi
fonk() {
  print("sadık-oktay-biçici");
}

//kısa fonksiyon tanımı
kisafonk() => print("kısa yokdan fonksiyon");

int f1() {
  int x = 5;
  return x;
}

int f2() {
  int x = 10;
  return x;
}

int topla(int a, int b) {
  int g;
  g = a + b;
  return g;
}

//iç içe fonksiyon örneği
ustFonk(String ilk_deger) {
  int ilk_sayi = 43;
  print(ilk_deger);

  ikinnciFonksiyon(String ikinci_deger) {
    int ikinci_sayi = 65;
    print(ikinci_deger);
    print(ilk_sayi);

    sonFonksiyon() {
      print("Merhaba $ilk_deger $ilk_sayi ve $ikinci_deger $ikinci_sayi");
    }

    sonFonksiyon();
  }

  ikinnciFonksiyon("Ali");
}
