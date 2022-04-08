#include <stdio.h>
#include <limits.h>
int Ricerca(int indice, int numeri[])
{
    int valoreRichiesto, nBool, k;
    printf("Inserisci valore da ricercare");
    scanf("%d", &valoreRichiesto);
    for(k = 0; k < indice; k++)
    {
        if(numeri[k] == valoreRichiesto)
        {
            nBool = 1
            break;
        }
        else
        {
            nBool = 0;
        }
    }

    if(nBool == 1)
    {
        printf("Numero trovato in posizione %d", k);
    }
    else if (nBool == 0)
    {
        printf("Numero non trovato");
    }
}
void Modifica(int indice, int numeri[])
{
    int indiceMod, valore;
    printf("Inserire indice del valore da modificare \n");
    scanf("%d", &indiceMod);
    printf("Inserisci valore da sostituire \n");
    scanf("%d", &valore);
    numeri[indiceMod] = valore;
    Menu(indice, numeri);
}
void Inserimento(int indice, int numeri[])
{
    printf("Inserisci un valore in coda \n");
    scanf("%d", &numeri[indice]);
    indice++;
    Menu(indice, numeri);
}
void Visualizza(int indice, int numeri[])
{
    for(int j = 0; j < indice; j++)
    {
        printf("%d \n", numeri[j]);
    }
    Menu(indice, numeri);
}
void Menu(int indice, int *numeri[])
{
    int scelta = 0;
    printf("Premere 1 per mostrare il contenuto dell'array \n");
    printf("Premere 2 per inserire un elemento in coda\n");
    printf("Premere 3 per modificare un elemento\n");
    printf("Premere 4 per eliminare un elemento\n");
    printf("premere 5 per ricercare un elemento\n");
    printf("premere 0 per terminare\n");
    scanf("%d", &scelta);
    if(scelta == 1)
    {
        Visualizza(indice, numeri);
    }
    else if(scelta == 2)
    {
        Inserimento(indice, numeri);
    }
    else if(scelta == 3)
    {
        Modifica(indice, numeri);
    }
    else if(scelta == 4)
    {
        //Elimina(indice, numeri);
    }
    else if(scelta == 5)
    {
        Ricerca(indice, numeri);
    }
    else if(scelta == 5)
    {
        //Termina(indice, numeri);
    }
}
int main(int argc, char *argv[])
{
    int numeri[SHRT_MAX], numero, indice = 0;
    printf("Inserisci una serie di numeri, per smettere inserire -1 \n");
    do
    {
        scanf("%d", &numeri[indice]);
        indice++;
    } while (numeri[indice - 1] > -1);
    Menu(indice, numeri);
    return 0;
}