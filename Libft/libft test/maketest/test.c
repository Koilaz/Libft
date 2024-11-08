
#include "libft.h"

void test_is();
void test_ft_atoi(char *str);
void	test_ft_bzero();
void test_ft_calloc (size_t nmemb, size_t size);
void test_ft_itoa(const int n);
void test_ft_memchr(char str[], int sdchr, size_t size);
void ft_test_memcmp(const void *ptr, const void *ptr2, size_t size);
void test_ft_memmove(char dest[50], char* src, size_t s);
void test_ft_split();
void test_ftstrmapi();
void test_strtrim ();



int main()
{
	test_is();
	test_ft_atoi("-42");
	test_ft_bzero();
	test_ft_calloc(10, sizeof(int));
	test_ft_itoa(-1247);
	test_ft_memchr("les eaux tranquilles rongent aussi la berge.", 120, strlen("cherche x dans la str"));
	ft_test_memcmp("tea for you", "tea for me",11);
	char dest[50];
	test_ft_memmove(dest, "on met pas la  charue avant les boeufs", 20);
	test_ft_split();
	test_ftstrmapi();
	test_strtrim ();

	return 0;
}
void test_ft_calloc (size_t nmemb, size_t size)
{
	void *ptr;
	void *cptr;
	size_t i = 0;
	ptr = ft_calloc(nmemb, size);
	cptr = calloc(nmemb, size);
	int *iptr = (int *)ptr;
	int *icptr = (int *)cptr;
	printf("\n*test ft_calloc*\n");
	if (ptr == NULL)
		printf("ft_calloc renvoie pointeur NULL");
	else
	{
		printf ("Result ft_calloc:\n");
		for (i = 0; i < (nmemb); i++)
		printf("%d ", iptr[i]);
		printf("\n");
	}
	if (cptr ==  NULL)
	printf("Calloc renvoie pointeur NULL");
	else
	{
		printf ("Result calloc:\n");
		for (i = 0; i < (nmemb); i++)
		printf("%d ", icptr[i]);
		printf("\n");
	}
	free(ptr);
	free(cptr);
}

void	test_ft_bzero()
{
	printf("\n*test ft_bzero*\n");
    int array [] = { 4, 8, 15, 16, 23, 42 };
    size_t size = sizeof( int ) * 6;
    int length;
	printf("avant:");
    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    ft_bzero( array, size );
	printf("apres: ");
    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

}
void test_ft_atoi(char *str)
{

printf("\n**test atoi**\nstr: %s\natoi: %d\n", str,atoi(str));
printf("ft_atoi:%d\n", ft_atoi(str));
}

void test_is()
{
	char c = 0;

	printf("Char:\n");
	while (c < 127)
	{
		if(!ft_isprint(c))
			printf(" ");
		else
		printf("%c", c);
		c++;
	}
	printf("\n");

	c = 0;

	printf("is_alnum:\n");
	while (c < 127)
	{
		printf("%d", ft_isalnum(c));
		c++;
	}
	printf("\n");
	c = 0;

	printf("is_digit:\n");
	while (c < 127)
	{
		printf("%d", ft_isdigit(c));
		c++;
	}
	printf("\n");
		c = 0;

	printf("is_alpha:\n");
	while (c < 127)
	{
		printf("%d", ft_isalpha(c));
		c++;
	}
	printf("\n");
		c = 0;

	printf("is_ascii:\n");
	while (c < 127)
	{
		printf("%d", ft_isascii(c));
		c++;
	}
	printf("\n");
		c = 0;

	printf("is_print:\n");
	while (c < 127)
	{
		printf("%d", ft_isprint(c));
		c++;
	}
	printf("\n");
			c = 0;

	printf("toupper:\n");
	while (c < 127)
	{
		if(!ft_isprint(c))
			printf(" ");
		else
		printf("%c", ft_toupper(c));
		c++;
	}
	printf("\n");
			c = 0;

	printf("tolower:\n");
	while (c < 127)
	{
		if(!ft_isprint(c))
			printf(" ");
		else
		printf("%c", ft_tolower(c));
		c++;
	}
	printf("\n");
}
void test_ft_itoa(const int n)
{
	printf("\n*test ft_itoa*\n");
	printf("str:\n%s\n", ft_itoa(n));
}
void test_ft_memchr(char str[], int sdchr, size_t size)
{
	char *result = ft_memchr(str, sdchr, size);
	printf("\n*test ft_memchr*\nmemory block en char:\n%s\nint recherche:\n%d\n",str , sdchr);

    if (result != NULL)
	{
        printf("Le caractère '%c' a été trouvé à la position %ld.\n", sdchr, result - str);
    } else
	{
        printf("Le caractère '%c' n'a pas été trouvé.\n", sdchr);
    }

}

void test_ft_memmove(char dest[50], char* src, size_t s)

{
memset (dest, '.',50);
printf("\n*test ft_memmove et memset*\ndest apres memset '.':\n%s\ndest apres memmove:\n", dest);
printf("%s\n",(char *)ft_memmove(dest, src, s));
}

void test_ft_split()
{
	char *s = "  le Split  des petis ca les rends marteau ";
	char c = ' ';
	int i = 0;
	printf("\n*test ft_split*\nString:\n%s\n",s , );
	char **tab;
	tab = ft_split(s, c);
	printf("string list :\n");
	while (tab[i])
	{
		printf("'%s'\n", tab[i]);
		i++;
	}
}
char f(unsigned int i, char si)
{
	(void)i;
	if (si >= 'a' && si <= 'z')
		return ((si - 'a' + 13) % 26 + 'a');
	else if (si >= 'A' && si <= 'Z')
		return ((si - 'A' + 13) % 26 + 'A');
	return si;
}

void test_ftstrmapi()
{
	char *s = "Ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb";
	printf("*Test ft_strmapi*\nStr:\n%s\nStrmapi:\n%s\n",s, ft_strmapi(s, f));
}
void test_strtrim ()
{
	char *s1 = "123-Vous avez des rapports 123 privillegiez avec ce buisson ?!-123";
	char *set = "-213";
	printf("\n*test ft_strtrim*\nstr:\n%s\nft_strtrim:'%s'\n'%s'\n",s1, set, ft_strtrim(s1, set));
}
