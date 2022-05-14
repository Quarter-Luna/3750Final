# 
# Makefile
# Author: Ian Moon
# Date: Mar 12, 2022
#
# COSC 3750, Homework 11, Final
#
#

CC=gcc
CFLAGS= -ggdb -Wall
RM= rm -f

.PHONY: new clean tidy

new: mmult

wyshell: mmult.c
	${CC} ${CFLAGS} mmult.c -o mmult -pthread

clean:
	${RM} *.o mmult

tidy:
	${RM} a.out core.* mmult