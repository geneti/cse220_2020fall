#include <stdio.h>
#define OZ_TO_G 28.3495231
int main(void) {
    float weight1, weight2, weight3, weight4;
    scanf("%f/%f/%f/%f", &weight1, &weight2, &weight3, &weight4);
    printf("Weight 1: %10.2f lbs = %10.2f Oz = %10.2f g\n", weight1, weight1 * 16, weight1 * 16 * OZ_TO_G);
    printf("Weight 2: %10.2f lbs = %10.2f Oz = %10.2f g\n", weight2, weight2 * 16, weight2 * 16 * OZ_TO_G);
    printf("Weight 3: %10.2f lbs = %10.2f Oz = %10.2f g\n", weight3, weight3 * 16, weight3 * 16 * OZ_TO_G);
    printf("Weight 4: %10.2f lbs = %10.2f Oz = %10.2f g\n", weight4, weight4 * 16, weight4 * 16 * OZ_TO_G);
    return 0;
}
