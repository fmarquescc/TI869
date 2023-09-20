#include <stdlib.h>
#include <stdio.h>

#define PI 3.1415

#define CALC_AREA_CIRCLE(r) (PI * r * r)
#define CALC_PERI_CIRCLE(r) (PI * 2 * r)

#define CALC_AREA_SQUARE(l) (l * l)
#define CALC_PERI_SQUARE(l) (l * 4)

#define CALC_AREA_RECTANGLE(b, a) (b * a)
#define CALC_PERI_RECTANGLE(b, a) ((b + a) * 2)

#define CALC_AREA_TRIANGLE(b, a) ((b * a) / 2)
#define CALC_PERI_TRIANGLE(b, c1, c2) (b + c1 + c2)

int main()
{
    return 0;
}
