/*
** main.c for  in /home/renard_e/2/ProgElem/trade/src
** 
** Made by Gregoire Renard
** Login   <renard_e@epitech.net>
** 
** Started on  Mon Jan 30 10:08:05 2017 Gregoire Renard
** Last update Thu May 25 18:45:19 2017 Gregoire Renard
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trade.h"

int			main()
{
  t_trade		trade;

  if ((init_trade(&trade)) == -1)
    return (1);
  while ((getline(&trade.line, &trade.size, stdin)) > 0
	 && (word_word(trade.line, "--end--\n")) != 1)
    {
      if (strlen(trade.line) > 0)
	trade.line[strlen(trade.line) - 1] = '\0';
      dprintf(2, "line = *%s*\n", trade.line);
      trade.size = 0;
      trade_order(&trade);
    }
  dprintf(2, "je quitte la boucle , dernier ligne lu = %s\n", trade.line);
  return (0);
}
