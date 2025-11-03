/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:11:56 by loreill           #+#    #+#             */
/*   Updated: 2025/11/03 18:04:46 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('J'));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d\n", ft_isdigit('@'));
// 	printf("%d\n", ft_isdigit('b'));
// }
