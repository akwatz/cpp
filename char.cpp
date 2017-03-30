#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
      // Declare second integer, double, and String variables.
    int ii;
    double dd;
    char c[500];
    // Read and save an integer, double, and String to your variables.
    scanf("%[^\n]s",c);
    scanf("%lf",&dd);
    scanf("%d",&ii);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+ii);
    printf("%.1lf\n",d+dd);
    printf("%s",s);
    printf("%s",c);
    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.


    return 0;
}
