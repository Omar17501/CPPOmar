
//Parcial C++ 
//Nombre: Omar Alberto Gutiérrez      Codigo: 202561224    Grupo: 50        Fecha: 18/10/2025

SECCION A:

// 1)   (B)    int x = 10;
// 2)   (C)    3.5 3.5
// 3)   (B)    0 1 1
// 4)   (C)    Entra al else porque el valor es 0 tras la asignación
// 5)   (B)    Ejecuta al menos una vez
// 6)   (C)    cin >> a >> b;
// 7)   (A)    11
// 8)   (B)    void f(int& n);
// 9)   (B)    Salta a la siguiente iteración
// 10)  (A)    (3 == 3) && !(2 > 5)


SECCION B:
// 1)
// int a=5, b=2;
// std::cout << a + b*3 << std::endl;
// Respuesta: 11

// 2)
// int n=0;
while (n<3) {
 std::cout << n << " ";
 n++;
}
// Respuesta: 0 1 2

// 3)
int x=10;
if (x%2==0) std::cout << "par";
else std::cout << "impar";
// Respuesta: par

// 4)
int i=3;
do {
 std::cout << i--;
} while (i>0);
// Respuesta: 321

// 5)
int a=1;
int b = (a++ > 1) ? 100 : 200;
std::cout << a << " " << b;
// Respuesta: 2 200

SECCION C:

// Programa solo las funciones pedidas. Puedes probar mentalmente con casos de ejemplo.


// C1) Firma: int max3(int a, int b, int c);
 // Devuelve el mayor de tres enteros usando if/else.

int max3(int num1,int num2, int num3){
    int masGrande;
    if (num1 >= num2 && num1 >= num3)
        masGrande =num1;
    else if(num2>= num1 && num2 >=num3)
        masGrande = num2;
    else
        masGrande = num3;
    return masGrande;
}


// C2) Firma: int sumaRango(int a, int b);
 // Devuelve la suma de todos los enteros en [a, b] (se asume a <= b) usando un bucle.

int sumaRango(int desde,int hasta){
    int suma =0;
    for (int i = desde; i <= hasta; i++){
        suma = suma+ i;
    }
    return suma;
}



// C3) Firma: bool contieneDigito(int n, int d);
 // Devuelve true si n (no negativo) contiene el dígito d (0–9). Usa operadores aritméticos.

bool contieneDigito(int numero, int digito) {
    while (numero > 0){
        int ultimo =numero % 10;   
        if (ultimo ==digito)
            return true;
        numero= numero/10;       
    }
    return(digito ==0); 
}


// C4) Firma: void tablaMultiplicar(int n);
 // Imprime la tabla de n del 1 al 10 con el formato exacto: n x i = resultado (un renglón por i).

void tablaMultiplicar(int n){
    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
}
