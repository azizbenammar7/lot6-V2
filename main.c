#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "enigme.h"
#include <SDL/SDL_mixer.h>

int main()
{
	
	SDL_Surface *ecran=NULL;
	enigme e;

       if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1)
//API Mixer Initialization
       {
       printf("%s", Mix_GetError());
       }
       Mix_Music *music; //Construct Mix_Music pointer
       music = Mix_LoadMUS("suspense.mp3"); //load the music
       Mix_PlayMusic(music, -1); //play music



	
	afficherenigme(e,ecran);
        Mix_CloseAudio();

}

