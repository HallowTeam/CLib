/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_fixstr(char *str, char c, int size, int left)
{
  if (left == 1)
  {
    my_putrec(c, size - my_strlen(str));
    my_putstr(str);
  }
  else if (left == 0)
  {
    my_putstr(str);
    my_putrec(c, size - my_strlen(str));
  }

  return (str);
}
