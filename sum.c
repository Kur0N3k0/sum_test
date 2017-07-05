#include "sum.h"

int sum(int a, int b){
	int s = 0;
	for(int i = a; i <= b; i++){
		s += i;
	}
	return s;
}
