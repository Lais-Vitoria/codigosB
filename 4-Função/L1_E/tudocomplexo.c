#include <stdio.h>
#include <locale.h>

typedef struct 
{
    float r;
    float i;
}complex;

complex NumeroComplexo( float a, float b)
{
    complex c;
    c.r = a;
    c.i = b;

    return c;
}

void PrintNumero(complex c)
 {
    if (c.r != 0 && c.i > 0)
    {
        printf("%.2f + %.2fi\n", c.r, c.i);
    } 
    else if (c.r != 0 && c.i < 0)
    {
        printf("%.2f - %.2fi\n", c.r, -c.i);
    }
    else if (c.i == 0) 
    {  
        printf("%.2f\n", c.r);
    } 
    else if (c.r == 0 && c.i != 0) 
    {
        printf("%.2fi\n", c.i);
    }
}



complex soma( complex x, complex y)
{
    complex soma;
    soma.r = x.r + y.r;
    soma.i = x.i + y.i; 

    return soma;
}


complex diferenca( complex x, complex y)
{
    complex dif;

    dif.r = x.r - y.r;
    dif.i = x.i - y.i;

    return dif;
}

complex produto( complex x, complex y)
{
    complex prod;

    prod.r = (x.r * y.i) + (x.i * y.i);
    prod.i = (x.r * y.i) + (y.r * x.i);

    return prod;
}

complex divisao(complex x, complex y)
{
    complex div;

    float denominador = y.r * y.r + y.i * y.i;
    
    if (denominador == 0)
    {
        printf("Não e possivel dividir por zero!\n");
        return div;
    }
    
    div.r = (x.r * y.r + x.i * y.i)/ denominador;
    div.i = (x.i * y.r - x.r * y.i)/ denominador;

    return div;
}


// funções recebendo por parametro um numero complexo    X e um valor real A.

complex soma2(complex x, float a)
{
    complex soma;

    soma.r = x.r + a;
    soma.i = x.i;

    return soma;
}

complex diferenca2(complex x, float a)
{
    complex dif;

    dif.r = x.r - a;
    dif.i = x.i;

    return dif;
}

complex produto2(complex x, float a)
{
    complex prod;

    prod.r = x.r * a;
    prod.i = x.i * a;

    return prod;
}

complex divisao2 (complex x, float a)
{
    complex div;

    div.r = x.r / a;
    div.i = x.i / a;

    return div;
}

// funções recebendo por parametro um valor real A e um numero complexo X.

complex soma3(float a, complex x)
{
    complex s;

    s.r = a + x.r;
    s.i = x.i;

    return s;
}

complex diferenca3( float a, complex x)
{
    complex dif;

    dif.r = a - x.r;
    dif.i = x.i;

    return dif;
}

complex produto3(float a, complex x)
{
    complex prod;

    prod.r = a * x.r;
    prod.i = a *x.i;

    return prod;
}

complex divisao3(float a, complex x)
{
    complex div;

    float denominador = x.r * x.r + x.i * x.i;

    if (denominador == 0)
    {
        printf("Não e possivel dividir por zero\n");

        return div;
    }
    

    div.r = (a * x.r) / denominador;
    div.i = -(a * x.i) / denominador;

    return div;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Real, Imaginaria, A;
    float r, i;
    complex X, Y;

    printf("Digite a parte real X: ");
    scanf("%f", &Real);

    printf("\nDigite a parte imaginaria X: ");
    scanf("%f", &Imaginaria);

    printf("\nDigite a parte real Y: ");
    scanf("%f", &r);

    printf("\nDigite outra parte imaginaria Y: ");
    scanf("%f", &i);

    printf("\nDigite um número real: ");
    scanf("%f", &A);


    X = NumeroComplexo(Real, Imaginaria);
    Y = NumeroComplexo(r, i);

    printf("\nA soma de dos números complexos X e y: ");
    PrintNumero(soma(X, Y));

    printf("A Diferençã dos números complexos X e Y: ");
    PrintNumero(diferenca(X, Y));

    printf("O produto dos Numeros complexos X e Y: ");
    PrintNumero(produto(X, Y));

    printf("A Divisão dos números complexos X e Y: ");
    PrintNumero(divisao(X, Y));

// parte 2

    printf("A soma de X e A: ");
    PrintNumero(soma2(X, A));

    printf("A Diferençã de X e A: ");
    PrintNumero(diferenca2(X, A));

    printf("O produto de X e A: ");
    PrintNumero(produto2(X, A));

    printf("A Divisão de X e A: ");
    PrintNumero(divisao2(X, A));

// parte 3

    printf("A soma de A e X: ");
    PrintNumero(soma3(A, X));

    printf("A Diferençã de A e X: ");
    PrintNumero(diferenca3(A, X));

    printf("O produto de A e X: ");
    PrintNumero(produto3(A, X));

    printf("A Divisão de A e X: ");
    PrintNumero(divisao3(A, X));

    return 0;
}   