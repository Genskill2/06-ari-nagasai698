#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


string ari(string T)
{
    int c=0,w=0,s=0;
    for(int i=0 ; i< strlen(T); i++){
    if(isalnum(T[i])){
    c++;
    }
    else if (T[i]==' ')
    {
    w++;
    }
    else if (T[i]=='.' || T[i]=='?' || T[i]=='!')
    {
    s++;
    }
   }
    float score;
    int ari_s;
    score = 4.71*((float)c/(float)w)+(0.5*((float)w/(float)s))-21.43;
    if((int)(score+0.5)>(int)score)
    ari_s=(int)(score+0.5);
    else
    ari_s=(int)(score)+1;
    switch(ari_s)
    {
case 1:return "Kindergarten";
       break;
case 2:return "First/Second Grade";
       break; 
case 3:return "Third Grade";
       break;
case 4:return "Fourth Grade";
       break;
case 5:return "Fifth Grade";
       break;
case 6:return "Sixth Grade";
       break;
case 7:return "Seventh Grade";
       break;
case 8: return "Eighth Grade";
        break;
case 9:return "Ninth Grade";
       break;
case 10:return "Tenth Grade";
        break;
case 11:return "Eleventh Grade";
        break;
case 12:return "Twelfth grade";
        break;
case 13:return "College student";
        break;
case 14:return "Professor";
        break;
default:break; 
 }
 }
