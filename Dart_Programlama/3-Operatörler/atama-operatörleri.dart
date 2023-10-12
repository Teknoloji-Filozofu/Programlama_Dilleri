void main() {
  var x;
  int a = 10;
  double b = 10;

  // düz atama öperatörü
  a = 20;
  print(a);

  // toplamayarak atama operatörü
  a += 20;
  print(a);

  //çıkartarak atama opratörü
  a -= 20;
  print(a);

  //çarpar atama yapar
  a *= 20;
  print(a);

  //böler atama yapar
  b /= 20;
  print(b);

  //böler ve yuvarlar atama yapar
  a ~/= 20;
  print(a);

  //mod alır ve atama yapar
  a %= 20;
  print(a);

//eğer x e değer atanmadıysa 10 atar
//x e değaer atanmışsa atama yapmaz
  x ??= 10;
}
