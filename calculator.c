// Lab2 Simple Calculator
// Curtis Shuman

# include <stdio.h>

int main() {

    int N1, N2, Operation;

if (Operation == 1){
    int Result = N1+N2;
    printf("The result of adding %d and %d is %d\n", N1, N2, Result);
}else if (Operation == 2){
    int Result = N1-N2;
    printf("The result of subtracting %d and %d is %d\n", N1, N2, Result);
    return 0;
}