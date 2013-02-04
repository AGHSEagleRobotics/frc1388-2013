#ifndef EAGHE_ZONE_H
#define EAGLE_ZONE_H

#define DEFAULT_SCROLL_DELAY 20

#include "../InsightLT/Zone.h"

namespace eagles {

class DisplayData;

class Zone : public insight::Zone 
{
public:
	Zone();
	Zone(insight::Line, int, int, int, unsigned short int,unsigned short int=DEFAULT_SCROLL_DELAY);		
	void setTime(unsigned short int);
	void registerData(DisplayData *item);
	void removeDataElement(DisplayData *);
	void advanceZoneUp();
	void advanceZoneDown();
	insight::Line getLine();
	int getPosition();
	std::string getLineOne();
	std::string getLineTwo();
	bool isTwoLines();
	void update();
	
private:
	insight::Line m_zoneLine;
	int m_zonePosition;
	int m_zoneLength;
	bool m_twoLines;
	bool m_rotate;
	int m_scrollPosition;
	int m_scrollOffset;
	timespec m_scrollTimer;
	timespec m_sideScrollTimer;
	// lenght of time each information item is displayed
	unsigned short int m_displayTime;
	unsigned short int m_scrollTime;
	// container for information items
	std::vector<eagles::DisplayData*> m_infoItems;
    int getTimeDifference(timespec time1, timespec time2);		
    void scroll();
    
    size_t m_fullInfoLength;
    short int m_endScroll;
};


}
#endif // EAGLE_ZONE_H
