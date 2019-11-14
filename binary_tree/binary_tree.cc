#include "ds_type.hh"

bin_node *new_bin_node(std::string key, std::string value)
{
  auto root = new bin_node;
  root->key = key;
  root->value = value;
  root->left = root->right = root->parent = nullptr;
  return root;
}

bin_node *insert_bin_node(bin_node *root, bin_node *node)
{
  assert(root && node);
  bin_node *ptr = root;
  bin_node *prev = root;
  while (ptr) {
    if (node->key == ptr->key) {
      throw "duplicate key";
    }
    else if (node->key < ptr->key) {
      prev = ptr;
      ptr = ptr->left;
    }
    else {
      prev = ptr;
      ptr = ptr->right;
    }
  }
  node->parent = prev;
  if (node->key < prev->key) {
    prev->left = node;
  } else {
    prev->right = node;
  }
  return root;
}

bin_node *find_bin(bin_node *root, std::string key)
{
  assert(root);
  bin_node *ptr = root;
  while (ptr) {
    if (key == ptr->key)
      return ptr;
    else if (key < ptr->key)
      ptr = ptr->left;
    else
      ptr = ptr->right;
  }
  return nullptr;
}

void delete_bin_node(bin_node *node)
{
  assert(node);
  bin_node *ptr = node->right;
  bin_node *prev = node;
  while (ptr) {
    prev = ptr;
    ptr = ptr->left;
  }
  prev->parent->left = prev->right;
  prev->parent = node->parent;
  if (node->parent->left == node)
    node->parent->left = prev;
  else
    node->parent->right = prev;
  delete node;
}

void inorder_traverse(bin_node *root, std::vector<std::string> &r)
{
  assert(root);
  if (root->left)
    inorder_traverse(root->left, r);
  r.push_back(root->value);
  if (root->right)
    inorder_traverse(root->right, r);
}

