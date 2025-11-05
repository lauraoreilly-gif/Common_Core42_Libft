/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:28 by loreill           #+#    #+#             */
/*   Updated: 2025/11/05 16:36:41 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("###### ft_isalpha ######\n");
	printf("'A' : ft_isalpha: %d | isalpha: %d\n", ft_isalpha('A'), isalpha('A'));
	printf("'5' : ft_isalpha: %d | isalpha: %d\n", ft_isalpha('5'), isalpha('5'));
	printf("\n");

	printf("###### ft_isdigit ######\n");
	printf("'5' : ft_isdigit: %d | isdigit: %d\n", ft_isdigit('5'), isdigit('5'));
	printf("'A' : ft_isdigit: %d | isdigit: %d\n", ft_isdigit('A'), isdigit('A'));
	printf("\n");

	printf("###### ft_isalnum ######\n");
	printf("'A' : ft_isalnum: %d | isalnum: %d\n", ft_isalnum('A'), isalnum('A'));
	printf("'5' : ft_isalnum: %d | isalnum: %d\n", ft_isalnum('5'), isalnum('5'));
	printf("'@' : ft_isalnum: %d | isalnum: %d\n", ft_isalnum('@'), isalnum('@'));
	printf("\n");

	printf("###### ft_isascii ######\n");
	printf("'A' : ft_isascii: %d | isascii: %d\n", ft_isascii('A'), isascii('A'));
	printf("127 : ft_isascii: %d | isascii: %d\n", ft_isascii(127), isascii(127));
	printf("128 : ft_isascii: %d | isascii: %d\n", ft_isascii(128), isascii(128));
	printf("\n");

	printf("###### ft_isprint ######\n");
	printf("'A' : ft_isprint: %d | isprint: %d\n", ft_isprint('A'), isprint('A'));
	printf("' ' : ft_isprint: %d | isprint: %d\n", ft_isprint(' '), isprint(' '));
	printf("'\\n' : ft_isprint: %d | isprint: %d\n", ft_isprint('\n'), isprint('\n'));
	printf("\n");

	printf("###### ft_strlen ######\n");
	printf("\"Hello\" → ft_strlen: %zu | strlen: %zu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("\"\" → ft_strlen: %zu | strlen: %zu\n", ft_strlen(""), strlen(""));
	printf("\n");

	printf("###### ft_memset ######\n");
	char str1[6];
	char str2[6];
	ft_memset(str1, 'A', 5);
	memset(str2, 'A', 5);
	str1[5] = '\0';
	str2[5] = '\0';
	printf("\"AAAAA\" → ft_memset: %s | memset: %s\n", str1, str2);

	int tab1[5] = {1, 2, 3, 4, 5};
	int tab2[5] = {1, 2, 3, 4, 5};
	ft_memset(tab1, 0, sizeof(tab1));
	memset(tab2, 0, sizeof(tab2));
	printf("tab[0] → ft_memset: %d | memset: %d\n", tab1[0], tab2[0]);
	printf("\n");

	printf("###### ft_bzero ######\n");
	int tab3[5] = {1,2,3,4,5};
    int tab4[5] = {1,2,3,4,5};
	size_t	i;
	printf("Avant bzero : ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab3[i]);
		i++;
	}
	printf("\n");
	
	ft_bzero(tab3, sizeof(tab3));
	bzero(tab4, sizeof(tab4));

	printf("Après ft_bzero : ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab3[i]);
		i++;
	}
	printf("\n");

	printf("Après bzero : ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab4[i]);
		i++;
	}
	printf("\n");

	printf("\n###### ft_memcpy ######\n");
	char	src[] = "hello";
	char	dest1[10];
	char	dest2[10];

	ft_memcpy(dest1, src, 6);
	memcpy(dest2, src, 6);
	printf("ft_memcpy : %s\n", dest1);
	printf("memcpy : %s\n", dest2);
	printf("\n");

	printf("###### ft_memmove ######\n");
	char str3[15] = "bonjour";
	char str4[15] = "bonjour";

	printf("Avant\n");
	printf("str3 = %s\n", str3);
	printf("str4 = %s\n", str4);

	printf("Dest > Src\n");
	ft_memmove(str3 + 3, str3, 6);
	memmove(str4 + 3, str4, 6);
	printf("ft_memmove : %s\n", str3);
	printf("memmove : %s\n", str4);

	printf("Dest < Src\n");
	ft_memmove(str3, str3 + 3, 6);
	memmove(str4, str4 + 3, 6);
	printf("ft_memmove : %s\n", str3);
	printf("memmove : %s\n", str4);
	printf("\n");

	printf("###### ft_memmove ######\n");
	char str5[] = "Hello World";
	printf("%s",
}
