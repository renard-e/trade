/*
** trade.h for  in /home/renard_e/2/ProgElem/trade/include
** 
** Made by Gregoire Renard
** Login   <renard_e@epitech.net>
** 
** Started on  Mon Jan 30 10:09:26 2017 Gregoire Renard
** Last update Thu May 25 17:58:14 2017 Gregoire Renard
*/

#ifndef TRADE_H_
#define TRADE_H_

#include <unistd.h>

typedef struct		s_trade
{
  int			maxdays;
  int			money;
  size_t		size;
  char			*line;
  int			action;
  int			min;
  int			max;
}			t_trade;

void			buy(int n, t_trade *trade);
void			sell(int n, t_trade *trade);
void			wait();
int			word_word(const char *str1, const char *str2);
int			init_trade(t_trade *trade);
int			trade_order(t_trade *trade);

#endif /* !TRADE_H_ */
