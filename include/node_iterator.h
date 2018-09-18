#pragma once

#include "libhtml5.h"

class Node;
class NodeFilter;

class NodeIterator : public Object {
public:
    emscripten::val v;

    HTML5_PROPERTY_OBJECT(NodeIterator, NodeFilter, filter);
    HTML5_PROPERTY(NodeIterator, bool, pointerBeforeReferenceNode);
    HTML5_PROPERTY_OBJECT(NodeIterator, Node, referenceNode);
    HTML5_PROPERTY_OBJECT(NodeIterator, Node, root);
    HTML5_PROPERTY(NodeIterator, unsigned long, whatsToShow);

    NodeIterator(emscripten::val v);
    virtual ~NodeIterator();
    static NodeIterator *create(emscripten::val v);
    void detach();
    Node *nextNode();
    Node *previousNode();
};
