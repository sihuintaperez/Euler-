#include <iostream>
#include<math.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
using namespace std;

int cuadrados(int a){
    int cont=0;
    for(int i=1;i<=a;i++ ){
        cont=cont+pow(i,2);
    }
    int aux=0;
    for(int j=1;j<=a;j++ ){
        aux=aux+j;
    }
    aux*=aux;
    int resultado;
    resultado=aux-cont;
    return resultado;

}
int main()
{
    cout<<cuadrados(100);
}
