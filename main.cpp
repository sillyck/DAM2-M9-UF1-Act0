/*
 * randoms.c 
 * 
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char buf[1024];
	int num;
	
	while(fgets(buf,1024,stdin)!=NULL){
		num=1+(int)(10.0*rand()/(RAND_MAX+1.0));
		fprintf(stdout,"%d\n",num);
		fflush(stdout);
	}
	
	exit(0);
}
