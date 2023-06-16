/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:16:14 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/16 17:11:40 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <pthread.h>
# include <unistd.h>
# include <sys/time.h>
# include <stdlib.h>

typedef struct s_philos
{
	/* data */
} t_philos;

typedef struct s_individ
{
	int			id;
	int			num_meals;
	int			last_meal;
	long int	sleep;
	long int	eat;
	long int	think;
	long int	time;
} t_individ;

/* checkers */
// is_digit, similar checks as push swap
// check for empty strings
// check for negatives nums tabs etc

/* utilities */

/* initialize = putting args in structs */

/* dinner */

/* time */

/* kill dinner */