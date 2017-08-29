/*
** trade_order.c for  in /home/renard_e/2/ProgElem/trade
** 
** Made by Gregoire Renard
** Login   <renard_e@epitech.net>
** 
** Started on  Tue Jan 31 17:47:14 2017 Gregoire Renard
** Last update Thu May 25 19:00:36 2017 Gregoire Renard
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trade.h"

static void		treatment(t_trade *trade, int value)
{
  int			purcent_max;
  int			purcent_min;
  
  if (trade->min > value)
    trade->min = value;
  if (trade->max < value)
    trade->max = value;
  purcent_min = (10 * trade->min) / 100;
  purcent_max = (10 * trade->max) / 100;
  if (trade->action > 1 && value >= trade->max - purcent_max)
    sell(trade->action, trade);
  else if (trade->money >= value && value <= trade->min + purcent_min)
    buy(1, trade);
  else
    wait();
}

static void		know_min_max(t_trade * const trade)
{
  int			value;

  value = atoi(trade->line);
  if (trade->min == -1 && trade->max == -1)
    {
      trade->min = value;
      trade->max = value;
      wait();
    }
  else
    treatment(trade, value);
}

int			trade_order(t_trade *trade)
{
  static int		day = 0;

  if (day >= trade->maxdays - 1)
    {
      if (trade->action != 0)
	sell(trade->action, trade);
      else
	wait();
    }
  else
    know_min_max(trade);
  day++;
  return (1);
}
