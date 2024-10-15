#include <stdio.h>
#include <stdlib.h>

struct kompleksnibr{
    int real;
    int imag;
};

struct kompleksnibr suma(struct kompleksnibr br1, struct kompleksnibr br2){

    struct kompleksnibr suma_kompleksni;

    suma_kompleksni.real = br1.real + br2.real;
    suma_kompleksni.imag = br1.imag + br2.imag;

    return suma_kompleksni;
}

struct kompleksnibr umnozak(struct kompleksnibr br1, struct kompleksnibr br2){

    struct kompleksnibr umnozak_kompleksni;

    umnozak_kompleksni.real = br1.real * br2.real;
    umnozak_kompleksni.imag = br1.imag * br2.imag;

    return umnozak_kompleksni;
}


struct kompleksnibr modul(struct kompleksnibr br1){

    struct kompleksnibr modul_kompleksni;

    modul_kompleksni.real = abs(br1.real) ;
    modul_kompleksni.imag = abs(br1.imag) ;

    return modul_kompleksni;
}

int main(){

    struct kompleksnibr br1;
    br1.real = -2;
    br1.imag = 4;

    struct kompleksnibr br2;
    br2.real = 4;
    br2.imag = -6;

    struct kompleksnibr suma_kompl = suma(br1,br2);
    printf("%d %d\n",suma_kompl.real,suma_kompl.imag);

    struct kompleksnibr umnozak_kompl = umnozak(br1,br2);
    printf("%d %d\n",umnozak_kompl.real,umnozak_kompl.imag);

    struct kompleksnibr modul_kompl = modul(br1);
    printf("%d %d\n",modul_kompl.real,modul_kompl.imag);

    struct kompleksnibr modul_kompl2 = modul(br2);
    printf("%d %d\n",modul_kompl2.real,modul_kompl2.imag);


return 0;
}
