void main() {
  int x = 12;
  int y = 0;
  int res;

  try {
    res = x ~/ y;
  } on IntegerDivisionByZeroException {
    print('Cannot divide by zero');
  }

  try {
    res = x ~/ y;
  } catch (e) {
    print(e);
  }

  try {
    test_age(-2);
  } catch (e) {
    print('Age cannot be negative');
  }
}

void test_age(int age) {
  if (age < 0) {
    throw new FormatException();
  }
}
