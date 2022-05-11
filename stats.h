 struct Stats
    {
    float average = 0.0;
    float min = 0.0;
    float max = 0.0;
    } ;

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
