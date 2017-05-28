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


int mouvement(char direc,anneaux* snake,int m);


void majcorps(int k,anneaux* snake);