#include <iostream>
#include <cstring>
using namespace std;
int main(){
   char Origin_Name[] = "El Teletubbie Master";
   char La_Copia[30];
   strcpy(La_Copia, Origin_Name);
   cout << "Hola. Mi nombre es el " << La_Copia << endl;
    return 0;
}
