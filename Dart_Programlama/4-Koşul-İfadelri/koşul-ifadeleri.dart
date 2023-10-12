void main() {
  int x = 3;

  //if-else if-else
  if (x != 9) {
    print('x 9 a eşit değil');
  } else if (x == 3) {
    print("x 3 eşittir");
  } else {
    print("koşul yerine geitrilmedi");
  }

  //switch case
  List haftaningunleri = [
    "Pazartesi",
    "Salı",
    "Çarşamba",
    "Perşembe",
    "Cuma",
    "Cumartesi",
    "Pazar"
  ];

  switchDongu(gun) {
    switch (gun) {
      case "Pazartesi":
        print("bugün haftanın 1. Günü");
        break;
      case "Salı":
        print("bugün haftanın 2. günü");
        break;
      case "Çarşamba":
        print("bugün haftanın 3. günü");
        break;
      case "Perşembe":
        print("bugün haftanın 4. günü");
        break;
      case "Cuma":
        print("bugün haftanın 5. günü");
        break;
      default:
        print("Girdiğiniz değer hafta içine ait bir değer değil");
        break;
    }
  }

  //? koşul ifadesi
  var a = 0;

  a == 0 ? print("sayı 0 a eşittir") : print("sayı 0 eşit değildir");
}
