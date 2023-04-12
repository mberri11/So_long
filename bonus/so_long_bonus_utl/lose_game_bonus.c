/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lose_game_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberri <mberri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 09:32:56 by mberri            #+#    #+#             */
/*   Updated: 2022/06/24 19:39:06 by mberri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	lose_game(t_game *game)
{
	game->walk_cnt++;
	ft_putstr("You lose :( try again :) \n");
	exit_game(game);
}
