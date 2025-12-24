#include <stdio.h>

struct car {
	char *name;
	float price;
	int speed;
};

void set_price(struct car *c, float new_price) {
	c->price = new_price;
}

int main() {
	struct car saturn;

	saturn.name = "Satcurn SL/2";
	saturn.price = 15999.99;
	saturn.speed = 175;

	set_price(&saturn, 799.99);

	printf("Name:           %s\n", saturn.name);
	printf("Price (USD):    %f\n", saturn.price);
	printf("Top Speed (km): %d\n", saturn.speed);
}

