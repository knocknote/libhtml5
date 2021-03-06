#pragma once

#include "html5.h"
#include "event_target.h"

NAMESPACE_HTML5_BEGIN;

class ApplicationCache;
class Console;
class Document;
class External;
class Element;
class History;
class IDBFactory;
class Storage;
class Location;
class BarProp;
class Navigator;
class Promise;
class CSSStyleDeclaration;
class HTMLImageElement;
class HTMLVideoElement;
class HTMLCanvasElement;
class Blob;
class ImageData;
class CanvasRenderingContext2D;
class ImageBitmap;
class Transferable;
class Performance;
class WindowProxy;

class Window : public EventTarget {
public:

    HTML5_PROPERTY(Window, ApplicationCache *, applicationCache);
    HTML5_READONLY_PROPERTY(Window, bool, closed);
    HTML5_READONLY_PROPERTY_OBJECT(Window, Console, console);
    HTML5_PROPERTY_OBJECT(Window, Document, document);
    HTML5_PROPERTY(Window, External *, external);
    HTML5_PROPERTY(Window, Element *, frameElement);
    HTML5_PROPERTY(Window, WindowProxy *, frames);
    HTML5_PROPERTY(Window, History *, history);
    HTML5_PROPERTY(Window, IDBFactory *, indexedDB);
    HTML5_PROPERTY(Window, unsigned long, length);
    HTML5_PROPERTY(Window, Storage *, localStorage);
    HTML5_PROPERTY(Window, Location *, location);
    HTML5_PROPERTY(Window, BarProp *, locationbar);
    HTML5_PROPERTY(Window, BarProp *, menubar);
    HTML5_PROPERTY(Window, std::string, name);
    HTML5_PROPERTY(Window, Navigator *, navigator);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onabort);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onafterprint);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onautocomplete);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onautocompleteerror);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onbeforeprint);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onbeforeunload);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onblur);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oncancel);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oncanplay);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oncanplaythrough);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onchange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onclick);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onclose);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oncontextmenu);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oncuechange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondblclick);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondrag);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragend);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragenter);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragexit);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragleave);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragover);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondragstart);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondrop);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ondurationchange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onemptied);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onended);
    HTML5_ERROR_HANDLER_PROPERTY(Window, OnErrorEventHandler *, onerror);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onfocus);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oninput);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, oninvalid);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onkeydown);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onkeypress);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onkeyup);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onlanguagechange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onload);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onloadeddata);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onloadedmetadata);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onloadstart);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmessage);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmousedown);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmouseenter);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmouseleave);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmousemove);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmouseout);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmouseover);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmouseup);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onmousewheel);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onoffline);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ononline);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onpagehide);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onpageshow);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onpause);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onplay);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onplaying);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onpopstate);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onratechange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onreset);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onresize);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onscroll);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onseeked);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onseeking);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onselect);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onshow);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onsort);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onstalled);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onstorage);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onsubmit);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onsuspend);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ontimeupdate);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, ontoggle);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onunload);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onvolumechange);
    HTML5_EVENT_HANDLER_PROPERTY(Window, EventHandler *, onwaiting);
    HTML5_PROPERTY(Window, WindowProxy *, opener);
    HTML5_PROPERTY(Window, WindowProxy *, parent);
    HTML5_PROPERTY(Window, BarProp *, personalbar);
    HTML5_PROPERTY(Window, BarProp *, scrollbars);
    HTML5_PROPERTY(Window, WindowProxy *, self);
    HTML5_PROPERTY(Window, Storage *, sessionStorage);
    HTML5_PROPERTY(Window, std::string, status);
    HTML5_PROPERTY(Window, BarProp *, statusbar);
    HTML5_PROPERTY(Window, BarProp *, toolbar);
    HTML5_PROPERTY(Window, WindowProxy *, top);
    HTML5_PROPERTY(Window, WindowProxy *, window);
    HTML5_PROPERTY(Window, Performance *, performance);

    Window(emscripten::val v);
    virtual ~Window();
    static Window *create();
    static Window *create(emscripten::val v);
    void alert(std::string message);
    std::string atob(std::string atob);
    void blur();
    std::string btoa(std::string btoa);
    void cancelAnimationFrame(long handle);
    void clearInterval(long handle);
    void clearTimeout(long handle);
    void close();
    bool confirm(std::string message);
    Promise *createImageBitmap(HTMLImageElement *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(HTMLVideoElement *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(HTMLCanvasElement *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(Blob *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(ImageData *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(CanvasRenderingContext2D *image, long sx, long sy, long sw, long sh);
    Promise *createImageBitmap(ImageBitmap *image, long sx, long sy, long sw, long sh);
    Promise *fetch(const std::string &url);
    void focus();
    CSSStyleDeclaration *getComputedStyle(Element *elt, std::string pseudoElt);
    WindowProxy *getter(void *indexName);
    WindowProxy *open(std::string url, std::string target, std::string features, bool replace);
    void postMessage(void *message, std::string targetOrigin, std::vector<Transferable *> transfer);
    void print();
    std::string prompt(std::string message, std::string _default);
    long requestAnimationFrame(const std::function<void(double)> &callback);
    long setInterval(const std::function<void(void)> &handler, long timeout);
    long setTimeout(const std::function<void(void)> &handler, long timeout);
    void stop();

    void requestAnimationFrameCallback(double time);
    void setIntervalCallback();
    void setTimeoutCallback();
private:
    std::function<void(double)> _requestAnimationFrameFn;
    std::function<void(void)> _setIntervalFn;
    std::function<void(void)> _setTimeoutFn;
};

class WindowProxy : public Window {
public:

    WindowProxy(emscripten::val v);
    virtual ~WindowProxy();
    static WindowProxy *create(emscripten::val v);
};

NAMESPACE_HTML5_END;
