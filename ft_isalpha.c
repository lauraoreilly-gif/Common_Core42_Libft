/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:53:45 by loreill           #+#    #+#             */
/*   Updated: 2025/11/03 15:10:05 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('J'));
// 	printf("%d\n", ft_isalpha('1'));
// 	printf("%d\n", ft_isalpha('@'));
// 	printf("%d\n", ft_isalpha('b'));
// }
