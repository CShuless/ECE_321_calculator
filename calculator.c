// Lab2 Simple Calculator
// Curtis Shuman

# include <stdio.h>

int main() {

    int N1, N2, Operation;


printf("Enter first number: ");   // getting input
// check for integer
while (scanf("%d", &N1 ) != 1){  
    printf("Invalid Input. Please enter an integer: ");
}

printf("Enter second number: ");   // getting input
// check for integer
while (scanf("%d", &N2 ) != 1){  
    printf("Invalid Input. Please enter an integer: ");

}

printf("Enter '1' for addition, '2' for subtraction, '3' for multiplication or '4' for division: ");
while(1){
    scanf(&Operation)
    if (Operation == 1 || Operation == 2 || Operation == 3 || Operation == 4) {
        break;
    } else{
        printf("Invalid choice. Please enter '1', '2', '3' or '4'");
    }
}


if (Operation == 1){
    int Result = N1+N2;
    printf("The result of adding %d and %d is %d\n", N1, N2, Result);
}else if (Operation == 2){
    int Result = N1-N2;
    printf("The result of subtracting %d and %d is %d\n", N1, N2, Result);
}else if (Operation == 3){
    int Result = N1*N2;
    printf("The result of multiplying %d and %d is %d\n", N1, N2, Result);
}else if (Operation == 4){
    if(N2 !=0){
    float Result = N1/N2;
    printf("The result of multiplying %d and %d is %d\n", N1, N2, Result);
    } else {
        printf("division by zero is not allowed.\n")
    }
}


return 0;
}
