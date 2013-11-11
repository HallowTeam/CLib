/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_strposz(char *str, char *needle, int a, int b)
{
  int	i;
  int	length;

  length = my_strlen(str);
  a = my_int(((a < 0) ? length + a : a), 0, length);
  b = my_int(((b < 0) ? length + b + 1 : b), 0, length);
  while (a < b)
  {
    i = 0;
    while (needle[i] && a + i < b && needle[i] == str[a + i])
    {
      i++;
    }
    if (needle[i] == '\0')
    {
      return (a);
    }
    a++;
  }
  return (-1);
}
