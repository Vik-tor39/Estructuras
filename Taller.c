#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int edad=0;
    int edades[5];
    char nombres[5][50];
    char direc[5][50];
    char carrera[5][50];
    int prom[5];
    int promedio=0;
    for (int i=0; i<5; i++){
        printf("Introduce el nombre del alumno:");
            gets(nombres);
        fflush(stdin);
    }
    for (int i=0; i<5; i++){
        printf("Introduce la direccion del alumno:");
            gets(direc);
        fflush(stdin);
    }
    for (int i=0; i<5; i++){
        printf("Introduce la carrera del alumno:");
            gets(carrera);
        fflush(stdin);
    }
    for (int i=0; i<5; i++){
        printf("Introduce la edad del alumno");
        scanf("%d",edad);
        edades[i]=edad;
        fflush(stdin);
    }
    for (int i=0; i<5; i++){
        printf("Introduce el promedio del alumno");
        scanf("%d",promedio);
        prom[i]=promedio;
        fflush(stdin);
    }
    struct alumnos{
        char Nom[50];
        char Dir[50];
        char Car[50];
        int Eda[5];
        float Pro[5];
    } a1 = {nombres[0],direc[0],carrera[0],edades[0],prom[0]}
    , a2 = {nombres[1],direc[1],carrera[1],edades[1],prom[1]}
    , a3 ={nombres[2],direc[2],carrera[2],edades[2],prom[2]}
    , a4 ={nombres[3],direc[3],carrera[3],edades[3],prom[3]}
    , a5 ={nombres[4],direc[4],carrera[4],edades[4],prom[4]};
    printf("%s\n%s\n%s\n%d\n%f",a1.Nom,a1.Dir,a1.Car,a1.Eda,a1.Pro);
    printf("%s\n%s\n%s\n%d\n%f",a2.Nom,a2.Dir,a2.Car,a2.Eda,a2.Pro);
    printf("%s\n%s\n%s\n%d\n%f",a3.Nom,a3.Dir,a3.Car,a3.Eda,a3.Pro);
    printf("%s\n%s\n%s\n%d\n%f",a4.Nom,a4.Dir,a4.Car,a4.Eda,a4.Pro);
    printf("%s\n%s\n%s\n%d\n%f",a5.Nom,a5.Dir,a5.Car,a5.Eda,a5.Pro);
    return 0;
}