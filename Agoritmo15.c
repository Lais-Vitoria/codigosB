#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");

    float AnguloEmGraus, Radiano, Pi = 3.14159;
    
    // Solicita ao usu�rio para digitar um �ngulo em graus
    printf("\nDigite o �ngulo em graus: ");
    scanf("%f", &AnguloEmGraus);
    
    //Calcula o �ngulo em graus para radiano
    Radiano = (AnguloEmGraus * Pi) / 180;
    
    printf("\nRadiano: %f", Radiano);

    printf("\nSeno: %f", sin(Radiano));
    printf("\nCosseno: %f", cos(Radiano));
    printf("\nTangente: %f", tan(Radiano));
    printf("\nSecante: %f", 1 / cos(Radiano));
    printf("\nCossecante: %f", 1 / sin(Radiano));
    printf("\nCotangente: %f", 1 / tan(Radiano));
    
}
