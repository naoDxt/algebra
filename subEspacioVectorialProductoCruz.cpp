#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Ai, Aj, Ak;
    double Bi, Bj, Bk;

    cout << "=== CALCULO DEL AREA DE UN TRIANGULO FORMADO POR DOS VECTORES ===\n";

    // Ingreso de datos del primer vector
    cout << "\nIngrese las componentes del vector A:\n";
    cout << "Ai: "; cin >> Ai;
    cout << "Aj: "; cin >> Aj;
    cout << "Ak: "; cin >> Ak;

    // Ingreso de datos del segundo vector
    cout << "\nIngrese las componentes del vector B:\n";
    cout << "Bi: "; cin >> Bi;
    cout << "Bj: "; cin >> Bj;
    cout << "Bk: "; cin >> Bk;

    // Cálculo del producto cruzado
    double Ci = Aj * Bk - Ak * Bj;
    double Cj = Ak * Bi - Ai * Bk;
    double Ck = Ai * Bj - Aj * Bi;

    // Cálculo de la magnitud del producto cruzado
    double magnitud = sqrt(Ci * Ci + Cj * Cj + Ck * Ck);

    // Área del triángulo (mitad del paralelogramo)
    double area = magnitud / 2.0;

    // Mostrar resultados
    cout << "\n=== RESULTADOS ===\n";
    cout << "Producto cruzado (A x B) = (" << Ci << ", " << Cj << ", " << Ck << ")\n";
    cout << "Magnitud del producto cruzado = " << magnitud << endl;
    cout << "Area del triangulo formado por los vectores A y B = " << area << " unidades²\n";

    return 0;
}