/*
** init_trade.c for  in /home/renard_e/2/ProgElem/trade/src
** 
** Made by Gregoire Renard
** Login   <renard_e@epitech.net>
** 
** Started on  Mon Jan 30 14:04:48 2017 Gregoire Renard
** Last update Thu May 25 17:58:58 2017 Gregoire Renard
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "trade.h"

int			init_trade(t_trade *trade)
{
  trade->size = 0;
  trade->action = 0;
  trade->min = -1;
  trade->max = -1;
  if ((getline(&trade->line, &trade->size, stdin)) == -1)
    return (-1);
  trade->line[strlen(trade->line) - 1] = 0;
  trade->size = 0;
  trade->money = atoi(trade->line);
  if ((getline(&trade->line, &trade->size, stdin)) == -1)
    return (-1);
  trade->line[strlen(trade->line) - 1] = 0;
  trade->size = 0;
  trade->maxdays = atoi(trade->line);
  return (0);
}
