#include "AnimalArray.h"

AnimalArray::AnimalArray()
{
    this->size = 0;
    this->animales = new Animal[size];
}

AnimalArray::AnimalArray(const Animal arr[],const int x)
{
    this->size = x;
    this->animales = new Animal[size];
    for(int i = 0; i < size; i++){
        animales[i] = arr[i]
    }
}

/*AnimalArray::AnimalArray()
{
    this->size =
}
*/
AnimalArray::~AnimalArray()
{
    delete[];
}

void AnimalArray::insert()
{

}

void AnimalArray::insert_pos()
{

}

void AnimalArray::remove()
{
    for(int i )
}

void AnimalArray::resize()
{

}
