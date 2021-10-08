/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 8 de octubre de 2021, 09:19
 */

#include <stdio.h>
#include <stdlib.h>
#include "colaRedonda.h"

int main(int argc, char **argv) {
    tCola cola;

    cola = inicializaCola();

    for (int i = 1; i <= 4; i++) {
        push(&cola, i);
    }

    pop(&cola);
    pop(&cola);
    push(&cola, 10);
    push(&cola, 11);

    for (int i = 1; i <= 4; i++) {
        printf("%d\n", pop(&cola));
    }

    return (EXIT_SUCCESS);
}

