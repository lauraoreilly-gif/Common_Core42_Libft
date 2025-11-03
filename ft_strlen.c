/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:13:28 by loreill           #+#    #+#             */
/*   Updated: 2025/11/03 18:24:38 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "test test";

// 	printf("%d\n", ft_strlen(str));
// }
