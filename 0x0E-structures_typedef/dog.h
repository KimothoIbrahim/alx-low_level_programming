/**
 * struct dog - description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * description: desc
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
