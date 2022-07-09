/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonhan <jiwonhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:25:04 by jiwonhan          #+#    #+#             */
/*   Updated: 2022/07/07 15:29:36 by jiwonhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void* ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)b;
	while (len--)
		ptr[len] = (unsigned char)c;
	return (b);
}
