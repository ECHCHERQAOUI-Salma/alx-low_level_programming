#ifndef FUNC_NAMES
#define FUNC_NAMES
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* #ifndef FUNC_NAMES */
