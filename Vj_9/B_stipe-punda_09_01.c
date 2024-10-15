#include "stdio.h"
#include "stdlib.h"


struct vrime{
    int hh;
    int mm;
    int ss;
};
struct vrime izracunaj(struct vrime Vrime1,struct vrime Vrime2){

    struct vrime Vrime;

    if(Vrime1.ss<Vrime2.ss){
            Vrime1.ss+=60;
            Vrime1.mm--;
            Vrime.ss=abs(Vrime1.ss-Vrime2.ss);
        }
    else{Vrime.ss=Vrime1.ss-Vrime2.ss;}

    if(Vrime1.mm<Vrime2.mm){
        Vrime1.mm+=60;
        Vrime1.hh--;
        Vrime.mm=abs(Vrime1.mm-Vrime2.mm);
    }
    else{Vrime.mm=Vrime1.mm-Vrime2.mm;}

    Vrime.hh=abs(Vrime1.hh-Vrime2.hh);

    return Vrime;
}

int main(){

struct vrime Vrime1;
Vrime1.hh=18;
Vrime1.mm=20;
Vrime1.ss=27;

struct vrime Vrime2;
Vrime2.hh=14;
Vrime2.mm=40;
Vrime2.ss=29;

struct vrime Vrime=izracunaj(Vrime1,Vrime2);

printf("%d %d %d",Vrime.hh,Vrime.mm,Vrime.ss);

return 0;
}
