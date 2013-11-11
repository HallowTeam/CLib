/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_putnstr(char *str, int length)
{
  int	i;

  i = 0;
  while (i < length)
  {
    if (my_charisprint(str[i]))
    {
      my_putchar(str[i]);
    }
    else
    {
      my_putchar('.');
    }
    i++;
  }
}
