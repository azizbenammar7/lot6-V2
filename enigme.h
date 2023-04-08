#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //celle de la fonction random
#include <math.h> /* déclare des fonctions mathématiques. Tous les paramètres et résultats sont du type double; les angles sont indiqués en radians. */

#include <SDL/SDL_mixer.h>


typedef struct{
    char question[100];
    char reponse1[100];
    char reponse2[100];
    char reponse3[100];
    int numrep;
}enigme;


enigme generer();
void afficherenigme(enigme e, SDL_Surface*ecran);


#endif // ENIGME_H_INCLUDED
