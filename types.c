
struct animal {
	char *name;
	int leg_count, speed;
};

typedef struct animal animal;

typedef struct animal2 {
	char *name;
	int leg_cound, speed;
} animal2;

typedef struct {
	char *name;
	int leg_count, speed;
} animal3;

int main(void) {
	struct animal y;
	animal z;

	struct animal2 a;
	animal2 b;

	animal3 c;
	// struct animal3 d; Does not work
}
