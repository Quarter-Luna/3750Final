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

    int rix1[10][10], rix2[10][10];

    for(int i = 0; i < threads; i++)
    {
        if(i == 1)
        {
            pthread_create(pthreads[i],NULL, readMatrix(*mtx1), (void *) pthreads[i]);
        }
    }
}