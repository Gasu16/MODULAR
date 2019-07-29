/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mob
 *
 * Created on 29 luglio 2019, 17.13
 */

#include "main.h" // Comprende addizione.h e sottrazione.h


int main(int argc, char** argv) {
    printmain(); // Definita in main.h e implementata in main.c
    addizione(6, 5); // Implementata in addizione.c e definita in addizione.h
    sottrazione(6, 5); // Implementata in sottrazione.c e definita in sottrazione.h
    return (EXIT_SUCCESS);
}

void printmain(void) {
    printf("\n\nMAIN\n\n");
}