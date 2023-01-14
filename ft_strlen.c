/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:15:34 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/24 11:09:11 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// Gibt die Anzahl der Stringelemente ohne '\0' aus
// Das letzte Element ist an der Indexstelle i-1
// stddef wird für den Typ size_t gebraucht
// size_t ist auf die Größe der Adressen im System abgestimmt
// Daher hat size_t auf jedem System eine ausreichend große Größe (int nicht)
// size_t wird häufig für Indexvariablen und Arraylängen verwendet