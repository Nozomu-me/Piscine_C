/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:34:21 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/29 14:28:43 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		r;

	i = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	r = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	r = r * s;
	return (r);
}

int		main(void)
{
	char	chaine[] = "  \n \t \f -1235f25418";
	printf("%d", ft_atoi(chaine));
}
