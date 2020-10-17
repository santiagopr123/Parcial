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
    double velocidad_y,pi = 3.1416,gravitacion = 9.81;

    double y;

    velocidad_y = (velocidad*sin(pi/angul))-gravitacion*tiempo;

    y = (velocidad_y*tiempo)-(1/2)*gravitacion*(tiempo*tiempo);

    cout<<velocidad_y<<endl;
    cout<<y;













}
