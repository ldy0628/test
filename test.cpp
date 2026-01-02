#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int main(int argc, char** argv)
{
  std::cout << "just test add : " << add(3, 5) << std::endl;
  return 0;
}
