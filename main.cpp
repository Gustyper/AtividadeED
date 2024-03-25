#include <iostream>
#include <math.h> 

using std::cin;
using std::cout;
using std::endl;
using std::string;

int iPotencia(int&, int);

int main()
{
    int x = 2;
    cout << iPotencia(x, 5);
    return 0;
}

int iPotencia(int& numero, int power)
{
    int resultado = numero;
    
    for (int i = 1; i < power; i++)
    {
        resultado *= numero;
    }
    
    return resultado;
}

// Notação húngara e referência
// &atividade
