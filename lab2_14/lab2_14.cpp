#include <stdio.h>
#include <math.h>

struct Solution {
    int is_valid; 
    double root;  
};


struct Solution solveLinearEquation(double a, double b) {
    struct Solution result;

    
    if (a == 0) {
        result.is_valid = 0;
        result.root = 0;
    }
    else {
        result.is_valid = 1; 
        result.root = -b / a;
    }

    return result;
}

int main() {
    double a, b;

    
    a = 2;
    b = -4;

    
    struct Solution solution = solveLinearEquation(a, b);

    
    if (solution.is_valid) {
        printf("The solution is: x = %.2f\n", solution.root);
    }
    else {
        printf("Invalid equation (not a linear equation).\n");
    }

    return 0;
}
