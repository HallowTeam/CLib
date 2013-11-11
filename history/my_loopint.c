/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_loopint(int *nbr, int min, int max)
{
  int	offset;

  offset = 0;
  while (*nbr >= max || *nbr < min)
  {
    if (*nbr >= max)
    {
      *nbr = min + (*nbr - max);
      offset = 1;
    }
    else if (*nbr < min)
    {
      *nbr = max - (min - *nbr);
      offset = -1;
    }
  }
  return (offset);
}
