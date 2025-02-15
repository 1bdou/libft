/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharik <acharik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:34:02 by acharik           #+#    #+#             */
/*   Updated: 2023/11/26 22:11:20 by acharik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isalpha(int num)
{
	return ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'));
}
