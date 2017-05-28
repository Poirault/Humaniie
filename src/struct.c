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
#include "struct.h"


coord* init(int x,int y){
	coord* c=calloc(1, sizeof(coord));
	c->x=x;
	c->y=y;
	return(c);
}





coord* postition(int k,anneaux* snake){
	if(k<1){
		return(snake->pos);
	}
	position(k-1,snake->suiv);
}
void modif(int k,anneaux* snake,coord* c){
	if(k<1){
		snake->pos=c;
	}
	modif(k-1,snake->suiv,c);
}


