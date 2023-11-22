#include <iostream>
#include "ani.h"
#include "hum.h"
#include "fish.h"
using namespace std;
int main() {
	animal* a[3];
	for (int i = 0; i < 2; i++)a[i] = new fish;
	fish c;
	a[2] = &c;
	c.swim();
	((fish*)a[2])->glub();
	return 123;
}