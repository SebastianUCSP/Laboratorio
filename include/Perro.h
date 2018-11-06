#ifndef PERRO_H
#define PERRO_H
#include <string>


class Perro::public Animal
{
    public:
        Perro(string, int);
        void setName(string);
        void setNro(int);
        void habla(void){
            cout << "guau" << endl;
        }
        void hacerLadrar(){
            this->habla();
        }


    private:
        string name;
        int nro;
        string color;

};

#endif // PERRO_H
