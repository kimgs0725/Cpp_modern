template <typename T>
void f(T* param) {}

int main() {
  int x = 27;
  const int *px = &x;

  f(&x);  // T = int, ParamType = int*
  f(px);  // T = const int, ParamType = const int*
}
