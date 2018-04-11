#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	srand(time(NULL));
	for(int i=0;i<15;i++){
	double fuck1, fuck2;

	fuck1 = rand() % 50000 + 330000;
	fuck2 = rand() % 500000 + 12400000;

	printf("%lf %lf\n", fuck1 / 10000, fuck2 / 100000);
	}
	return 0;
}
