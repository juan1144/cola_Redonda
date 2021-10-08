/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   colaRedonda.h
 * Author: juan
 *
 * Created on 8 de octubre de 2021, 09:20
 */

#ifndef COLAREDONDA_H
#define COLAREDONDA_H
#define TAMMAX 5

//variables

typedef struct {
    int lis[TAMMAX];
    int ini, fin;
} tCola;

//funciones
tCola inicializaCola();
int estaVacia(tCola cola);
int estaLlena(tCola cola);
void push(tCola *cola, int elem);
int pop(tCola *cola);

#endif /* COLAREDONDA_H */

