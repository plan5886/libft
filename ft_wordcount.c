/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mypark <mypark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 00:46:31 by mypark            #+#    #+#             */
/*   Updated: 2022/04/04 00:46:33 by mypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_wordcount(char **words)
{
	int	count;

	count = 0;
	while (words[count])
		count++;
	return (count);
}
