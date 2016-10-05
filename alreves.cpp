#include <fstream>
#include <iostream>
using namespace std;
//ayy
int main(int argc, char* argv[]){
  fstream f;
  char c;
  char* cadena;
  int longitud = 0;
  f.open(argv[1]);

  while(f){
    f.get(c);
    char* aux;
    longitud++;
    aux = new char [longitud];
    aux[0] = c;
    if(longitud > 1){
      for (int i = 1; i < longitud; i++){
        aux[i] = cadena[i-1];
      }
      delete [] cadena;
    }

    cadena = aux;
  }

  cout << cadena;

  f.close();
}
