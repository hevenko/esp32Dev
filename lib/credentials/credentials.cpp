/**
 * credentials.cpp
 * 
 * Credentials for wifi and access point.
 * 
 * created by Tihomir Magdic
 * created 2020-3-15
 * 
 */

#include <credentials.h>
#include <misc.h>

struct sCredentials credentials = {
	"ISKONOVAC-5cc058", "ISKON2819503460", // "SSID", "PASS",
	"Air-Q" + String(getChipId(), HEX), "5A9i0r-Q2u8a7L6i4t3y"
};
