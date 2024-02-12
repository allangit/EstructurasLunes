#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


#include <stdlib.h>
#program XXXXX
#include <stdio.h>
#include <iostream>
using namespace std;

void running_sum(){


}

void grafica(){

    FILE *fp=NULL;
    FILE *pipe=NULL;
    char *comandos[]={"plot sin(x)"};

    cout<<"Digite la variable X::"<<endl;
    cin>>X;

    fopen("data.dat","w");

    pipe=_popen("\"C://Program Files//gnuplot//bin//gnuplot.exe\" -persitent","w");
    fprintf(pipe,"%s\n","plot sin(x)");
    fclose(pipe);

}

void menu(){




}

#endif // FUNCIONES_H_INCLUDED
