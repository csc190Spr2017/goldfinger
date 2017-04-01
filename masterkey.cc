#include <funds.cc>

int main(){
	printt("The master key is %d\n", MiniMeSecret() * NumberTwoSecret() * EvilSecret());
}
