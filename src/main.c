#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


int n=5; // taille du snake
int m=25; // taille du jeu
int main(){

	SDL_Surface* screen = NULL;

	if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)== -1) // Démarrage de la SDL. Si erreur :

    {

        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); // Écriture de l'erreur

        exit(EXIT_FAILURE); // On quitte le programme

    };
    SDL_WM_SetCaption("Snake", NULL);
	screen = SDL_SetVideoMode(1366,768,16,SDL_FULLSCREEN | SDL_DOUBLEBUF);											/*    la largeur de la fenêtre désirée (en pixels) ;
	
																    la hauteur de la fenêtre désirée (en pixels) ;

																    le nombre de couleurs affichables (en bits / pixel) ;

																    des options (des flags).*/
    SDL_MapRGB(ecran->format, 255, 0, 0)

    Uint32 bleuVert = SDL_MapRGB(ecran->format, 17, 206, 112);
    lool = SDL_LoadBMP("./SDL/Snake.bmp");
    SDL_BlitSurface(lool, NULL, ecran, &positionFond);
    SDL_FreeSurface(lool); /* On libère la surface */
    SDL_Flip(ecran); /* Mise à jour de l'écran */


	SDL_Quit();
}