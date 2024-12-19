#include <iostream>
using namespace std;
void copiarCadena(char* destino, const char* origen) {
while (*origen) {
*destino = *origen;
destino++;
origen++;
}
*destino = '\0';
}
int main() {
char str1[100], str2[100];
cout << "Ingrese una cadena: ";
cin.getline(str1, 100);
copiarCadena(str2, str1);
cout << "La cadena copiada es: " << str2 << endl;
return 0;
}
