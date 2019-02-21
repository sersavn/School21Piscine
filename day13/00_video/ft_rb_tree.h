/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsardine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:49:29 by jsardine          #+#    #+#             */
/*   Updated: 2019/02/13 16:52:35 by jsardine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum	e_rb_color
	{	
		RB_BLACK,
		RB_RED
	};


typedef struct			s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*right;
	struct s_rb_node	*left;
	void				*data;
	enum e_rb_color		color;
}						t_rb_node;
