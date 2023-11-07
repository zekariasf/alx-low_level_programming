#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog struct data type to contain attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typdef for structure dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
