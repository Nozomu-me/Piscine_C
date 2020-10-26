/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:30:04 by amouassi          #+#    #+#             */
/*   Updated: 2019/09/01 16:28:24 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main(void)
{
	char	dest[] = "a";
	char	src[] = "c";

	//printf("%lu\n", ft_strlcat(dest, src, 5));
	printf("%lu\n",strlcat(dest, src, 1));
	//printf("%lu",strlcpy(dest, src, 1));
}
