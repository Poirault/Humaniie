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

struct coord {
	int x;
	int y;
};

typedef struct coord coord;

coord* init(int x,int y);

struct anneaux {
	coord* pos;
	struct anneaux* suiv;
};

typedef struct anneaux anneaux;

typedef char** plateau;

coord* postition(int k,anneaux* snake);

void modif(int k,anneaux* snake,coord* c);

struct word {
	int id;
	char word;
};

typedef struct word word;