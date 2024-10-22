memcpy (ptr,s1, s1_len);/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:26:07 by patferna          #+#    #+#             */
/*   Updated: 2024/10/22 02:12:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*ptr;
	size_t	s1_len;
    size_t	str2_len;

	if (!(s1 || s2))
		return (NULL);
	s1_len = strlen(s1);
    str2_len = strlen(s2);

	ptr = malloc(((s1_len + str2_len) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	memcpy (ptr,s1, s1_len);
    memcpy (ptr,s2 + s1_len , str2_len);
	//ptr[len] = '\0';
	return (ptr);
    
}

int main (void)
{
    char s1[] = "ahora tengo 8 dias";
    char s2[] = "up to you"; 
    ft_strjoin(s1, s2);
}
// s1 y s2 son string que se añadira a una nueva string
// que estara almacenada en malloc
// Return: la nueva string y NULL si falla la memoria
//