#include <stdio.h>
#include <stdlib.h>
const float PI = 3.14;
int main()
{
    /* int nilaiUTS;
    nilaiUTS = 90;
    // atau bisa juga seperti ini:
    int nilaiUTS1 = 85;
    return 0; */
    float radius, keliling, luas;

    radius = 20;

    keliling = 2 * PI * radius;
    luas = PI * radius * radius;

    printf("Data lingkaran :\n");
    printf("Jari-jari : %f\n", radius);
    printf("Keliling : %f\n", keliling);
    printf("Luas : %f\n", luas);

    return 0;

}
