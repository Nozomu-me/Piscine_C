/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 22:01:21 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/27 18:08:55 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 12)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	printf("%d", ft_recursive_factorial(12));
}
