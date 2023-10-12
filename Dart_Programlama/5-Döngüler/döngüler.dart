/* 
kesin döngü
  -for
belirsiz döngü
  -while
  -do..while 
  */

void main() {
  //for kulanımı
  for (var sayi = 0; sayi < 9; sayi++) {
    print("sayı artıyor $sayi");
  }

  //while
  var x = 0;
  while (x < 9) {
    print("sayı artıyor $x");
    x++;
  }

  var y = 0;
  //do-while
  do {
    print("sayı artıyor $x");
    y++;
  } while (y < 9);

  //foreach döngüsü
  List liste = const ["ali", "veli", "mehmet"];
  liste.forEach((eleman) => print("merhaba $eleman"));
}
