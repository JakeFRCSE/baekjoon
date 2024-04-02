#include<stdio.h>
#include<stdlib.h>
#define max 6561

//void next_step(int, char*[], int, int);
//void space(int, char**, int, int);

void space(int m, int n, int row, int col , char mat[][m]) {
        mat[row + 0][col + 0] = ' ';
        mat[row + 0][col + 1] = ' ';
        mat[row + 0][col + 2] = ' ';
        mat[row + 1][col + 0] = ' ';
        mat[row + 1][col + 1] = ' ';
        mat[row + 1][col + 2] = ' ';
        mat[row + 2][col + 0] = ' ';
        mat[row + 2][col + 1] = ' ';
        mat[row + 2][col + 2] = ' ';
        /*for (int k = 0; k < 27; k++) {
                    for (int j = 0; j < 27; j++) {
                         printf("%c", *(*(mat + k) + j));
                    }
                    printf("\n");
                }
                printf("\n");*/
}

void next_step(int m, int n, int row, int col, char mat[][m]) {


    if (n == 3) {
        /*for (int k = row; k < row + 3; k++) {
            for (int j = col; j < col + 3; j++) {
                mat[k][j] = '*';
                printf("k: %d, j: %d\n", k, j);

            }
        }*/

        mat[row + 0][col + 0] = '*';
        mat[row + 0][col + 1] = '*';
        mat[row + 0][col + 2] = '*';
        mat[row + 1][col + 0] = '*';//same address
        mat[row + 1][col + 1] = ' ';
        mat[row + 1][col + 2] = '*';
        mat[row + 2][col + 0] = '*';
        mat[row + 2][col + 1] = '*';
        mat[row + 2][col + 2] = '*';
        //mat[row + 0][col + 3] = ' ';//same address
                 /*for (int k = 0; k < 27; k++) {
                    for (int j = 0; j < 27; j++) {
                         printf("%c", *(*(mat + k) + j));
                    }
                    printf("\n");
                }
                printf("\n");*/
    }
    else if (n > 3) {
        int next_n = n / 3;
        next_step(m, next_n, row + next_n * 0, col + next_n * 0, mat);
        next_step(m, next_n, row + next_n * 0, col + next_n * 1, mat);
        next_step(m, next_n, row + next_n * 0, col + next_n * 2, mat);
        next_step(m, next_n, row + next_n * 1, col + next_n * 0, mat);
        //space(m, next_n, row + next_n * 1, col + next_n * 1, mat);
        next_step(m, next_n, row + next_n * 1, col + next_n * 2, mat);
        next_step(m, next_n, row + next_n * 2, col + next_n * 0, mat);
        next_step(m, next_n, row + next_n * 2, col + next_n * 1, mat);
        next_step(m, next_n, row + next_n * 2, col + next_n * 2, mat);
    }
}





int main() {
    int n;
    scanf("%d", &n);
/*    int i = 1;
    while (n / 3 != 1) {
        n /= 3;
        i++;
    }

    char **mat;
    mat = (char**)malloc(sizeof(char*) * n);
    for (int j = 0; j < n; j++) {
        *(mat + j) = (char*)malloc(sizeof(char) * n);
    }
*/
    char mat[n][n];
   for (int k = 0; k < n; k++) {
        for (int j = 0; j < n; j++) {
            mat[k][j] = ' ';
        }
    }
    next_step(n, n, 0, 0, mat);
    for (int k = 0; k < n; k++) {
        for (int j = 0; j < n; j++) {
             printf("%c", mat[k][j]);
        }
        printf("\n");
    }

}



/*
void space((int n, char **mat, int row, int col) {
        for (int k = row; k < row + n; k++) {
            for (int j = col; j < col + n; j++) {
                *(*(mat + k) + j) = ' ';
            }
        }
}
*/
