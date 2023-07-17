#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - dog data
 *@name: name of the dog
 * @age: age of the dog
 *@owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
