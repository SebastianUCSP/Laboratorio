#ifndef LORO_H
#define LORO_H
#include <string>

class Loro::public Animal
{
    public:
        Loro(string, int);
        void setName();
        void setNro();
        void habla(void){
           cout << "hola" << endl;
        }
        void hacerPiar(){
            this->habla();

    private:
        string name;
        int nro;
        string color;

};
#endif // LORO_H
