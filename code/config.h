#ifndef CONFIG_H
#define CONFIG_H

#include "globals.h"

void saveConfig();
void loadConfig();
bool isPushChannelValid(const PushChannel& ch);
bool isConfigValid();
bool keywordsMatch(const String& keywords, const char* message);
String getDeviceUrl();

#endif
