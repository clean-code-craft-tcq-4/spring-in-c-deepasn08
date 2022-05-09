#include "stats.h"



struct Stats compute_statistics(const float* numberset, int setlength) 
{
   struct Stats p;
    
    int i;
    float sum = 0.0;
    float min,max = numberset[0];
    for(i=0;i< setlength;i++)
    {
       sum = sum + numberset[i] ;
       if (numberset[i] > max)
         max = numberset[i];
      
       if (min > numberset[i])
         min = numberset [i] ;        
    }
    p.average = (sum/setlength);
    p.min = min;
    p.max = max;
    
    
    return p;
} 

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
