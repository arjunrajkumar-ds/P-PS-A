#include <stdio.h>
#include <limits.h>

int
main (int argc, char *argv[]) {
    printf("Some limit values of C, w.r.t integer overflow, etc");
    printf("\n\n");
    printf("Integer min/max: %d/%d", INT_MAX, INT_MIN);
    printf("\nFloat min/max: %.3f/%.3f", __FLT_MIN__, __FLT_MAX__);
    printf("\nDouble min/max: %.3f/%.3f", __DBL_MIN__, __DBL_MAX__);
    
    return 0;
    }