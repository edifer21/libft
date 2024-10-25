/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:07:28 by patferna          #+#    #+#             */
/*   Updated: 2024/10/25 09:37:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    unsigned char a;

    a = c;
    i = 0;
    
while  (s[i] != 0)
    {
       if (s[i] == a)
        {
            return(char *)&s[i];
        }
         i++;
    }
    if (a == 0) 
         {
         return(char *)&s[i];
         }
    return 0;
}

int main (void)
{
    char text[] = "quedan 10 dias!!";
    //char * ptr;
    int  sele;
    
    sele = 'a';
    ft_strchr (text, sele);

 }
 