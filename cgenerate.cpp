#include"cstdio"
#include"cstdlib"
#include"cstring"

using namespace std;

int main(int argc,char *argv[]){
	char move[200]="cp ~/script/cg.cpp ./";
	char vim[200]="vim ";
	strcat(move,argv[1]);
	system(move);
	strcat(vim,argv[1]);
	system(vim);
	return 0;
}
