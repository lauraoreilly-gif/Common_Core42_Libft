/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pro <Pro@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:11:56 by loreill           #+#    #+#             */
/*   Updated: 2025/11/04 22:29:37 by Pro              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('J'));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d\n", ft_isdigit('@'));
// 	printf("%d\n", ft_isdigit('b'));
// }
