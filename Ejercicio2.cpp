#include <bits/stdc++.h>
using namespace std;

class Persona{
private:
    int edad;
    float estatura;
    float peso;
public:
    string nombre;
    string telefono;
    Persona(){
        edad = 0;
        estatura = 0.0;
        peso = 0.0;
        nombre = "desconocido";
        telefono = "desconocido";
    }
    Persona(int ed, float est, float pes, string nom, string tel){
        edad = ed;
        estatura = est;
        peso = pes;
        nombre = nom;
        telefono = tel;
    }
    int getEdad();
    void setEdad();
    float getEstatura();
    void setEstatura();
    float getPeso();
    void setPeso();
    void cumplirAnios();
};

int main(){

    return 0;
}