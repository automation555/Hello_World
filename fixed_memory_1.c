
#include <stdio.h> 
#include <string.h> 

int main () 
{ 
char str1[] = "pune"; 
char str2[] = "city"; 

/* memcpy */
memcpy (str1, str2, sizeof(str2)); 	/* Complaint */
memcpy (str1, str2, (4));	/* Non-complaint */

/* memset */
#define ABC 2
char str[] = "emboldIndia"; 
memset(str, 't', sizeof(str)); 	/* Complaint */
memset(str, 't', 3);		/* Non-complaint */
int a =10;
memset(str, 't', a);		/* Complaint */
memset(str, 't', ABC);		/* Complaint */

/* memset_s */
memset_s(str, sizeof str, 'b', 5);	/* Non-Complaint */

/* strncat */
char src[50] = "efghijkl"; 
char dest[50]= "abcd"; 
strncat(dest, src, 5);    /* Non-Complaint */

/* strncat_s */
strncat_s(str1, 100, str2, 1000);	/* Non-Complaint */

/* strncmp */
char string1[15];
char string2[15];
int ret;
strcpy(string1, "abcdef");
strcpy(string2, "ABCDEF");
ret = strncmp(string1, string2, 4);	/* Non-Complaint */

/* malloc */
char name[100];
char *description;
strcpy(name, "Zara Ali");
description = malloc( 3 *sizeof(char) );    /* Non-Complaint */


/* calloc */
int n = 4, i, *p, s = 0;
p = (int*) calloc(n, sizeof(int));   /*complaint */
p = (int*) calloc(4, sizeof(int));	/* Non-Complaint */

/* realloc */
p = (int*) realloc(p, 6);	/* Non-Complaint */

/* memcpy */
char str3[15];
char str4[15];
int retr;
memcpy(str3, "abcdef", 6);	/* Non-Complaint */
memcpy(str4, "ABCDEF", 6);	/* Non-Complaint */

/* memcpy_s */
memcpy_s(dest,5,src,10);	/* Non-Complaint */

/* memcmp */
retr = memcmp(str3, str4, 5);	/* Non-Complaint */

/* memmove */
char dest2[] = "oldstring";
const char src2[]  = "newstring";
memmove(dest2, src2, 9);	/* Non-Complaint */

/* memmove_s */
memmove_s(dest,5,src,10);	/* Non-Complaint */

/* memchr */
const char str5[] = "http://www.embold.io";
const char ch = '.';
char *ret2;
ret2 = memchr(str5, ch, strlen(str5)); /*complaint */

return 0; 
} 

