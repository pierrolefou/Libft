/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:07:41 by pthan             #+#    #+#             */
/*   Updated: 2018/11/20 16:07:48 by pthan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if ((s1 == NULL && s2 == NULL) || n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 && *s2 && 0 < n--)
	{
		if (*s1 != *s2)
			return (0);
		s2++;
		s1++;
	}
	if ((n == 0) || (s1 == NULL && s2 == NULL))
		return (1);
	return (0);
}
