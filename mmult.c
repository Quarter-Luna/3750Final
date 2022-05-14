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

int main(int argc, char *argv[])
{
    // argument check
    if(argv >= 5 || argv < 4)
    {
        printf("Invaled number of arguments");
        return 1;
    }

    char *mtx1 = argv[0], // matrix 1
    *mtx2 = argv[1], // matrix 2
    *out = argv[2]; // output file

    if(argv == 4)
    {
        int threds = atoi(argv[3]);
    }

}