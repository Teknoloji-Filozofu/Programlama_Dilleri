void main() {
  int a = 10, b = 4, c = 10, d = 20;

  if (a > b && c == d)
    print("\n a değeri b'den büyüktür AND(VE) c değeri d'ye eşittir. \n");
  else
    print("\n AND(VE) koşulu yerine getirlmedi \n");

  if (a > b || c == d)
    print("\n a değeri b'den büyüktür OR(VEYA) c değeri d'ye eşittir. \n");
  else
    print("\n her iki koşul da sağlamamaktadır. \n");
}
