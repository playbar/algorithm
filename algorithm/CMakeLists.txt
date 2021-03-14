# demo
add_subdirectory(grass_rtree)
add_subdirectory(rtree)

add_executable(lrbteetest
        lrbtree.c
        lrbtreetest.c)

add_executable(RBTreeTest
        RBTree.cpp
        RBTreeTest.cpp)

add_executable(algorithm_test
        test1.cpp
)

add_executable(quick_sort
        quick_sort.cpp)