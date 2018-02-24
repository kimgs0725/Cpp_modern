template <typename T>
void f(T param) {}

int main() {
  int x = 27;
  const int cx = x;
  const int& rx = x;

  f(x);   // T = int, ParamType = int
  f(cx);  // T = int, ParamType = int
  f(rx);  // T = int, ParamType = int

  return 0;
}
