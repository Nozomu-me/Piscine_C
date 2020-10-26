/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:16:38 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/02 17:03:22 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{	
	long int		i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i*i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_is_prime(2147483640));
}
