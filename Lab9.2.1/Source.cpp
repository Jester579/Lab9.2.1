#include <stdio.h>
#include <conio.h>
#include <math.h>

#define SQR(x, y) (((x) - (y)) * ((x) - (y))) 
#define ABS(y, x) (((y) - (x)) < 0 ? -((y) - (x)) : ((y) - (x))) 
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#define MIN(a, b) ((a) < (b) ? (a) : (b)) 
#define PRINTI(w) puts("control output"); printf(#w " = %d\n", w) 
#define PRINTR(w) puts("result :"); printf(#w " = %f\n", (float)(w))

void main() {
    int x, y, z, w;
    char ch; 

    do {
        puts("Input integer values for x, y, z:");
        scanf("%d %d %d", &x, &y, &z);

        if (z == 1) {
            w = MAX(SQR(x, y), ABS(y, x));
        }
        else {          
            w = MIN(x + SQR(y, 0), z + SQR(x, 0));
        }

        PRINTI(w);

        puts("Repeat? y/n ");
        ch = getch();
    } while (ch == 'y');
}
