#include "ds_type.hh"

int main(void)
{
  auto root = new_bin_node("1", "1");

  bin_node *node;

  node = new_bin_node("8", "8");
  insert_bin_node(root, node);
  node = new_bin_node("4", "4");
  insert_bin_node(root, node);
  node = new_bin_node("7", "7");
  insert_bin_node(root, node);
  node = new_bin_node("2", "2");
  insert_bin_node(root, node);
  node = new_bin_node("3", "3");
  insert_bin_node(root, node);

  std::vector<std::string> list;
  inorder_traverse(root, list);

  for (auto s: list) {
    std::cout << s << '\n';
  }

  return 0;
}
