/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 20:36:57 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/10 20:38:15 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//match function
int        match(char *s1, char *s2)
{
    char    star;

    if ((*s1 == *s2) && (*s1) && (*s2))
    {
        return match(++s1, ++s2);
    }
    else if ((*s2 == '*') && (*s1))
    {
        return (match(s1 + 1, s2) || (match(s1, s2 + 1)));
    }
    else if ((!*s1) && (*s2 == '*'))
    {
        while(*s2 == '*')
        {
        s2++; 
        return(s1, s2);
        }
    }
    
    else
    {
        return (0);
    }
    return (1);
}

int        main(void)
{
    char *w1;
    char *w2;

    w1 = "ABCdegc";
    w2 = "ABC*c ";

    match (w1, w2);
    printf("%d", match(w1, w2));
    return (0);
}