#include <struct.h>

struct coord {
	int x;
	int y;
};

coord* init(int x,int y){
	coord* c=calloc(1, sizeof(coord));
	c->x=x;
	c->y=y;
	return(c);
}

struct anneaux {
	coord* pos;
	anneaux* suiv;
};

coord* postition(int k,anneaux* snake){
	if(k==0){
		return(snake->pos);
	}
	position(k-1,snake->suiv);
}
void modif(int k,anneaux* snake,coord* c){
	if(k==0){
		snake->pos=c;
	}
	modif(k-1,snake->suiv,c);
}


