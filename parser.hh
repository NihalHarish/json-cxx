
#ifndef _IK_JSON_PARSER_
#define _IK_JSON_PARSER_

#include <json/json.h>

#include "node.hh"

class Parser {
public:

  Parser();
  Parser(const char*);
  ~Parser();

  struct json_object *operator [](const char*);

private:
  
  struct json_object *doc;

};

#endif // _IK_JSON_PARSER_

