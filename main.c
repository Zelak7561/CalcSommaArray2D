#include <stdio.h>

void read_array(int, int, int [0][0]);
void calc_sum_procedura(int , int , int [0][0] , int *);
int calc_sum_funzione(int , int , int [0][0]);

int main(void) {

    int cols , rows;
    int sum = 0;

    printf("Enter number of columns: \n");
    scanf("%d", &cols);
    printf("Enter number of rows: \n");
    scanf("%d", &rows);

    int a[cols][rows];

    printf("\n");
    read_array(cols, rows, a);
    printf("\n");
    calc_sum_procedura(cols, rows, a, &sum);
    printf("The sum is (procedura): %d\n", sum);
    printf("\n");
    printf("The sum is (funzione): %d\n" , calc_sum_funzione(cols, rows, a));



    return 0;
}

void read_array(int rows, int columns, int a[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Insert element {a[%d][%d]} : \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void calc_sum_procedura(int cols , int rows , int a[rows][cols] , int *sum) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            *sum = *sum + a[i][j];
        }
    }
}

int calc_sum_funzione(int cols , int rows , int a[rows][cols]) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

