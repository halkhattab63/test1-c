#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct object {
    int boy;
    int agirlik;
    char Seri_No[6];
} object;

typedef struct Nod {
    object Veri;
    struct Nod *next;
} Nod;

void add_Nod(Nod **bas, int boy, int agirlik, char Seri_No[6]) {
    Nod *new_Nod = (Nod*)malloc(sizeof(Nod));
    new_Nod->Veri.boy = boy;
    new_Nod->Veri.agirlik = agirlik;
    strncpy(new_Nod->Veri.Seri_No, Seri_No, 6);
    new_Nod->next = *bas;
    *bas = new_Nod;
}

int main() {
    Nod *bas = NULL;
    add_Nod(&bas, 180, 80, "12345");
    printf("boy: %d\n", bas->Veri.boy);
    printf("agirlik: %d\n", bas->Veri.agirlik);
    printf("Seri No: %s\n", bas->Veri.Seri_No);
    free(bas);
    return 0;
}
