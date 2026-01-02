#include <iostream>

int add(int x, int y)
{
  return x + y;
}
int sub(int x, int y)
{
  return x - y;
}

int main(int argc, char** argv)
{
  std::cout << "just test add : " << add(3, 5) << std::endl;
  std::cout << "just test sub 5-3=" << sub(5, 3) << std::endl;
  return 0;
}
