/*
** sell.c for  in /home/renard_e/2/ProgElem/trade/src
** 
** Made by Gregoire Renard
** Login   <renard_e@epitech.net>
** 
** Started on  Mon Jan 30 11:00:50 2017 Gregoire Renard
** Last update Thu May 25 18:10:18 2017 Gregoire Renard
*/

#include <stdio.h>
#include <stdlib.h>
#include "trade.h"

static void		get_new_money(t_trade *trade, int n)
{
  int			number;
  int			pourcent;

  number = atoi(trade->line) * n;
  pourcent = ((0.15 * number) / 100) + 1;
  trade->money += number - pourcent;
}

void			sell(int n, t_trade *trade)
{
  get_new_money(trade, n);
  trade->action = trade->action - n;
  dprintf(1, "sell %i\n", n);
}
