template <typename T>
void f(T& param) {}

int main() {
  const char name[] = "J. P. Briggs";
  f(name)   // T = const char [], ParamType = const char []
            // name = const char []
  return 0;
}
