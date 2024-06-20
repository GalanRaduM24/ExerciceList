#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include "Lists.h"

using namespace std;

ifstream fin("test.txt");

int main() {
    
    Route route1;
    Route route2;


    route1.addFirst("Alexandria");
    route1.addFirst("Athens");
    route1.addFirst("Tomis");
    route1.addFirst("Sarmisegetusa");
    route1.addFirst("Aquileia");
    route1.addFirst("Rome");

    route2.addFirst("Napoca");
    route2.addFirst("Sarmisegetusa");
    route2.addFirst("Aquileia");
    route2.addFirst("Rome");

    Route intersection = route1.findRoadIntersection(route1, route2);
    if (intersection.pfirst != NULL && intersection.pfirst->info !="Rome") {
        cout << "Intersection: " << intersection.pfirst->info << endl;
    }
    else
    {
        cout << "No intersection found." << endl;
    }
	return 0;
}