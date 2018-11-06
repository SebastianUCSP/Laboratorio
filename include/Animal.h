#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
    public:
        Animal();
        Animal(string,int);
        virtual void habla(void);
        void hacerHablar();

    protected:
        string nombre;
        int nroPatas;

};

#endif // ANIMAL_H

