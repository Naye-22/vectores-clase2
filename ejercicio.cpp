//tratar de ordenar una lista de objetos, Arrays
#include<iostream>
#include<stdlib.h>
#include<time.h>

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
//llenar el vector con numeros aleatorios
void VectorAleatorio(int x[],int total)
{
    int LimiteInfe = 1;
    int limitesupe = 100;
    for (int k = 0; k< total; k++)
    {
        int numero = LimiteInfe + rand() % ((limitesupe + 1)-LimiteInfe);
        x[k] = numero;
    }
}
int main()
{
    srand(time(NULL));

    const int max = 50;
    //int x[]={10, 6, 34, 4, 2, 7, 15};
    int x[max];

    VectorAleatorio(x, max);//llenando el vector con numeros aleatorios
    cout<<endl<<"Vector original";
    InprimeVector(x,max); //imprime el vector original
    OrdenSecuencial(x, max);
    cout<<endl<<"Vctor ordenado";
    InprimeVector(x,max); // Imprime vector original

    return 0;
}