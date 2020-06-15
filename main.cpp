//-- Crea un arreglo de n puntos. El array es dinamico
//-- El array guarda en cada casillero un objeto de la clase CPunto
//-- Dato de Entrada: n (unsigned int)
//-- Dato de Salida : solo lista los puntos

#include "CPunto.h"

int main()
{
  CPunto *pArreglodePuntos = nullptr;
  tentero n;

  cout << "Numero de puntos :  ";
  cin >>n;
  pArreglodePuntos = new CPunto[n];

  tnum x, y;
  //-- ingreso de datos
  for(tentero i=0; i<n; i++)
  {
    cout << "\nPunto " << i << "\n";
    cout << " x : "; cin >> x;
    cout << " y : "; cin >> y;
   pArreglodePuntos[i].setx(x);
   pArreglodePuntos[i].sety(y);
  }

  //---se imprimen los puntos
  cout <<"\nSe imprimen los puntos \n";
  for(tentero i=0; i<n; i++)
  {
    cout << "Punto " << i <<"\n";
    cout << pArreglodePuntos[i].getx() << " , " <<  pArreglodePuntos[i].gety() << "\n";
  }

  delete []pArreglodePuntos;
  pArreglodePuntos= nullptr;
  return 0;
}

/*ejercicio 1
 * Modifique el programa para que halle el perimetro de la figura formada por los n puntos.

 ejercicio 2
 Realice el mismo programa pero esta vez utilizando un "vector" de objetos de la clase  CPunto
 */
