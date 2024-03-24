#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    
    setlocale(LC_ALL,"Portuguese");

    float AnguloEmGraus, Radiano, Pi = 3.14159;
    
    // Solicita ao usuário para digitar um ângulo em graus
    printf("\nDigite o ângulo em graus: ");
    scanf("%f", &AnguloEmGraus);
    
    //Calcula o ângulo em graus para radiano
    Radiano = (AnguloEmGraus * Pi) / 180;
    
    printf("\nRadiano: %f", Radiano);

    printf("\nSeno: %f", sin(Radiano));
    printf("\nCosseno: %f", cos(Radiano));
    printf("\nTangente: %f", tan(Radiano));
    printf("\nSecante: %f", 1 / cos(Radiano));
    printf("\nCossecante: %f", 1 / sin(Radiano));
    printf("\nCotangente: %f", 1 / tan(Radiano));
    
}
