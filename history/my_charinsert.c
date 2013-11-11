/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_charinsert(char *str1, char c, int pos)
{
  int	i;
  char	*str;
  int	length1;
  
  i = 0;
  length1 = my_strlen(str1);
  pos = my_int(((pos < 0)? length1 + pos + 1 : pos), 0, length1);
  if ((str = malloc((length1 + 2) * sizeof(*str))) == NULL)
  {
    return (NULL);
  }
  while (i < length1 + 1)
  {
    str[i] = ((i == pos)? c : ((i < pos)? str1[i] : str1[i - 1]));
    i++;
  }
  str[i] = '\0';
  return (str);
}
