#include <stdio.h>
#include <SDL/SDL.h>

typedef struct{
	SDL_Surface* imgI[];
	SDL_Surface* imgD[];
	SDL_Surface* imgG[];
	SDL_Surface* imgS[];
}animation;

typedef struct{
	animation anim;
}personnage;

init_animation(personnage* p){
	p->anim.imgI[0];
}
