#ifndef DOG
#define DOG
/**
 * struct dog - my dog strust
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* #ifndef DOG */
void init_dog(struct dog *d, char *name, float age, char *owner);
