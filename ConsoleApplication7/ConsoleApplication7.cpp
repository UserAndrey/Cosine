#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    double result;
    double PI_2 = asin(1), threePI_4;
    float i;
    FILE* fp;
    const double PI = 3.141592653589793;
    threePI_4 = 3 * PI / 4;
    if ((fp = fopen("cos.doc", "w+")) == NULL) {
        printf("Is impossible to open file.\n");
        exit(1);
    }
    /* printf("Input angle:",i);
     scanf("%d",i);   */
    for (i = 0; i <= 10; i = i + 0.01)
    {
        result = cos(PI * i);
        printf("The cosine of PI * %f is %f \n", i, result);
        fprintf(fp, "cos(PI*%f)=%f;\n", i, result);
    }
    _getch();
    return 0;
}

