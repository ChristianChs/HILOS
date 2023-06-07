#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void independentThread()
{
    cout<<"Empezando el hilo concurrente.\n ";
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"Saliendo del hilo concurrente.\n";
}

void threadCaller()
{
    cout<<"Empezando a llamar al hilo.\n";
    thread t(independentThread);
    t.detach();
    this_thread::sleep_for(chrono::seconds(1));
    cout<<"Saliendo de la llamada al hilo.\n";
}

int main()
{
    threadCaller();
    this_thread::sleep_for(chrono::seconds(5));
    return 0;
}
