#include "Animal.h"

Animal::Animal()
{
   nombre = "sin nombre"
   nroPatas = 0;
}

Animal::Animal(string n, int p)
{
   nombre = n;
   nroPatas = p;
}

virtual void Animal::habla(void)
{

}

void Animal::hacerHablar()
{
   this->habla();
}


Animal::~Animal()
{
    //dtor
}
