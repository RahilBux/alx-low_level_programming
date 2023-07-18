#ifndef dog_h
#define dog_h

/**
 * struct dog - structure for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: struc for a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
