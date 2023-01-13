#include <stdio.h>
void suma(double a, double b);
void resta(double a, double b);
void multiplicacion(double a, double b);
void division(double a, double b);
int main(){

    double n1, n2;

    printf("ingrese el primer número: ");
    scanf("%lf", &n1);
    printf("ingrese el segundo número: ");
    scanf("%lf", &n2);
    suma(n1,n2);
    resta(n1,n2);
    multiplicacion(n1,n2);
    division(n1,n2);

    return 0;
}

void suma(double a, double b){
    double s=a+b;
    printf("La suma es: %lf\n",s);
}
void resta(double a, double b){
    double s=a-b;
    printf("La resta es: %lf\n",s);
}
void multiplicacion(double a, double b){
    double s=a*b;
    printf("La multiplicación es: %lf\n",s);
}
void division(double a, double b){
    double s=a/b;
    printf("La división es: %lf\n",s);
}