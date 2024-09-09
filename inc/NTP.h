#ifndef NTP_H_
#define NTP_H_

#include "config.h"


void sendNTPpacket(IPAddress &address);
time_t getNtpTime() ;
void initNTP();

#endif /* NTP_H_ */