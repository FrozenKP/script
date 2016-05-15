#include"cstdio"
#include"cstdlib"
#include"string.h"

using namespace std;

int main(int argc,char *argv[]){
	char compile[200]="g++ -std=c++11 -Wall -Wextra -pedantic -g -O3 ";
	if(argc>=3){
		strcat(compile,"-o ");
		strcat(compile,argv[2]);
	}
	for(int a=3;a<argc;a++){
		strcat(compile," ");
		strcat(compile,argv[a]);
	}
	strcat(compile," ");
	strcat(compile,argv[1]);
	system(compile);
	return 0;
}
