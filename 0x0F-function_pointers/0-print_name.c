/**
 * print_name - print name
 * @name: name
 * @f: funct
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
