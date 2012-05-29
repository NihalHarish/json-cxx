
#include <string>

#include "parser.hh"


Parser::Parser() {
  doc = NULL;
}

Parser::Parser(const char* str) {
  doc = json_tokener_parse(str);
}

Parser::~Parser() {
  if(doc) json_object_put(doc)
}

Node *Parser::operator [](const char* id) {

  struct json_object *node;

  node = json_object_object_get(new_obj, id);

  new Node(node);
}

