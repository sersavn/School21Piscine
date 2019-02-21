/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:50:24 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/16 22:31:49 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*a_operations_stack(char *str);
int 	a_operations_stack_len(char *arr);
char	*b_output_stack(char *str);
int		b_output_stack_len(char *arr);
int		c_reading_digits(char *str);
char	*output_stack_filling(char *str);
int		eval_expr(char *str);

#endif
