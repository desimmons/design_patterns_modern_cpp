# Chapter 1

This chapter covers three core introductory concepts within modern C++ design patters:
1. Continiously recuring template pattern.
2. Mixin Inheritance.
3. SOLID design principles.

## Continuously recuring template pattern

The best reading material I have found for the continuously recuring template pattern (CRTP) is [this](https://www.fluentcpp.com/2017/05/16/what-the-crtp-brings-to-code/#:~:text=The%20purpose%20is%20to%20use,the%20situation%20is%20radically%20different.&text=Rather%2C%20it%20is%20the%20other,such%20as%20getValue%20and%20setValue%20).). At it's core, CRTP provides a mechanism for compile time accessing of methods implemented within a derived class, from the corresponding base class. The previous link provides a usecase for such functionality. Typically, the programmer has some core functionality that he wants to be accessible to a set of classes. CRTP provides a mechanism for achieving this. See `crtp.cpp` for an example implementation.

## Mixin Inheritance

A good explanation of mixin inheritance can be found [here](https://www.fluentcpp.com/2017/12/12/mixin-classes-yang-crtp/). Mixin inheritance achieves a very similar effect to CRTP. Whereas CRTP allows for core functionality to be to be inherited via inheritance from a base class, mixin inheritance allows generic functionality to be wrapped around your type. See `mixin.cpp` for an example of mixin inheritance.

## SOLID

From [Wikipedia](https://en.wikipedia.org/wiki/SOLID), SOLID is a mnemonic acronym for five design principles intended to make software designs more understandable, flexible and maintainable. These principles are:

![SOLID](https://i.pinimg.com/originals/8a/53/36/8a53363bd595a8af11822020a9342b02.jpg)
