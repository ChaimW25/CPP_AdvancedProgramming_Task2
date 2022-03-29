//#include "doctest.h"
//#include "Notebook.hpp"
//using namespace ariel;
//
//#include <string>
//using namespace std;
//
//namespace ariel {
//    Notebook n;
//    TEST_CASE("Good input") {
//        n.write(9, 7, 9,Direction::Horizontal, "s");
//                CHECK("s" == n.read(9,7,9,Direction::Horizontal,1) );
//        n.write(0, 7, 9,Direction::Horizontal, "s")
//                CHECK("s" == n.read(0,7,9,Direction::Horizontal,1) );
//        n.write(0, 0, 0,Direction::Horizontal, "s")
//                CHECK( "s" == n.read(0,0,0,Direction::Horizontal,1) );
////                CHECK(n.write(105, 7, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(9, 706, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(105, 0, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(9, 9, 9,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(300, 300, 0,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(97, 77, 97,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
////                CHECK(n.write(0, 0, 1,Direction::Horizontal, "s") == n.read(9,7,9,Direction::Horizontal,1) );
//
//
//    }
//
//    TEST_CASE("Bad input") {
////                CHECK_THROWS(n.write(-10, 5, 6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(-10, 5, 105, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(10, 5, 209, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(-10, -10, 6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(-10, 5, -6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(10, 5, -6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(-10, 0, 6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(10, -5, 6, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(-10, 5, 0, Direction::Horizontal, "s"));
////                CHECK_THROWS(n.write(0, 0, 106, Direction::Horizontal, "s"));
//
//    }
//}