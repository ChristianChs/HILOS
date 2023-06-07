#include <iostream>
#include <thread>
#include <string>

using namespace std;

void mensaje(string s)
{
    cout<<"Esta funcion thread ";
    cout<<"Recibe como mensaje : "<< s << "\n";
}

int main()
{
    string m = "Hola a todos";
    thread t(mensaje,m);
    cout<<"El mensaje principal para thread es = " << m << "\n";
    t.join();//espera a que el hilo concluya antes de ejecutar el instanciado
    return 0;
}
