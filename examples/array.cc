#include "libhtml5.h"
#include "class.h"
#include <math.h>

static void arrayTest()
{
    HTML5_INIT();

    auto array  = html5::Array::create(10);
    (*array)[0] = 1;
    (*array)[1] = M_PI;
    (*array)[2] = "hello";
    (*array)[3] = html5::Array::create(1);
    (*array)[4] = html5::Object::create();

    html5::window->console->log("array = ", array);

    int ivalue = (*array)[0];
    html5::window->console->log("array[0] = ", ivalue);

    double fvalue = (*array)[1];
    html5::window->console->log("array[1] = ", fvalue);

    std::string svalue = (*array)[2];
    html5::window->console->log("array[2] = ", svalue);

    html5::Array *avalue = (*array)[3];
    html5::window->console->log("array[3] = ", avalue);

    html5::Object *ovalue = (*array)[4];
    html5::window->console->log("array[4] = ", ovalue);

    int index = 0;
    for (const auto &e : *array) {
        switch (index) {
        case 0:
            html5::window->console->log((int)e);
            break;
        case 1:
            html5::window->console->log((double)e);
            break;
        case 2:
            html5::window->console->log((std::string)e);
            break;
        case 3:
            html5::window->console->log((html5::Array *)e);
            break;
        case 4:
            html5::window->console->log((html5::Object *)e);
            break;
        }
        index++;
    }

    array->forEach([](const html5::Array::Element &e, int index){
        html5::window->console->log(index);
    });
}

EMSCRIPTEN_BINDINGS(array) {
    emscripten::function("arrayTest", &arrayTest);
}