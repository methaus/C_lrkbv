#include <stdio.h>

int main() {
	int charpointer, key;
	while (charpointer != 27) {
		charpointer = getch();
		if (charpointer == 0 || charpointer == 224) {
			key = getch();
			printf("value: %i; key: %i;\n", charpointer, key);
		}
		else {
			printf("value: %i;\n", charpointer);
		}
	}
	return 0;
}
