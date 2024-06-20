#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

template<typename T>
struct Ville
{
    T info;
    Ville <T>* next;
    Ville <T>* prev;

};

class Route
{
public:
    Ville <string>* pfirst;

    Route()
    {
        pfirst = nullptr;
    }

    void addFirst(string x)
    {
        Ville <string>* paux = new Ville<string>;

        paux->info = x;
        paux->prev = NULL;
        paux->next = pfirst;

        if (pfirst != NULL)
            pfirst->prev = paux;

        pfirst = paux;
    }

    Route findRoadIntersection(Route& route1, Route& route2)
    {
        Route intersection;
        Ville<string>* city1 = route1.pfirst;
        Ville<string>* city2 = route2.pfirst;

        while (city2 != NULL)
        {
            city1 = route1.pfirst;
            while (city1 != NULL)
            {
                if (city1->info == city2->info)
                    intersection.addFirst(city1->info);
                city1 = city1->next;
            }
            city2 = city2->next;
        }

        return intersection;
    }

};
