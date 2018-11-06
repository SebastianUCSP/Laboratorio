#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include <string>


class AnimalArray
{
    public:
        AnimalArray();
        AnimalArray(const Animal arr[],const int);
        AnimalArray();

        virtual ~AnimalArray();

        void print();
        void getSize();

        void resize();
        void remove(const int pos);
        void insert(Animal);
        void insert_pos(Animal, int pos);

    protected:

    private:
        Animal *animales;
        int size;
        void resize(int);

};

#endif // ANIMALARRAY_H
