void f(char *a)
{
	int i = 0;
	while (a[i] != 0)
		putchar(a[i++]);
	i = 0;
	putchar(34);
	while (a[i] != 0) {
		if (a[i] == 10) {
			putchar(92);
			putchar('n');
		} else if (a[i] == 9) {
			putchar(92);
			putchar('t');
		} else
			putchar(a[i]);
		i++;
	}
	putchar(34);
	putchar(';');
	putchar(10);
	putchar(9);
	putchar('f');
	putchar('(');
	putchar('a');
	putchar(')');
	putchar(';');
	putchar(10);
	putchar('}');
}
main()
{
	char *a="void f(char *a)\n{\n\tint i = 0;\n\twhile (a[i] != 0)\n\t\tputchar(a[i++]);\n\ti = 0;\n\tputchar(34);\n\twhile (a[i] != 0) {\n\t\tif (a[i] == 10) {\n\t\t\tputchar(92);\n\t\t\tputchar('n');\n\t\t} else if (a[i] == 9) {\n\t\t\tputchar(92);\n\t\t\tputchar('t');\n\t\t} else\n\t\t\tputchar(a[i]);\n\t\ti++;\n\t}\n\tputchar(34);\n\tputchar(';');\n\tputchar(10);\n\tputchar(9);\n\tputchar('f');\n\tputchar('(');\n\tputchar('a');\n\tputchar(')');\n\tputchar(';');\n\tputchar(10);\n\tputchar('}');\n}\nmain()\n{\n\tchar *a=";
	f(a);
}
