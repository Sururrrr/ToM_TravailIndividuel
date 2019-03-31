#ifndef ENNEMI_H_
#define ENNEMI_H_
typedef struct 
{
	SDL_Rect position;
	SDL_Surface *fond1;
	SDL_Surface *fond2;
	//SDL_Surface *fonda;
	//SDL_Surface *fondb;
}ennemis;

void initialiserennemi(ennemis *ennemi);
void afficherennemi(ennemis ennemi,SDL_Surface *ecran,int y);
#endif 
