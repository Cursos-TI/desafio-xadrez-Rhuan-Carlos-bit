#include <stdio.h>
void torre(int casat){
    
    if(casat>0){printf(" torre direita\n");
    torre(casat - 1);
    return;
}}
void bispo(int casab){ if(casab==0){return;}
    for(int vertical=0; vertical<1; vertical++){for(int horizontal=0; horizontal<1; horizontal++){ 
    printf("bispo cima\n");
    printf("direita\n");}}
bispo(casab-1);
}
void rainha (int casar){if (casar>0){printf("rainha direita\n");
} else {return;}
rainha(casar-1);}
int main() { 
torre(5);
bispo(3);
rainha(8);
for(int casasc1=0; casasc1<2; casasc1++){printf("cima\n");
for(int casasc2=0; casasc2<1; casasc2++){if (casasc1==0){continue;} else{ printf ("direita\n");}}}
return 0;
// bispo 3 casas, raainha 8 casas
// cavalo duas casas para cima e uma para a direita
// cavalo deve usar loop aninhado com multiplas condições
}