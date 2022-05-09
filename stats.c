#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) 
{
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i;
    float sum = 0;
    float min,max = numberset[0];
    for(i=0;i< setlength;i++)
    {
       sum = sum + numberset[i] ;
       if (numberset[i] > max)
         max = numberset[i];
      
       if (min > numberset[i])
         min = numberset [i] ;        
    }
    s.average = (sum/setlength);
    s.min = min;
    s.max = max;
    
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
