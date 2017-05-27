char chgt(char intput){                //useless
	if(input=='g' && snake->pos->x!=0){
		return('g');
	}
	if(input=='d' && snake->pos->x!=m){
		return('d');
	}
	if(input=='h' && snake->pos->y!=0){
		return('h');
	}
	if(input=='b' && snake->pos->y!=m){
		return('b');
	}
}

int mouvement(char direc){
	if(direc=='h'){
		if(snake->pos->y == 0){
			return(-1);
		}
		else(snake->pos->y++);
	}
	if(direc=='b'){
		if(snake->pos->y == m){
			return(-1);
		}
		else(snake->pos->y--);
	}
	if(direc=='g'){
		if(snake->pos->x == 0){
			return(-1);
		}
		else(snake->pos->x--);
	}
	if(direc=='d'){
		if(snake->pos->m == m){
			return(-1);
		}
		else(snake->pos->x--);
	}
}

void majcorps(int k,anneaux* snake){    // k c'est la taille du serpent
	for(int i=0; i<k-1; i++){
		coord* c=init(0,0);
		c=postition(k-1-i,snake);
		modif(k-i,snake,c);
	}
}