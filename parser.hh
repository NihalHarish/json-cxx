
#ifndef _IK_JSON_PARSER_
#define _IK_JSON_PARSER_

#include <json/json.h>

class Parser {
public:

  Parser();
  Parser(const char*);
  ~Parser();

  operator [](const char*);




private:
  
  struct json_object *doc;

};

#endif // _IK_JSON_PARSER_

