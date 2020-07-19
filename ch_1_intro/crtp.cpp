#include <iostream>
#include <memory>


template <class T>
class Base
{
public:
    virtual ~Base() = default;

    void foo()
    {
        T& derived = static_cast<T&>(*this);
        derived.bar();
    }

private:
/*
https://www.fluentcpp.com/2017/05/12/curiously-recurring-template-pattern/
This construction avoid undefined behaviour caused by
the following bug:

class Derived1 : public Base<Derived1>
{
    ...
};
 
class Derived2 : public Base<Derived1> // bug in this line of code
{
    ...
};
*/
    Base(){};
    friend T;
};

class Derived : public Base<Derived>
{
public:
    void bar()
    {
        std::string hello{"Hello world\n"};
        std::cout << hello;
    }
};

template <class T>
void baz(Base<T>* base)
{
    base->foo();
}

int main(int argc, char** argv)
{
    std::unique_ptr<Derived> D(new Derived());
    baz(D.get());
}