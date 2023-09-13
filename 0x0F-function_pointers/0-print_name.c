/**
 * print_name - a function that prints a name.
 * @name: name given
 * @f: function of name
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
