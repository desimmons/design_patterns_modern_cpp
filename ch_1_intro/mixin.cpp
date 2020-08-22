#include <iostream>
#include <memory>

template <class T>
class Derived : T
{
public:
  void bar()
  {
    this->foo();
  }
};

class Base
{
public:
  virtual ~Base() = default;

  void foo()
  {
    std::string hello{ "Hello world\n" };
    std::cout << hello;
  }
};

int main(int argc, char** argv)
{
  Base base;
  Derived<Base> derived;
  derived.bar();
}