#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int potencia(int&, int); // reescrevendo pow()

int fatorial(int);

float progressao(float&, float, int);

int fibonacci(int);

int numDigitos(int);

int main()
{
    // -- Questao 1
    int iEntrada = 2;
    int iPower = 5;
    cout << potencia(iEntrada, iPower) << endl;
    
    // -- Questao 2
    int iEntrada2 = 6;
    cout << fatorial(iEntrada2) << endl;
    
    // -- Questao 3
    float iEntrada3 = 0.1;
    float fRazao = 0.1;
    int iQuantidade = 10;
    cout << progressao(iEntrada3, fRazao, iQuantidade) << endl;
    
    // -- Questao 4
    int iEntrada4 = 15;
    cout << fibonacci(iEntrada4) << endl;
    
    // -- Questao 5
    int iEntrada5 = 12345;
    cout << numDigitos(iEntrada5) << endl;
    
    return 0;
}

// ########################################## questão 1
int potencia(int& irefNumero, int iPower)
{
    int iBase = irefNumero;
    
    for (int i = 1; i < iPower; i++)
    {
        irefNumero *= iBase;
    }
    
    return irefNumero;
}

// ########################################## questão 2
int fatorial(int iValor)
{
    int iFatorial = 1;
    if (iValor >= 0)
    {
        for (int i = iValor; i > 0; i--)
        {
            iFatorial = iFatorial * i;
        }
    }
    
    return iFatorial;
}

// ########################################## questão 3
float progressao(float& frefInicio, float fRazao, int iElementos)
{
    for (int i = 0; i < iElementos - 1; i++)
    {
        frefInicio += fRazao;
    }
    
    return frefInicio;
}

// ########################################## questão 4
int fibonacci(int iIndice)
{
    int iValorAtual = 1;
    int iValorAnterior = 0;
    int iTemp = 0;
    for (int i = 2; i <= iIndice; i++)
    {
        iTemp = iValorAnterior;
        iValorAnterior = iValorAtual;
        iValorAtual += iTemp;
    }
    return iValorAtual;
}

// ########################################## questão 5
int numDigitos(int iNum)
{
    string strNumero = std::to_string(iNum);
    
    int inumDigitos = strNumero.size();
    
    return inumDigitos;
}

// Notação húngara e referência
// &atividade
