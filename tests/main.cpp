#include "gtest/gtest.h"
#include "version.h"
#include <iostream>


TEST(version, test1)
{

    std::cout << "Build number " << version() << std::endl;
    EXPECT_GT(version(), 0);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}