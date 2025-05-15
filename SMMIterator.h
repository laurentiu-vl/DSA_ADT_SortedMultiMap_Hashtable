#pragma once

#include "SortedMultiMap.h"


class SMMIterator{
    friend class SortedMultiMap;
private:
    //DO NOT CHANGE THIS PART
    const SortedMultiMap& map;
    SMMIterator(const SortedMultiMap& map);

    //ADT SortedMultiMap – repräsentiert mithilfe einer Hashtabelle mit offener
    //Adressierung, mit doppeltem Hashing, wo eindeutige Schlüssel zusammen mit einem
    //dynamischen Array von Werten gespeichert werden. In dem Constructor des Iterators
    //erstelle ein sortiertes Array von Elementen der Form (Schlüssel, dynamisches Array von
    //Werten) und benutze es für die Iterierung.

    int size;
    int index;
    //array de tip cheie, vector de valori

public:
    void first();
    void next();
    bool valid() const;
    TElem getCurrent() const;
};

