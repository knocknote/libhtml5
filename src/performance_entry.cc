#include "performance_entry.h"

USING_NAMESPACE_HTML5;

PerformanceEntry::PerformanceEntry(emscripten::val v) :
    Object(v)
{

}

PerformanceEntry::~PerformanceEntry()
{

}

PerformanceEntry *PerformanceEntry::create(emscripten::val v)
{
    auto entry = new PerformanceEntry(v);
    entry->autorelease();
    return entry;
}

HTML5_READONLY_PROPERTY_IMPL(PerformanceEntry, std::string, name);
HTML5_READONLY_PROPERTY_IMPL(PerformanceEntry, std::string, entryType);
HTML5_READONLY_PROPERTY_IMPL(PerformanceEntry, double, startTime);
HTML5_READONLY_PROPERTY_IMPL(PerformanceEntry, double, duration);
