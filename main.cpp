#include <iostream>
#include <math.h>

using namespace std;
void momento_ofensivo(double,double, double);

int main()
{
    double velocidad_inicial = 0,time = 0, angulo = 0;

    cout<<"ingrese la altura respectiva: "<<endl;cin>>time;
    cout<<"ingrese la velocidad inicial: "<<endl;cin>>velocidad_inicial;
    cout<<"ingrese el angulo de tiro: "<<endl;cin>>angulo;

    momento_ofensivo(time, velocidad_inicial, angulo);


    return 0;
}

void momento_ofensivo(double tiempo, double velocidad,double angul)
{
    double velocidad_y,pi = 3.1416,gravitacion = 9.81,arreglo[20],velocidad_x = 0;

    double y, x = 0,distancia_ofensivo = tiempo+20;

    int contador = 0,tiempo_x = 0;

    velocidad_y = (velocidad*sin(pi/angul))-gravitacion*tiempo;

    y = (velocidad_y*tiempo)-(1/2)*gravitacion*(tiempo*tiempo);

    cout<<"punto en y donde se encuentra la bomba enemiga: "<<y<<endl;



    while(distancia_ofensivo != 4)
    {
        velocidad_x = (velocidad*sin(pi/angul))-gravitacion*tiempo_x;
        x = (velocidad_x*tiempo)-(1/2)*gravitacion*(tiempo_x*tiempo_x);
        arreglo[contador] = x;



    }













}
