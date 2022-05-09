#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) 
{
    struct Stats
    {
    float average = 0.0;
    float min = 0.0;
    float max = 0.0;
    } s;
    
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
    s.average = (sum/setlength);
    s.min = min;
    s.max = max;
    
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
