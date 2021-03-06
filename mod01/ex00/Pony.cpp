#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age, int height) :
    _name(name), _color(color), _age(age), _height(height)
{ std::cout << "Object created." << std::endl; }

Pony::~Pony() { std::cout << "Object destroyed." << std::endl; }

/* MEMBER FUNCTIONS */
void Pony::ponyOnTheStack(std::string name, std::string color, int age, int height)
{
    Pony my_pony (name, color, age, height);
    std::cout << my_pony.repr() << std::endl;
}

void Pony::ponyOnTheHeap(std::string name, std::string color, int age, int height)
{
    Pony* my_pony = new Pony (name, color, age, height);
    std::cout << my_pony->repr() << std::endl;
    delete my_pony;
}

std::string Pony::repr()
{
    std::string repr;

    repr = _name + " is a " + std::to_string(_age) + " year old pony with " + _color + " hair.\n";
    repr += "This pony is " + std::to_string(_height) + " cm tall.";
    return (repr);
}
