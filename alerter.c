#include "alerter.h"
#include "stats.h"

  void emailAlerter()
    {
        emailAlertCallCount ++;
    } 
  void ledAlerter()
    {
        ledAlertCallCount ++;
    }
 //alerter_funcptr alerters[] = {emailAlerter, ledAlerter};

 void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
        if (computedStats.max > maxThreshold)
        {
           alerters[0]();
           alerters[1]();
        }
}
