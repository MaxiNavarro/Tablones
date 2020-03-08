#include <iostream>

using namespace std;

int solution (int [], int [], int , int [], int);

int main()
{
    int numTab;

    cout << "Ingrese el numero de tablones (entero entre [1, 30000]: ";
    cin >> numTab;
    cout << "\n";

    int inicioTablon[numTab];
    int finalTablon[numTab];
    int n1, n2, m;
    int i = 0;
    int j = 0;

    while(i < numTab){

       cout << "Ingrese comienzo de tablon " << i+1 << " (entero entre [1, 60000]: ";
       cin >> n1;
       cout << "\n";

       cout << "Ingrese final de tablon " << i+1 << " (numero mayor o igual al anterior): ";
       cin >> n2;
       cout << "\n";

       inicioTablon[i] = n1;
       finalTablon[i] = n2;

       i++;
    }

    int numClavos;

    cout << "\nIngrese el numero de clavos (entero entre [1, 30000]: ";
    cin >> numClavos;
    cout << "\n";

    int clavos[numClavos];

    while(j < numClavos){

       cout << "Ingrese posicion donde se puede martillar el clavo " << j+1 << " (entero entre [1, 60000]: ";
       cin >> m;
       cout << "\n";

       clavos[j] = m;

       j++;
    }

    int cantidad = solution (inicioTablon, finalTablon, numTab, clavos, numClavos);

    cout << "\nEL NUMERO MINIMO DE CLAVOS QUE DEBEN UTILIZARSE ES: " << cantidad << "\n\n";
}

int solution (int A[], int B[], int N, int C[], int M){

   int cont = 0;
   int k;

   for(k=0; k<N; k++){

      if(A[k] <= C[k] || B[k] >= C[k]){
         cont++;
      }else{
          cont = -1;
       }

   }
   return cont;
}
