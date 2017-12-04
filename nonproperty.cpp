//============================================================================
// Name        : nonproperty.cpp
// Copyright   : Your copyright notice
// Description : Actions for nonproperties in monopoly, 
//============================================================================

#include <iostream>
#include "space.h"
#include "nonproperty.h"
#include "player.h"

using namespace std;


NonProperty::NonProperty(string name, int in_jail){};

string NonProperty::get_name() const
{
  return name;
};

void NonProperty::do_action()
{
	int loc = player().getPosition();
	
	if (loc == 4){
		player().subtract_money(100);
	};
	
	if (loc ==10){
		if (in_jail==0){
		}
		if (in_jail>0 && in_jail<4){
      ***********************
			roll_die();//FIGURE OUT HOW THIS CAN CONNECT
      ***********************
			in_jail++;
		}
	};
	
	if (loc == 20){
	};
	
	if (loc == 30){
		player().move_to_position(10);
		in_jail++;
	};
	if (loc == 38){
		player().subtract_money(200);
	};
	
	
}
