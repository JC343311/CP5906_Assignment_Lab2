#ifndef H_COOKIE
#define H_COOKIE
enum CookieState { UNEATEN, EATEN, EXPIRED};

enum PrizeValueIndex {LOW, MEDIUM, HIGH, HIGHEST};


#include "BoardObjectH.h"

class Cookie : public BoardObject
{

private:
	CookieState status;
	ObjectColours color1;
	ObjectColours  color2;
	PrizeValueIndex valueIndex;

public:
	Cookie (int start_x, int start_y):BoardObject(start_x,start_y)
		{ status=UNEATEN;
		  color1 = YELLOW;
		  color2  = BLUE;
		  valueIndex=LOW;
                  myClass=A_COOKIE;
		};

	int get_value();

	void touch ();
};
#endif
