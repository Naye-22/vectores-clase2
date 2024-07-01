//Operador size_of
#include<iostream>

using namespace std;

//Ordena el vector usando el algoritmo  secuencial 
void OrdenSecuencial(int x[], int total)
{
    for (int k =0;k < total; k++)
    {
        for (int j= k + 1; j < total; j++)
        {
            if(x[k]> x[j])
            {
                //Intercambiar los valores
                int aux = x[k];
                x[k]= x[j];
                x[j] = aux;

            }
        }
    }
}
void InprimeVector(int x[], int total)
{
    for (int k = 0; k< total; k++)
        cout<<endl<<x[k];
}

int main()
{
    //const int max = 7;
    int x[]={10, 6, 34, 4, 2, 7, 15, 1, 100, 56, 33};
    cout<<endl<<"tamaño del vector "<<sizeof(x);
    cout<<endl<<"Tamaño de un estero "<<sizeof(int);
    int max = sizeof(x) / sizeof(int);

    cout<<endl<<"Vector original";
    InprimeVector(x,max); //imprime el vector original
    OrdenSecuencial(x, max);
    cout<<endl<<"Vctor ordenado";
    InprimeVector(x,max); // Imprime vector original

    return 0;
}