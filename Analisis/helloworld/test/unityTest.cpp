#include "../src/h2.cpp"
#include <gtest/gtest.h>



TEST(helloWorld,hola) { 
    ASSERT_EQ(0, holaMundo());  
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}