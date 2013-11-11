/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_chartrim(char *str, char c)
{
  int	a;
  int	b;
  int	length;

  a = 0;
  b = 1;
  length = my_strlen(str);
  while (str[a] == c)
  {
    a++;
  }
  while (str[length - b] == c && length - b > a)
  {
    b++;
  }
  return (my_strres(str, a, -b));
}
