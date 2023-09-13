/**
 * print_name - a function that prints a name.
 * @name: name given
 * @f: function of name
 *
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
