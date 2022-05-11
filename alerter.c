#include "alerter.h"

  void emailAlerter()
    {
        emailAlertCallCount ++;
    }
    
  void ledAlerter()
    {
        ledAlertCallCount ++;
    }
 alerter_funcptr alerters[] = {emailAlerter, ledAlerter};

 void check_and_alert(maxThreshold, alerters, computedStats);
{
        if (computedStats.average > maxThreshold)
        {
           alerters[0]();
           alerters[1]();
        }
}
