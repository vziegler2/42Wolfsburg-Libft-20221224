/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:33:59 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/23 22:29:06 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, (ft_strlen(s1) + 1));
	return (p);
}

// Reserviert genug Speicher für eine Kopie des Strings.
// Kopiert den String anschließend und gibt einen Pointer auf ihn zurück.

// char	*p;

// 	p = malloc(sizeof(char) * (ft_strlen(s1) + 1));
// 	if (!p)
// 		return (NULL);
// 	ft_strlcpy(p, s1, (ft_strlen(s1) + 1));
// 	return (p);