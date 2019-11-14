project('ds', 'cpp', version: '1.0.0', default_options: ['c_std=c17'])

sources = [
  'binary_tree/binary_tree.cc',
]

inc_dir = include_directories('include')

libds = shared_library('ds', sources, install:true, include_directories: inc_dir)
libds = declare_dependency(link_with: libds, include_directories: inc_dir)

test_sources = [
  'test/test_binary_tree.cc'
]

executable('test_binary_tree',
	   sources: 'test/test_binary_tree.cc',
	   dependencies: libds)
