#include "main.h"
#include  <stdlib.h>

/**
 * str_concat - function that copy two diffrent arry
 *              of string into one
 *@s1:original string
 *@s2:original string
 *Return:if fail return null otherwise return string
 */

char *str_concat(char *s1, char *s2)
{
	char *cs;
	int i, s1_l = 0, s2_l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_l] != '\0')
		s1_l++;
	while (s2[s2_l] != '\0')
		s2_l++;

	cs = malloc(sizeof(char) * (s1_l + s2_l));
	if (cs == NULL)
		return (NULL);

	for (i = 0; i < s1_l; i++)
		cs[i] = s1[i];
	for (i = 0; i < s2_l; i++)
		cs[s1_l + i] = s2[i];
	cs[s1_l + s2_l] = '\0';
	return (cs);
}

