
#include <json/json.h>

#include "node.hh"

Node::Node(struct json_object *n ) : node(n) { }

Node::~Node() {
  if(node) json_object_put(node);
}

const char* Node::to_cstr() {
  return json_object_get_string(node);
}

int Node::to_int() {
  return json_object_get_int(node);
}

