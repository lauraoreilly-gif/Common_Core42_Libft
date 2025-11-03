/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:11:56 by loreill           #+#    #+#             */
/*   Updated: 2025/11/03 15:17:54 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= '0' && c <= '9')
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
