/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 10:38:34 by patferna          #+#    #+#             */
/*   Updated: 2024-10-15 10:38:34 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
      i++;
    } 
    return (0);
}

int main (void)
{
    char str1[] = "sandia";
    char str2[] = "sandalias";
    size_t nu = 4;

    ft_strncmp(str1, str2, nu);
}
// while (i < n && (str1[i] != '\0' || str2[i] != '\0')) 
// 