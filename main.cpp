#include <iostream>
#include <math.h>

using namespace std;
void momento_ofensivo(double,double, double,double);


int main()
{

    for(int i = 0; i<3; i++)
    {
        double velocidad_inicial = 0,time = 0, angulo = 0,distancia = 0;
        cout<<"prueba numero: "<<i<<endl;

        cout<<"\ningrese la tiempo respectivo: "<<endl;cin>>time;
        cout<<"ingrese la velocidad inicial: "<<endl;cin>>velocidad_inicial;
        cout<<"ingrese el angulo de tiro: "<<endl;cin>>angulo;
        cout<<"ingrese la distancia con la cual se separan los cañones: "<<endl;cin>>distancia;

        momento_ofensivo(time, velocidad_inicial, angulo,distancia);
    }



    return 0;
}

void momento_ofensivo(double tiempo, double velocidad,double angul,double distancia_ofensivo)
{
    double velocidad_y,pi = 3.1416,gravitacion = 9.81,arreglo[20],velocidad_x = 0;

    double y, x = 0;

    int contador = 0,tiempo_x = 20;

    velocidad_y = (velocidad*sin(pi/angul))-gravitacion*tiempo;

    y = (velocidad_y*tiempo)-(1/2)*gravitacion*(tiempo*tiempo);

    cout<<"punto en y donde se encuentra la bomba enemiga: "<<y<<endl;



    while(distancia_ofensivo != 0)
    {
        velocidad_x = (velocidad*sin(pi/angul))-gravitacion*tiempo_x;
        x = (velocidad_x*tiempo)-(1/2)*gravitacion*(tiempo_x*tiempo_x);
        arreglo[contador] = x;

        if(*(arreglo+contador) == y)
        {
            cout<<"la bomba explotara en el timepo: "<<20-distancia_ofensivo<<" con una altura de: "<<x-(pi*(0.025*0.025))<<endl;
            break;
        }

        tiempo_x--;
        distancia_ofensivo--;
        contador++;
    }

}
