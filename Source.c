
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    double x = -2.235e-2;
    double y = 2.23;
    double z = 15.221;
    double fi;

    fi = exp(fabs(x - y)) * pow(fabs(x - y), x + y)
        / (atan(x) + atan(z))
        + cbrt(pow(x, 6) + pow(log(y), 2));

    printf("Результат: %.3f\n", fi);

    return 0;
}
