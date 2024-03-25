#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int iPotencia(int, int);

int main()
{
    cout << iPotencia(6, 3);
    return 0;
}

int iPotencia(int numero, int power)
{
    for (int i = 1; i < power; i++)
    {
        numero *= numero;
    }
    
    return numero;
}