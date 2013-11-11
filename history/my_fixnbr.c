/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_fixnbr(int num, char c, int size)
{
  int	i;
  int	length;

  i = 0;
  length = my_intlen(num);
  while (i < size - length)
  {
    my_putchar(c);
    i++;
  }
  my_putdec(num);
}
