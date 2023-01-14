/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:57:00 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/24 11:12:25 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *) b)[len] = (unsigned char) c;
	return (b);
}

// Setzt len Positionen ab *b auf den Wert c.

// Direkter Eintrag des Strings als Argument ist nicht möglich, da sonst
// der String constant ist und eine Veränderung unmöglich wird.
// Unsigned char damit auch negative Eingaben richtig interpretiert werden.
// Segfault wenn (!b) als Argument übergeben wird.