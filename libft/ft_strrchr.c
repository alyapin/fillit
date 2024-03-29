/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:27:51 by kzina             #+#    #+#             */
/*   Updated: 2019/04/10 22:50:38 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i != 0 && s[i] != c)
		i--;
	if (i == 0 && c != s[i])
		return (NULL);
	return ((char*)&s[i]);
}
