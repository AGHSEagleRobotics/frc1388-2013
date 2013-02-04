#include <iostream>

#include "Zone.h"
#include "DisplayData.h"

using namespace eagles;
using namespace std;

Zone::Zone(insight::Line line, int f, int g, int h, unsigned short int j, unsigned short int p) 
{
	insight::Zone(line,f,g,h,j);
	m_scrollTime = p;
	
}

int Zone::getTimeDifference(timespec time1, timespec time2)
{
    return (time1.tv_sec - time2.tv_sec) * 1000 + (int)(((time1.tv_nsec - time2.tv_nsec) / 1000000 * (time1.tv_nsec > time2.tv_nsec ? 1 : -1)));
}

void Zone::update()
{
	if(m_rotate)
	{	
		timespec tmpTime;
		int milliSecs;
		clock_gettime(CLOCK_REALTIME, &tmpTime);
		
		milliSecs = getTimeDifference(tmpTime, m_scrollTimer);
		
		if(milliSecs > m_displayTime)
		{
			advanceZoneDown();
			cout << "Class: " << this << " - scroll:" << m_scrollPosition << endl;
			clock_gettime(CLOCK_REALTIME, &m_scrollTimer);
		}
		
		// We really wanna make sure we're on time.
		clock_gettime(CLOCK_REALTIME, &tmpTime);
		milliSecs = getTimeDifference(tmpTime, m_sideScrollTimer);
		
		if (milliSecs > m_scrollTime)
		{
			scroll();
			clock_gettime(CLOCK_REALTIME, &m_sideScrollTimer);
		}
		
	}
}

void Zone::scroll()
{
	if (m_scrollOffset<m_fullInfoLength)
		m_scrollOffset++;
	else if (m_endScroll > 5)
		m_scrollOffset = 0;
	else
		m_endScroll++;
}

string Zone::getLineOne()
{
	string tmpString(m_zoneLength, '-');
	
	if (!m_infoItems.empty()) {
		tmpString.erase(0, tmpString.size());
		for (unsigned int i=0; i<m_infoItems.size(); i++)
		{
			tmpString+=m_infoItems[i]->getFormattedString(0);
			tmpString+="   ";
		}
		m_fullInfoLength = tmpString.size();
	}
	
	return tmpString.substr(m_scrollOffset, m_zoneLength);
}
