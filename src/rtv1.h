/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:20:34 by ekantane          #+#    #+#             */
/*   Updated: 2022/10/31 15:57:49 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "../libft/libft.h"
#include <SDL2/SDL.h>
#include <stdio.h>
# include <math.h>

# define WIDTH 1920
# define HEIGHT 1080

typedef struct s_rtv
{
	SDL_Window		*win;
	SDL_Renderer	*ren;
	SDL_Surface		*sur;
	SDL_Event		event;
}					t_rtv;

/* The vector structure */
typedef struct{
	float x,y,z;
}vector;

/* The sphere */
typedef struct{
	vector pos;
	float radius;
	int material;
}sphere; 

/* The ray */
typedef struct{
	vector start;
	vector dir;
}ray;

/* Colour */
typedef struct{
	float red, green, blue;
}colour;

/* Material Definition */
typedef struct{
	colour diffuse;
	float reflection;
}material;

/* Lightsource definition */
typedef struct{
	vector pos;
	colour intensity;
}light;

#endif
