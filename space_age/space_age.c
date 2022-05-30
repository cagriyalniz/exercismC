#include "space_age.h"


float age(planet_t planet, int64_t seconds){
    if(planet == EARTH)
        return (seconds/31557600);
    else if(planet == MERCURY)
        return ((seconds/31557600)/0.2408467);
    else if(planet == VENUS)
        return ((seconds/31557600)/0.61519726);
    else if(planet == MARS)
        return ((seconds/31557600)/1.8808158);
    else if(planet == JUPITER)
        return ((seconds/31557600)/11.862615);
    else if(planet == SATURN)
        return ((seconds/31557600)/29.447498);
    else if(planet == URANUS)
        return ((seconds/31557600)/84.016846);
    else if(planet == NEPTUNE)
        return ((seconds/31557600)/ 164.79132);
    else return -1;
}
