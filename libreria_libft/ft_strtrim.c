/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 09:47:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-22 09:47:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t len_s1;
    size_t start = 0;
    int i;
    char *ptr;

    len_s1 = strlen(s1);
    i = 0;
    while (s1[i] != '\0' && strchr(set, s1[i]) != NULL)
    {
        i++;
    }
    start = i;
    while (len_s1 > start && strchr(set, s1[len_s1 - 1]) != NULL)
    {
        len_s1--;
    }
    ptr = (char *)malloc(sizeof(char) * (len_s1 - start + 1));
    if (!ptr)
        return NULL;
    strncpy(ptr, &s1[start], len_s1 - start);
    ptr[len_s1 - start] = '\0';

    return ptr;
}

int main(void)
{
    char s1[] = "hola que tal queso";
    char set[] = "hosle";
    char *result = ft_strtrim(s1, set);

    if (result)
    {
        write(1, result, strlen(result));
        free(result);
    }
    return 0;
}