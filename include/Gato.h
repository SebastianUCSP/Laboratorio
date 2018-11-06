#ifndef GATO_H
#define GATO_H
#include <string>

class Gato::public Animal
{
    public:
        Gato(string, int);
        void setName();
        void setNro();
        void habla(void){
           cout << "miau" << endl;
        }
        void hacerMaullar(){
            this->habla();

    private:
        string name;
        int nro;
        string color;
};

#endif // GATO_H
