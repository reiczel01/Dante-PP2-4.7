#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct image_t {
	char type[3];
	int** ptr;
	int width;
	int height;
};

int type(struct image_t* m, char *str) {
	if (str == NULL) {
		return -1;
	}
	int i, j;
	int letters = 0;
	for (i = 0; i < 30; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			letters++;
	}
	int typ = 2;
	for (j = letters; i = (letters - 3); i--) {
		*(str + letters) = *(m->type + typ);
		typ--;
	}
}
struct image_t* load_image_t(const char* filename, int* err_code) {
	FILE* image;
	image = fopen(filename, "rb");
}
int save_image_t(const char* filename, const struct image_t* m1) {

}

void destroy_image(struct image_t** m) {

}

struct image_t* image_flip_horizontal(const struct image_t* m1) {

}
struct image_t* image_flip_vertical(const struct image_t* m1) {

}
struct image_t* image_negate(const struct image_t* m1) {

}

int main(){
	char source_file[31];
	struct image_t* m;
	printf("Podaj sciezke do pliku:\n");
	scanf("%30[^\n]s", &source_file);
	type(m, source_file);
	return 0;
}