#include "funds.h"
#include <stdio.h>

int main(){
	printf("The master key is %d\n", MiniMeSecret() * NumberTwoSecret() * EvilSecret());
}
