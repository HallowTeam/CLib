/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    my_putchar(str[i]);
    i++;
  }
}
