#include <bits/stdc++.h>
using namespace std;

class Animal{
private:
    string especie;
public:
    int edad;
    string nombre;
    string sonido;
    Animal(){
        especie = "desconocido";
        edad = 0;
        nombre = "desconocido";
        sonido = "desconocido";
    }
    Animal(string esp, int ed, string nom, string son){
        especie = esp;
        edad = ed;
        nombre = nom;
        sonido = son;
    }
    string getEspecie();
    void setEspecie(string e);
    void presentarse();
};

    string Animal::getEspecie(){
        return especie;
    }
    void Animal::setEspecie(string e){
        especie = e;
    }
    void Animal::presentarse(){
        cout << "Hola soy un " << getEspecie() << " de " << edad << " años y me llamo " << nombre << ". Hago " << sonido << endl;
    }

int main(){
    string e;
    Animal animal1, animal2("Gato", 3, "Tigre", "Miau");
    cout << "Ingrese especie, edad, nombre y sonido del animal" << endl;
    cin >> e >> animal1.edad >> animal1.nombre >> animal1.sonido;
    animal1.setEspecie(e);
    vector<Animal> animales = {animal1, animal2};
    for(int i = 0; i < animales.size(); i++){
        animales[i].presentarse();
    }
    return 0;
}