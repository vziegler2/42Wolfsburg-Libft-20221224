/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vziegler <vziegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:30:52 by vziegler          #+#    #+#             */
/*   Updated: 2022/12/23 17:17:35 by vziegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// Beispiel ft_lstdelone(head->next, free);
// Im Beispiel zeigt das erste Argument auf die zweite Liste.
//18 Löscht den Speicher von content der zweiten Liste.
//19 Gibt den Speicher von next der ersten Liste frei,
//19 dadurch wird die erste von allen folgenden Listen getrennt.