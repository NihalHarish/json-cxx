
#include <json/json.h>
#include <string>

#include "node.hh"
#include "parser.hh"


Parser::Parser() {
  doc = NULL;
}

Parser::Parser(const char* str) {
  doc = json_tokener_parse(str);
}

Parser::~Parser() {
  if(doc) json_object_put(doc);
}

struct json_object *Parser::operator [](const char* id) {
  return json_object_object_get(doc, id);
}

