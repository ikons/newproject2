/* MAIN2.C */ 
#include <stdio.h> 
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include "palindrome.h" 
#include "removevowel.h" 
/*************************************************/ 

int main() 
{ 
   setlocale(LC_ALL, "");
   wchar_t novowelsStr[] = L"Θα βγάλω όλα τα φωνήεντα από αυτή την συμβολοσειρά.";
   wchar_t originalString[256];   
   wcscpy(originalString, novowelsStr);
   wprintf(L"palindrome (\"cat\") = %d \n", palindrome("cat") ); 
   wprintf(L"palindrome (\"noon\") = %d \n", palindrome("noon") );
   removevowel(novowelsStr);
   wprintf(L"removevowel (\"%ls\") = %ls \n",originalString, novowelsStr );
   return 0; 
}

