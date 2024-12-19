# Copia de una Cadena de Caracteres

Este programa en C++ toma una cadena de texto ingresada por el usuario, la copia a otra cadena y luego muestra la cadena copiada en pantalla. Utiliza una función personalizada para realizar la copia de una cadena.

## Propósito del Código

El objetivo del programa es ilustrar cómo copiar una cadena de caracteres de un arreglo a otro en C++, utilizando punteros para manipular las direcciones de memoria de los elementos de las cadenas. La copia se realiza carácter por carácter hasta llegar al final de la cadena original.

## ¿Qué incluye el código?

1. **Función `copiarCadena`**
   - La función `copiarCadena` toma dos argumentos:
     - `destino`: un puntero a la cadena en la que se copiarán los caracteres.
     - `origen`: un puntero a la cadena que se va a copiar.
   - La función recorre la cadena de caracteres `origen` y copia cada carácter en `destino`. Al final, agrega el carácter nulo `'\0'` para indicar el final de la cadena.
     ```cpp
     void copiarCadena(char* destino, const char* origen) {
         while (*origen) {
             *destino = *origen;
             destino++;
             origen++;
         }
         *destino = '\0'; // Añadir el carácter nulo al final de la cadena destino
     }
     ```

2. **Entrada de Datos**
   - El programa solicita al usuario ingresar una cadena de texto mediante `cin.getline()`, lo que permite que el usuario ingrese una línea completa (con espacios).
     ```cpp
     cout << "Ingrese una cadena: ";
     cin.getline(str1, 100);
     ```

3. **Copia de la Cadena**
   - Después de que el usuario ingrese la cadena, la función `copiarCadena` es llamada para copiar la cadena `str1` a `str2`.
     ```cpp
     copiarCadena(str2, str1);
     ```

4. **Mostrar el Resultado**
   - Una vez que la cadena ha sido copiada, el programa muestra la cadena copiada en pantalla:
     ```cpp
     cout << "La cadena copiada es: " << str2 << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ copiarCadenaUsandoPunteros.cpp -o copiarCadenaUsandoPunteros
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./copiarCadenaUsandoPunteros
     ```

3. **Entrada de Datos**
   - El programa te pedirá que ingreses una cadena. Por ejemplo:
     ```plaintext
     Ingrese una cadena: Hola Mundo
     ```

4. **Resultado**
   - El programa mostrará la cadena copiada. En el caso del ejemplo anterior, el resultado será:
     ```plaintext
     La cadena copiada es: Hola Mundo
     ```

## Características Técnicas

- **Uso de punteros**: La función `copiarCadena` utiliza punteros para acceder y manipular las direcciones de memoria de las cadenas de caracteres. Esto permite realizar la copia carácter por carácter.
- **Cadena terminada en `'\0'`**: Al final de la función `copiarCadena`, se agrega un carácter nulo (`'\0'`) para asegurarse de que la cadena copiada termine correctamente.

## Limitaciones

- El tamaño máximo de las cadenas está limitado a 100 caracteres debido a la declaración de los arreglos `str1` y `str2`:
  ```cpp
  char str1[100], str2[100];
