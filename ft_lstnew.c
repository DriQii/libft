/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evella <evella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:47:35 by evella            #+#    #+#             */
/*   Updated: 2023/10/01 23:47:59 by evella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptrlst;

	ptrlst = (t_list *)malloc(sizeof(*ptrlst));
	if (!ptrlst)
		return (NULL);
	ptrlst->next = NULL;
	ptrlst->content = content;
	return (ptrlst);
}
