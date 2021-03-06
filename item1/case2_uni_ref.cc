template <typename T>
void f(T&& param) {}

int main() {
  int x = 27;
  const int cx = x;
  const int& rx = x;

  f(x);   // T = int&, ParamType = int&
  f(cx);  // T = const int&, ParamType = const int&
  f(rx);  // T = cosnt int&, Paramtype = const int&
  f(27);  // T = int, ParamType = int&&

  return 0;
}
