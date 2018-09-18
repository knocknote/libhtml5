#pragma once

#include "libhtml5.h"

class History : public Object {
public:
    emscripten::val v;
    HTML5_READONLY_PROPERTY(History, long, length);
    //HTML5_PROPERTY(History, void *, state);

    History(emscripten::val v);
    virtual ~History();
    static History *create(emscripten::val v);
    void back();
    void forward();
    void go(long delta = 0);
    void pushState(void *data, std::string title, std::string url);
    void replaceState(void *data, std::string title, std::string url);
};