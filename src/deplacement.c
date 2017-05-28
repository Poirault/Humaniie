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
#include "deplacement.h"





int mouvement(char direc,anneaux* snake,int m){
	coord* c=init(0,0);
	c=snake->pos;
	if(direc=='h'){
		if(c->y == 0){
			return(-1);
		}
		else{c->y = c->y +1;}
		return(0);
	}
	if(direc=='b'){
		if(c->y == m){
			return(-1);
		}
		else{c->y = c->y -1;}
		return(0);
	}
	if(direc=='g'){
		if(c->x == 0){
			return(-1);
		}
		else{c->x = c->x -1;}
		return(0);
	}
	if(direc=='d'){
		if(c->x == m){
			return(-1);
		}
		else{c->x = c->x +1;}
		return(0);
	}
	return(2);
}

void majcorps(int k,anneaux* snake){    // k c'est la taille du serpent
	for(int i=0; i<k-1; i++){
		coord* c=init(0,0);
		c=postition(k-1-i,snake);
		modif(k-i,snake,c);
	}
}