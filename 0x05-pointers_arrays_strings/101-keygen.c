#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generateRandomChar() {

	return (rand() % 94 + 33);
}

int main(void)
{
	srand(time(NULL));

	int i;

	char password[PASSWORD_LENGTH + 1];

	for (i = 0; i < PASSWORD_LENGTH; i++) {
		password[i] = generateRandomChar();
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
