/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmushroo <lmushroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:04:05 by lmushroo          #+#    #+#             */
/*   Updated: 2020/11/13 19:12:49 by lmushroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			t;
	unsigned char	*estr;
	unsigned char	*edst;

	t = 0;
	estr = (unsigned char*)src;
	edst = (unsigned char*)dst;
	if (estr == NULL && edst == estr)
		return (NULL);
	while (t < n)
	{
		estr[t] = edst[t];
		t++;
	}
	return (edst);
}
