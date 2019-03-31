

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <math.h>
//#include "trigo.h"

typedef struct

{

   int x;
   int y;



}coordonnes;
typedef struct 

{
   int x;
   int y;
   float r;				
}cercle;

int collision(cercle P1,cercle P2)

{
	coordonnes centreA, centreB;
	centreA.x=P1.x+P1.r;
	centreA.y=P1.y+P1.r;
	centreB.x=P2.x+P2.r;
	centreB.y=P2.y+P2.r;
	
	
			
   int d = sqrt((centreB.x-centreA.x)*(centreB.y-centreA.y))+((centreB.y-centreA.y)*(centreB.x-centreA.y));

   if (d>(P1.r)+(P2.r)){
	printf("0\n");
      return 0;
	}
   else{
	printf("1\n");
      return 1;
	}
}

int main(int argc, char argv[])
{
cercle x,y;
x.x = 10; x.y = 10; x.r = 10;
y.x = 5; y.y = 5; y.r = 20;
collision(x,y);	
}
