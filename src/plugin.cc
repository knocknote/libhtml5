#include "mime_type.h"
#include "plugin.h"

Plugin::Plugin(emscripten::val v) :
    Object(),
    v(v)
{

}

Plugin::~Plugin()
{

}

Plugin *Plugin::create(emscripten::val v)
{
    auto plugin = new Plugin(v);
    plugin->autorelease();
    return plugin;
}

MimeType *Plugin::item(unsigned long index)
{
    return MimeType::create(HTML5_CALLv(this->v, item, index));
}

MimeType *Plugin::namedItem(std::string name)
{
    return MimeType::create(HTML5_CALLv(this->v, namedImte, name));
}
