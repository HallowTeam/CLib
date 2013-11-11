/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_intlen(int nbr)
{
  int	res;

  res = 0;
  if (nbr / 10 == 0)
  {
    return (1);
  }
  else
  {
    res = res + 1;
    res = res + my_intlen(nbr / 10);
  }
  return (res);
}
