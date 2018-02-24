template <typename T>
void f(const T& param) {}

int main() {
  int x = 27;
  const int cx = x;
  const int& rx = x;

  f(x);   // T = int, ParamType = const int&
  f(cx);  // T = int, ParamType = const int&, expr과 ParamType 비교하여 T 결정
          // 그래도 T가 const int인 경우 ParamType은 const const int가 됨.
  f(rx);  // T = int, ParamType = const int&, expr과 ParamType 비교하여 T 결정
}
