#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include <unistd.h>
#include "ennemi.h"

void initialiserennemi(ennemis *ennemi)
{
ennemi->position.x = 500 ;
ennemi->position.y = 250 ;
ennemi->fond1 = IMG_Load("G.png");
//ennemi->fond2 = IMG_Load("Goblin.png");
//ennemi->fonda = IMG_Load("xa.png");
//ennemi->fondb = IMG_Load("xb.png");
}

void afficherennemi(ennemis ennemi,SDL_Surface *ecran,int y)
{
switch(y)
{
case 1:
SDL_BlitSurface(ennemi.fond1,NULL, ecran,&ennemi.position);
	break ;
//case 2:
//SDL_BlitSurface(ennemi.fond2,NULL, ecran,&ennemi.position);
	//break ;
//case 3:
//SDL_BlitSurface(ennemi.fonda,NULL, ecran,&ennemi.position);
	//break ;
//case 4:
//SDL_BlitSurface(ennemi.fondb,NULL, ecran,&ennemi.position);
	//break ;
}

}



