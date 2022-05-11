#include <alerter.h>

  int emailAlerter()
    {
        emailAlertCallCount ++;
    }
    
  int ledAlerter()
    {
        ledAlertCallCount ++;
    }
  
 int check_and_alert(maxThreshold, alerters, computedStats);
{
        if (computedStats.average > maxThreshold)
        {
           alerters[0]();
           alerters[1]();
        }
}
