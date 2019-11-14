#include <iostream>
#include <string>
#include <assert.h>
#include <vector>

typedef struct _bin_node {
  std::string key;
  std::string value;
  struct _bin_node *left;
  struct _bin_node *right;
  struct _bin_node *parent;
} bin_node;

bin_node *new_bin_node(std::string key, std::string value);
bin_node *insert_bin_node(bin_node *root, bin_node *node);
bin_node *find_bin(bin_node *root, std::string key);
void delete_bin_node(bin_node *root);
void inorder_traverse(bin_node *root, std::vector<std::string> &r);
