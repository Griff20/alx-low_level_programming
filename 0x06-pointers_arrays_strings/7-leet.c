/**
 * leet - a function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: @str
 */
char *leet(char *str)
{
	int i, c = 0;
	int strl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	
	while (str[c] != '\0')
	{
		
		for (i = 0; i < 5; i++)
		{
			if (str[c] == strl[i] || str[c] == ul[i])
			{
				str[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (str);
}
