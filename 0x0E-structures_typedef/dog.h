#ifndef DOG_FILE
#define DOG_FILE
/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
