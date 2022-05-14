/********************************
 * 
 * mmult.c
 * Author: Ian Moon
 * Date: May 5, 2022
 * 
 * COSC 3750-01 Homework 11 Final
 * 
 * To compute matrix multiplication
 * 
 * ******************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
    int mat1[10][10], mat2[10][10];
    int fin[10][10];
    int row1, col1, row2, col2;

    printf("Enter number of rows for matrix 1: ");
    scanf("%d", row1);

    printf("Enter number of columns for matrix 1: ");
    scanf("%d", col1);

    printf("Enter the matrix:\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d",mat1[i][j]);
        }
    }
    
    printf("Enter number of rows for matrix 1: ");
    scanf("%d", row2);

    printf("Enter number of columns for matrix 1: ");
    scanf("%d", col2);

    printf("Enter the second matrix:\n");
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d",mat2[i][j]);
        }
    }

    if(col1 != row2)
    {
        printf("Matrix could not be computed, miss matched row and column\n");
        return 0;
    }

    printf("Multiplied matrix:\n");
    for(int i = 0; i < col1; i++)
    {
        for(int j = 0; j < row2; j++)
        {
            fin[i][j] = 0;
            for(int k = 0; k < col1; k++)
            {
                fin[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i = 0; i < col1; i++)
    {
        for(int j = 0; j < row2; j++)
        {
            fprint("%d\t", fin[i][j]);
        }
        fprint('\n');
    }
    return 0;
}

/* I couldn't quite figure out the best way of incorporating the required set up
int readMatrix(FILE file)
{

}

int main(int argc, char *argv[])
{
    // argument check
    if(argc > 5 || argc < 4)
    {
        printf("Invaled number of arguments");
        return 1;
    }

    FILE *mtx1 = fopen(argv[1], "r"), // matrix 1 file
    *mtx2 = fopen(argv[2], "r"), // matrix 2 file
    *out = fopen(argv[3], "w"); // output file
    int threads;

    if(argc == 4)
    {
        threads = atoi(argv[4]);
    }

    if(threads == NULL)
    {
        threads = 3;
    }

    pthread_t tid0, tid1, tid2, tid3, tid4, tid5, tid6, tid7, tid8, tid9; 

    pthread_t * pthreads[] = {&tid0, &tid1, &tid2, &tid3, &tid4, &tid5, &tid6, &tid7, &tid8, &tid9};

    int rix1[10][10], rix2[10][10], fin[10][10];

    for(int i = 0; i < threads; i++)
    {
        if(i == 1)
        {
            pthread_create(pthreads[i],NULL, readMatrix(*mtx1), (void *) pthreads[i]);
        }
        if(i == 2)
        {
            pthread_create(pthreads[i],NULL, readMatrix(*mtx2), (void *) pthreads[i]);
        }
    }

    for(int j = 0; j < 10; j++)
    {
        for(int k = 0; k < 10; k++)
        {
            for(int l = 0; l < 10; l++)
            {
                fin[j][l] += rix1[j][k] * rix2[k][l]; 
            }
        }
    }
    
   pthread_exit(NULL);
}
*/