/* 
veri tiplari 
- numbers
  - integer (int)
  - Double (double)
- String
- Booleans
  - bool
-var
- dynamic
-const
-final
*/

void main() {
  //int
  int num = 15;
  print(num);

  //Double
  double num2 = 3.12;
  print(num2);

  // Stirng
  String cumle = 'Sadık oktay Biçici';
  String cumle2 = "Oktay Biçici";
  String cumle3 = """ birden fazla satıe için kullanılıyor""";
  print(cumle);
  print(cumle + " " + cumle2);

  //Booleans
  bool deg = true;
  print(deg); // true-false

  //var
  var num3 = 543;
  var pi = 3.1456;
  var cum = 'SADIK';
  print(num3);
  print(pi);
  print(cum);

  //dynamic
  //değişken türü değiştirilebilir
  dynamic degisken = 'OKtay';

  //const
  // değişken değeri değiştirilemez
  const pa = 3.21;
  const area = pa * 12 * 12;
  print('çıktı $area');

  //final
  //değiştirilemez
  final sonhal = 'Biçici';

  //Runes - Emojiler
  Runes input = new Runes(
      '\u2665  \u{1f605}  \u{1f60e}  \u{1f47b}  \u{1f596}  \u{1f44d}');
  print(new String.fromCharCodes(input));
}
