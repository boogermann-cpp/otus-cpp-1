#include "gtest/gtest.h"
#include "version.h"

TEST(version, test1)
{
    EXPECT_EQ(version(), 1);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}