/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_strncmp(char *str1, char *str2, int length)
{
  int	i;
  int	len1;
  int	len2;

  i = 0;
  len1 = my_strlen(str1);
  len2 = my_strlen(str2);
  length = my_min(my_max(len1, len2), length);
  while (i < length)
  {
    if (i == len1 || i == len2)
    {
      return ((len1 == i) ? -1 : 1);
    }
    if (str1[i] != str2[i])
    {
      return ((str1[i] > str2[i]) ? 1 : -1);
    }
    i++;
  }
  return (0);
}
