/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * valor de z
 */
int main(int argc, char** argv) {

float x,y,z;


scanf("%f",&x);

y=((x+5)/(2*(x+1)));

z=((pow(y,2)+x*(x-2*y))/(x*y));

printf("El valor de z es:\n%f",z);

    
    return (EXIT_SUCCESS);
}

