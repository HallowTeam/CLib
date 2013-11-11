/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_charposz(char *str, char c, int a, int b)
{
  int	len;

  len = my_strlen(str);
  a = my_int(((a < 0) ? len + a : a), 0, len);
  b = my_int(((b < 0) ? len + b + 1 : b), 0, len);
  while (a < b)
  {
    if (str[a] == c)
    {
      return (a);
    }
    a = a + 1;
  }
  return (-1);
}
