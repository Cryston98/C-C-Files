/* Implementați funcțiile starts_with și ends_with, cu antetele int 
   starts_with(char *s1, char *s2); ,respectiv int 
   ends_with(char *s1, char *s2);. Funcția starts_with returnează 
   1 dacă șirul s1 începe cu șirul s2 și 0 altfel.
   Funcția ends_with returnează 1 dacă șirul s1 se termină cu șirul s2 și 0 altfel.
   
*/

 // mama
 // mamaie
 
 int ends_with (char *s1,char *s2)
 {
   char *cauta;
   cauta=strstr(s1,s2);
   if(stricmp(cauta,s2)==0) 
      return 1;
   else 
      return 0;
 }
 
 int start_with(char *s1,char *s2)
 {
    int ok=1,i;
    for(i=0;i<strlen(s2);i++)
	if(s1[i]!=s2[i]) 
	    ok=0;
 return ok;
 }