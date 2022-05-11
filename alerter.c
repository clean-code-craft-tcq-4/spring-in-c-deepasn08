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

 void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
        if (computedStats.average > maxThreshold)
        {
           alerters[0]();
           alerters[1]();
        }
}
