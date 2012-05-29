
#ifndef _IK_JSON_NODE_
#define _IK_JSON_NODE_

#include <json/json.h>

class Node {
public:

  Node();
  ~Node();
  Node(struct json_object *);

  const char* to_cstr();
  int to_int();

private:

  struct json_object *node;
};

#endif // _IK_JSON_NODE_

