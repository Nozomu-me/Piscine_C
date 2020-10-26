/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:01:56 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/02 17:45:47 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	long int		i;

	if (nb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb == 2)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int		main(void)
{
	printf("%d", ft_find_next_prime(2147483640));
}
