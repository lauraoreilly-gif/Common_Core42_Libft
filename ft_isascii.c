/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loreill <loreill@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:03:31 by loreill           #+#    #+#             */
/*   Updated: 2025/11/03 16:27:34 by loreill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('J'));
// 	printf("%d\n", ft_isalpha(128));
// 	printf("%d\n", ft_isalpha('@'));
// }
