/* Transfers age in years to minutes */
#include <stdio.h>
int main(void) {
int years;
printf("Enter your age in years:\n");
scanf("%d", &years);
printf("\"%d\" years is \"%d\" minutes\n", years, years * 365 * 24 * 60);
return 0;
}
