#include <stdio.h>
#include <string>
using namespace std;

void drow_the_shape(int length);

int main(int argc, char** argv){
	int length = stoi(argv[1]);
	drow_the_shape(length);
	return 1;
}
void drow_the_shape(int length){
	int var = length;
	for(int i = 0; i < length; i++){
		for(int j = 0; j < var; j++){
			printf(" ");
		}
		for(int j = 0; j < length; j++){
			printf("* ");
		}
		var--;
		printf("\n");
	}
}
