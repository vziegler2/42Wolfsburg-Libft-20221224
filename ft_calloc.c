/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:56:29 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/24 11:16:11 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// Reserviert Speicher für count Objekte mit size Byte Größe.
// Der reservierte Speicher wird mit Nullen gefüllt.
// Gibt einen Pointer auf den reservierten Speicher zurück.
// Im Fehlerfall wird NULL zurückgegeben und errno auf ENOMEM gesetzt.
// Korrekt berechneter Speicher ist die Voraussetzung,
// um einen Überlauf durch (count * size) zu verhindern.