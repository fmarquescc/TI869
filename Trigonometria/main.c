#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#if defined(_WIN32)
    #include "windows.h"
#endif

#define PI 3.1415

#define CALC_AREA_CIRCLE(r) (PI * r * r)
#define CALC_PERI_CIRCLE(r) (PI * 2 * r)

#define CALC_AREA_SQUARE(l) (l * l)
#define CALC_PERI_SQUARE(l) (l * 4)

#define CALC_AREA_RECTANGLE(b, a) (b * a)
#define CALC_PERI_RECTANGLE(b, a) ((b + a) * 2)

#define CALC_AREA_TRIANGLE(b, a) ((b * a) / 2)
#define CALC_PERI_TRIANGLE(b, c1, c2) (b + c1 + c2)

void inputf(const char *message, float *out)
{
    printf(message);
    scanf("%f", out);
}

int main()
{
    #if defined(_WIN32)
        SetConsoleOutputCP(CP_UTF8);
    #endif
    float v1, v2, v3;
    char op;

    printf(">>>>>> MENU TRIGONOMETRIA <<<<<<<\n");
    printf("1 - Calcular área do circulo\n");
    printf("2 - Calcular perimetro do circulo\n");
    printf("3 - Calcular área do quadrado\n");
    printf("4 - Calcular perimetro do quadrado\n");
    printf("5 - Calcular área do rectângulo\n");
    printf("6 - Calcular perimetro do rectângulo\n");
    printf("7 - Calcular área do triângulo\n");
    printf("8 - Calcular perimetro do triângulo\n");
    printf("9 - Sair\n");

    do
    {
        printf("> ");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            inputf("Raio? ", &v1);
            printf("Área do circulo de raio %f: %f\n", v1, CALC_AREA_CIRCLE(v1));
            return 0;
        case '2':
            inputf("Raio? ", &v1);
            printf("Perimetro do circulo de raio %f: %f\n", v1, CALC_PERI_CIRCLE(v1));
            return 0;
        case '3':
            inputf("Lado? ", &v1);
            printf("Área do quadrado: %f\n",  CALC_AREA_SQUARE(v1));
            return 0;
        case '4':
            inputf("Lado? ", &v1);
            printf("Perimetro do quadrado: %f\n",  CALC_PERI_SQUARE(v1));
            return 0;
        case '5':
            inputf("Lado 1? ", &v1);
            inputf("Lado 2? ", &v2);
            printf("Área do rectângulo: %f\n", CALC_AREA_RECTANGLE(v1, v2));
            return 0;
        case '6':
            inputf("Lado 1? ", &v1);
            inputf("Lado 2? ", &v2);
            printf("Perimetro do rectângulo: %f\n", CALC_PERI_RECTANGLE(v1, v2));
            return 0;
        case '7':
            inputf("Base? ", &v1);
            inputf("Altura? ", &v2);
            printf("Área do triângulo: %f\n", CALC_AREA_TRIANGLE(v1, v2));
            return 0;
        case '8':
            inputf("Base? ", &v1);
            inputf("Altura? ", &v2);
            printf("Perimetro do triângulo: %f\n", CALC_PERI_TRIANGLE(v1, v2, sqrt(v1 * v1 + v2 * v2)));
            return 0;
        default:
            printf("Erro: escolha uma opção válida\n");
        }
    }
    while (op != '9');
    return 0;
}
