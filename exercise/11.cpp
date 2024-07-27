#include <cstdio>
#include <cmath>

int main() {
    double number;

    number = 2.5;

    // Mencetak hasil dari berbagai fungsi matematika
    printf("Floor: %f \n", floor(number));         // floor
    printf("Ceil: %f \n", ceil(number));           // ceil
    printf("Round: %f \n", round(number));         // round
    printf("Trunc: %f \n", trunc(number));         // trunc
    printf("Abs: %f \n", fabs(number));            // fabs untuk abs dari float/double
    printf("Sqrt: %f \n", sqrt(number));           // sqrt
    printf("Error Function: %f \n", erf(number));  // erf
    printf("Nearbyint: %f \n", nearbyint(number)); // nearbyint
    printf("Rint: %f \n", rint(number));           // rint
    
    return 0;
}