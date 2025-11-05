/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pro <Pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:09 by loreill           #+#    #+#             */
/*   Updated: 2025/11/04 22:32:28 by Pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[6];
// 	int		tab[5];
// 	size_t	i;

// 	ft_memset(str, 'A', 5);
// 	str[5] = '\0';
// 	printf("%s\n", str);
// 	ft_memset(tab, 2, sizeof(tab));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }