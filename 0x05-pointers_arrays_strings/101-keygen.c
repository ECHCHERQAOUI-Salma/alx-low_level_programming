#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * pass_gen - gd
 */
void pass_gen()
{
	char possible_characters[] = "abcdefghijklmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
	char password[11];
	int i, character_index;

	srand(time(0));
	for (i = 0; i < 10; i++)
	{
	     	character_index = rand() % sizeof(possible_characters);
		password[i]= possible_characters[character_index];
	}
	password[10] = '\0';
	printf("%s", password);
}
/**
 * main -Entry
 *
 * Return: 0
 */
int main(void)
{
	pass_gen();
	return(0);
}
