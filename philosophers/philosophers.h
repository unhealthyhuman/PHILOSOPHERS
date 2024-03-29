/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischmutz <ischmutz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:56:58 by ischmutz          #+#    #+#             */
/*   Updated: 2024/02/02 16:54:25 by ischmutz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
#define PHILOSOPHERS_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>

typedef struct s_args
{
	int	num_philo;
	int	x_2_die;
	int	x_2_eat;
	int	x_to_sleep;
	int	num_x_philo_eat;
}	t_args;

typedef struct s_data
{
	t_args	args;
}	t_data;



#endif